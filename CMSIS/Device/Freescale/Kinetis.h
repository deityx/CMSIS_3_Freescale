
#ifndef __Kinetis_H__
#define __Kinetis_H__


#include "MK00/MK00.h"
#include "MK10/MK10.h"
#include "MK20/MK20.h"
#include "MK30/MK30.h"
#include "MK40/MK40.h"
#include "MK50/MK50.h"
#include "MK60/MK60.h"
#include "MK70/MK70.h"
#include "MKE00/MKE00.h"
#include "MKL00/MKL00.h"
#include "MKL10/MKL10.h"
#include "MKL20/MKL20.h"
#include "MKL30/MKL30.h"
#include "MKL40/MKL40.h"
#include "MKM10/MKM10.h"
#include "MKM30/MKM30.h"
#include "MKV10/MKV10.h"
#include "MKV30/MKV30.h"
#include "MKW00/MKW00.h"
#include "MKW20/MKW20.h"

#if !defined(__MCU_DEFINED__)
#error No CPU Kinetis defined.
#endif

#endif
/*

#if defined(MK10DN32xxx5) || defined(MK10DX32xxx5) || defined(MK10DN64xxx5) || defined(MK10DX64xxx5) || defined(MK10DN128xxx5) || defined(MK10DX128xxx5)
#define __MK10D5__
#include          "MK10/MK10D5.h"

#elif defined(MK10DX64xxx7) || defined(MK10DX128xxx7) || defined(MK10DX256xxx7)
#define __MK10D7__
#include          "MK10/MK10D7.h"

#elif defined(MK10DX128Zxxx10) || defined(MK10DX256Zxxx10) || defined(MK10DN512Zxxx10)
#define __MK10DZ10__
#include          "MK10/MK10DZ10.h"

#elif defined(MK10DX128xxx10) || defined(MK10DX256xxx10) || defined(MK10DN512xxx10)
#define __MK10D10__
#include          "MK10/MK10D10.h"

#elif defined(MK10FX512xxx12) || defined(MK10FN1M0xxx12)
#define __MK10F12__
#include          "MK10/MK10F12.h"

#elif defined(MK11DX128xxx5) || defined(MK11DX256xxx5) || defined(MK11DN512xxx5)
#define __MK11D5__
#include          "MK10/MK11D5.h"

#elif defined(MK12DX128xxx5) || defined(MK12DX256xxx5) || defined(MK12DN512xxx5)
#define __MK12D5__
#include          "MK10/MK12D5.h"

#elif defined(MK20DN32xxx5) || defined(MK20DX32xxx5) || defined(MK20DN64xxx5) || defined(MK20DX64xxx5) || defined(MK20DN128xxx5) || defined(MK20DX128xxx5)
#define __MK20D5__
#include          "MK20/MK20D5.h"

#elif defined(MK20DX64xxx7) || defined(MK20DX128xxx7) || defined(MK20DX256xxx7)
#define __MK20D7__
#include          "MK20/MK20D7.h"

#elif defined(MK20DX128Zxxx10) || defined(MK20DX256Zxxx10) || defined(MK20DN512Zxxx10)
#define __MK20DZ10__
#include          "MK20/MK20DZ10.h"

#elif defined(MK20DX128xxx10) || defined(MK20DX256xxx10) || defined(MK20DN512xxx10)
#define __MK20D10__
#include          "MK20/MK20D10.h"

#elif defined(MK20FX512xxx12) || defined(MK20FN1M0xxx12)
#define __MK20F12__
#include          "MK20/MK20F12.h"

#elif defined(MK21DX128xxx5) || defined(MK21DX256xxx5) || defined(MK21DN512xxx5)
#define __MK21D5__
#include          "MK20/MK21D5.h"

#elif defined(MK21FX512xxx12) || defined(MK21FN1M0xxx12)
#define __MK21F12__
#include          "MK20/MK21F12.h"

#elif defined(MK22DX128xxx5) || defined(MK22DX256xxx5) || defined(MK22DN512xxx5)
#define __MK22D5__
#include          "MK20/MK22D5.h"

#elif defined(MK22FN128xxx10)
#define __MK22F12810__
#include          "MK20/MK22F12810.h"

#elif defined(MK22FN256xxx12)
#define __MK22F25612__
#include          "MK20/MK22F25612.h"

#elif defined(MK22FN512xxx12)
#define __MK22F51212__
#include          "MK20/MK22F51212.h"

#elif defined(MK22FX512xxx12) || defined(MK22FN1M0xxx12) || defined(MK24FN1M0xxx12)
#define __MK24F12__
#include          "MK20/MK24F12.h"

#elif defined(MK30DX64xxx7) || defined(MK30DX128xxx7) || defined(MK30DX256xxx7)
#define __MK30D7__
#include          "MK30/MK30D7.h"

#elif defined(MK30DX128Zxxx10) || defined(MK30DX256Zxxx10) || defined(MK30DN512Zxxx10)
#define __MK30DZ10__
#include          "MK30/MK30DZ10.h"

#elif defined(MK30DX128xxx10) || defined(MK30DX256xxx10) || defined(MK30DN512xxx10)
#define __MK30D10__
#include          "MK30/MK30D10.h"

#elif defined(MK40DX64xxx7) || defined(MK40DX128xxx7) || defined(MK40DX256xxx7)
#define __MK40D7__
#include          "MK40/MK40D7.h"

#elif defined(MK40DX128Zxxx10) || defined(MK40DX256Zxxx10) || defined(MK40DN512Zxxx10)
#define __MK40DZ10__
#include          "MK40/MK40DZ10.h"

#elif defined(MK40DX128xxx10) || defined(MK40DX256xxx10) || defined(MK40DN512xxx10)
#define __MK40D10__
#include          "MK40/MK40D10.h"

#elif defined(MK50DX128xxx7) || defined(MK50DX256xxx7)
#define __MK50D7__
#include          "MK50/MK50D7.h"

#elif defined(MK50DX256xxx10) || defined(MK50DN512xxx10)
#define __MK50D10__
#include          "MK50/MK50D10.h"

#elif defined(MK50DX256Zxxx10) || defined(MK50DN512Zxxx10)
#define __MK50DZ10__
#include          "MK50/MK50DZ10.h"

#elif defined(MK51DX128xxx7) || defined(MK51DX256xxx7)
#define __MK51D7__
#include          "MK50/MK51D7.h"

#elif defined(MK51DX256xxx10) || defined(MK51DN512xxx10)
#define __MK51D10__
#include          "MK50/MK51D10.h"

#elif defined(MK51DX256Zxxx10) || defined(MK51DN512Zxxx10)
#define __MK51DZ10__
#include          "MK50/MK51DZ10.h"

#elif defined(MK52DN512xxx10)
#define __MK52D10__
#include          "MK50/MK52D10.h"

#elif defined(MK52DN512Zxxx10)
#define __MK52DZ10__
#include          "MK50/MK52DZ10.h"

#elif defined(MK53DX256xxx10) || defined(MK53DN512xxx10)
#define __MK53DZ10__
#include          "MK50/MK53D10.h"

#elif defined(MK53DX256Zxxx10) || defined(MK53DN512Zxxx10)
#define __MK53DZ10__
#include          "MK50/MK53DZ10.h"

#elif defined(MK60DN256xxx10) || defined(MK60DX256xxx10) || defined(MK60DN512xxx10)
#define __MK60D10__
#include          "MK60/MK60D10.h"

#elif defined(MK60DN256Zxxx10) || defined(MK60DX256Zxxx10) || defined(MK60DN512Zxxx10)
#define __MK60DZ10__
#include          "MK60/MK60DZ10.h"

#elif defined(MK60FX512xxx12) || defined(MK60FN1M0xxx12)
#define __MK60F12__
#include          "MK60/MK60F12.h"

#elif defined(MK60FX512xxx15) || defined(MK60FN1M0xxx15)
#define __MK60F15__
#include          "MK60/MK60F15.h"

#elif defined(MK61FX512xxx12) || defined(MK61FN1M0xxx12)
#define __MK61F12__
#include          "MK60/MK61F12.h"

#elif defined(MK61FX512xxx15) || defined(MK61FN1M0xxx15)
#define __MK61F15__
#include          "MK60/MK61F15.h"

#elif defined(MK63FN1M0xxx12)
#define __MK63F12__
#include          "MK60/MK63F12.h"

#elif defined(MK64FX512xxx12) || defined(MK64FN1M0xxx12)
#define __MK64F12__
#include          "MK60/MK64F12.h"

#elif defined(MK70FX512xxx12) || defined(MK70FN1M0xxx12)
#define __MK70F12__
#include          "MK70/MK70F12.h"

#elif defined(MK70FX512xxx15) || defined(MK70FN1M0xxx15)
#define __MK70F15__
#include          "MK70/MK70F15.h"

#elif defined(MKE02Z16xxx2) || defined(MKE02Z32xxx2) || defined(MKE02Z64xxx2)
#define __MKE02Z2__
#include          "MKE00/MKE02Z2.h"

#elif defined(MKE02Z16xxx4) || defined(MKE02Z32xxx4) || defined(MKE02Z64xxx4)
#define __MKE02Z4__
#include          "MKE00/MKE02Z4.h"

#elif defined(MKE04Z8xxx4) || defined(MKE04Z64xxx4)
#define __MKE04Z4__
#include          "MKE00/MKE04Z4.h"

#elif defined(MKE04Z128xxx4)
#define __MKE04Z1284__
#include          "MKE00/MKE04Z1284.h"

#elif defined(MKE06Z64xxx4) || defined(MKE06Z128xxx4)
#define __MKE06Z4__
#include          "MKE00/MKE06Z4.h"

#elif defined(MKL02Z8xxx4) || defined(MKL02Z16xxx4) || defined(MKL02Z32xxx4)
#define __MKL02Z4__
#include          "MKL00/MKL02Z4.h"

#elif defined(MKL03Z8xxx4) || defined(MKL03Z16xxx4) || defined(MKL03Z32xxx4)
#define __MKL03Z4__
#include          "MKL00/MKL03Z4.h"

#elif defined(MKL04Z8xxx4) || defined(MKL04Z16xxx4) || defined(MKL04Z32xxx4)
#define __MKL04Z4__
#include          "MKL00/MKL04Z4.h"

#elif defined(MKL05Z8xxx4) || defined(MKL05Z16xxx4) || defined(MKL05Z32xxx4)
#define __MKL05Z4__
#include          "MKL00/MKL05Z4.h"

#elif defined(MKL14Z32xxx4) || defined(MKL14Z64xxx4)
#define __MKL14Z4__
#include          "MKL10/MKL14Z4.h"

#elif defined(MKL15Z32xxx4) || defined(MKL15Z64xxx4) || defined(MKL15Z128xxx4)
#define __MKL15Z4__
#include          "MKL10/MKL15Z4.h"

#elif defined(MKL16Z32xxx4) || defined(MKL16Z64xxx4) || defined(MKL16Z128xxx4) || defined(MKL16Z256xxx4)
#define __MKL16Z4__
#include          "MKL10/MKL16Z4.h"

#elif defined(MKL24Z32xxx4) || defined(MKL24Z64xxx4)
#define __MKL24Z4__
#include          "MKL20/MKL24Z4.h"

#elif defined(MKL25Z32xxx4) || defined(MKL25Z64xxx4) || defined(MKL25Z128xxx4)
#define __MKL25Z4__
#include          "MKL20/MKL25Z4.h"

#elif defined(MKL26Z32xxx4) || defined(MKL26Z64xxx4) || defined(MKL26Z128xxx4) || defined(MKL26Z256xxx4)
#define __MKL26Z4__
#include          "MKL20/MKL26Z4.h"

#elif defined(MKL34Z64xxx4)
#define __MKL34Z4__
#include          "MKL30/MKL34Z4.h"

#elif defined(MKL36Z64xxx4) || defined(MKL36Z128xxx4) || defined(MKL36Z256xxx4)
#define __MKL36Z4__
#include          "MKL30/MKL36Z4.h"

#elif defined(MKL46Z128xxx4) || defined(MKL46Z256xxx4)
#define __MKL46Z4__
#include          "MKL40/MKL46Z4.h"

#elif defined(MKM14Z64xxx5) || defined(MKM14Z128xxx5)
#define __MKM14Z5__
#include          "MKM10/MKM14Z5.h"

#elif defined(MKM33Z64xxx5) || defined(MKM33Z128xxx5)
#define __MKM33Z5__
#include          "MKM30/MKM33Z5.h"

#elif defined(MKM34Z128xxx5)
#define __MKM34Z5__
#include          "MKM30/MKM34Z5.h"

#elif defined(MKV10Z16xxx7) || defined(MKV10Z32xxx7)
#define __MKV10Z7__
#include          "MKV10/MKV10Z7.h"

#elif defined(MKV31F128xxx10)
#define __MKV31F12810__
#include          "MKV30/MKV31F12810.h"

#elif defined(MKV31F256xxx12)
#define __MKV31F25612__
#include          "MKV30/MKV31F25612.h"

#elif defined(MKV31F512xxx12)
#define __MKV31F51212__
#include          "MKV30/MKV31F51212.h"

#elif defined(MKW01Z128xxx)
#define __MKW01Z4__
#include          "MKW00/MKW01Z4.h"

#elif defined(MKW21D256xxx5) || defined(MKW21D512xxx5)
#define __MKW21D5__
#include          "MKW20/MKW21D5.h"

#elif defined(MKW22D512xxx5)
#define __MKW22D5__
#include          "MKW20/MKW22D5.h"

#elif defined(MKW24D512xxx5)
#define __MKW24D5__
#include          "MKW20/MKW24D5.h"

#elif defined(SKEAZN16xxx2) || defined(SKEAZN32xxx2) || defined(SKEAZN64xxx2)
#define __SKEAZN642__
#include          "SKEA/SKEAZN642.h"

#elif defined(SKEAZN8xxx4)
#define __SKEAZN84__
#include          "SKEA/SKEAZN84.h"

#elif defined(SKEAZ64xxx4) || defined(SKEAZ128xxx4)
#define __SKEAZ1284__
#include          "SKEA/SKEAZ1284.h"

#else
#error BUG
#endif
#endif

*/