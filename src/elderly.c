#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/elderly.h"

struct elderly {

    char * name;
    SensorsData ** data;
    int dataAmount;

};

// Public functions======================================================================== //
Elderly * RegisterElderly(char * name, SensorsData ** data, int dataAmount){

    Elderly * newElderly = (Elderly*) malloc(sizeof(Elderly));

    newElderly->name = strdup(name);
    newElderly->data = data;
    newElderly->dataAmount = dataAmount;

    return newElderly;
}

// ======================================================================================== //
void PrintElderly(Elderly * elderly){

    if(elderly == NULL) printf("Elderly do not exists!\n\n");

    else if(elderly->name == NULL) printf("Elderly without name!\n\n");
    
    else printf("nome do idoso: %s\n", elderly->name);
}

// ======================================================================================== //
char * ElderlyName(Elderly * elderly){

    return elderly->name;
}

SensorsData * ReturnSensorDataByIndex(Elderly * elderly, int index){

    return elderly->data[index];
}

// ======================================================================================== //
int ReturnDataAmount(Elderly * elderly){

    return elderly->dataAmount;
}

SensorsData ** ReturnAllData(Elderly * elderly){

    return elderly->data;
}   