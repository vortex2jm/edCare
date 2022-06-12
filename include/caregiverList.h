#ifndef caregiver_list_h
#define caregiver_list_h
#include "caregiver.h"

typedef struct carelist CareList;

CareList * CreateCareList();

void InsertOneCareGiver(CareList * list, Caregiver * caregiver);

CareList * InsertCaregiversFromFileIntoList(CareList * list, char ** argv);

Caregiver * ReturnCaregiverByName(CareList * carelist, char * name);

void PrintCaregiversList(CareList * list);

#endif