// IRrecvDumpV2.h

#ifndef _IRRECVDUMPV2_h
#define _IRRECVDUMPV2_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "src/IRremote_fix/IRremote.h"

//cpp 파일의 함수들을 헤더에 선언해야 한다.
void  dumpInfo(decode_results* results);
void  dumpRaw(decode_results* results);
void  dumpCode(decode_results* results);

#endif

