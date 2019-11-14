#ifndef COORDINATOR_UTILITY_H
#define COORDINATOR_UTILITY_H

#include "fileDescriptorsArray.h"


void getCommandLineArgs(int, char **, char **);
int getFileRecordsCount(char *);
int countCoaches(char **);
void forkCoach(int, char *, char *, char *, int);
void checkAndForkCoach(pid_t, int, char *, char *, char *, int);
void forkAndExecCoaches(int, char *, char **, int);
void allocateCoordinatorDataStructures(FileDescriptorsArray *FDA, double **, double **, double **, double **, int **, int);
void getCoachesDataFromPipes(FileDescriptorsArray FDA, double *, double *, double *, double *, int *);
void freeCoordinatorDataStructures(FileDescriptorsArray, double *, double *, double *, double *, int *);

#endif
