#ifndef SORTER_UTILITY_H
#define SORTER_UTILITY_H

#include "recordsArray.h"


void sendRecordsAndStatisticsThroughPipe(RecordsArray, double, int, int);
void sendSignalToParent(int);

#endif
