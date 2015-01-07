#!/bin/bash

#
#  Instructions for adding new families and chips.
#
#       To add a new chip family see comment in chiptoheader.
#
#       In order to aid you in adding a new chip, chips that do not match 
#               any targets above will print to stdout.
# 
#       TO-DO:
#               Print families that have no target chips.

# Start clean
rm -f */*..h processchips heads tails

# Enumerate chips
cat chiptoheader | grep "define MK" | cut -f-2 -d" " | sort | sed '/^/=' | sed 'N;s/\n/ /' | sed 's/\(.*\) \(.*\) \(.*\)/\2 \3 \1/' > heads
cat chiptoheader | grep -v "define MK" > tails
cat heads tails > chiptoheader

# Generate headers
for i in `cat all_mcu` ; { gcc -x c -E `echo $i | sed 's/\([A-Z]*[0-9]\)\([0-9]*[A-Z]*[0-9MZA]*\)\([A-Z][A-Z][A-Z]\)\(.*\)/-D\1\2\3\4=\1\2xxx\4 -D__TARGET__=\1\2\3\4 -DFAM=\1 -DDEFF=__\1\2\3\4__/g'` chiptoheader | grep -ve '^#' ; } > processchips
for i in `cat processchips | grep -v OUTPUT` ; { echo $i | sed 's/SpAcE/ /g' | sed 's/HaSh/\n#/g' | tail --lines=4 >> `echo $i | sed 's/HeAdEr/.h /g' | cut -f1 -d" "` ; }
for i in `cat processchips | grep OUTPUT` ; { echo $i | sed 's/SpAcE/ /g' | sed 's/HaSh/\n#/g' | sed 's/OUTPUT/\n#error Device not defined yet\n#endif/' | sed -n '/^$/ !p' | tail --lines=3 >> `echo $i | sed 's/HeAdEr/.h /g' | cut -f1 -d" "` ; }
for i in `cat processchips | grep OUTPUT` ; { echo $i | sed 's/HaSh/ /g' | sed 's/HeAdEr/h/' | sed 's/[()]/ /g' | grep OUTPUT | cut -d" " -f1,3 ; }
for i in */*..h ; { ( echo '/* Automatically generated. Do not edit. ' ; echo 'See file ../chiptoheader for instructions. */' ; cat $i ) > `echo $i| sed 's/\.\././g'` ; }

# Clean up
rm -f */*..h processchips heads tails
