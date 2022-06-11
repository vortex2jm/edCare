#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/validation.h"
#include "../include/elderlyList.h"


///======================================Main=========================================//

int main(int argc, char ** argv){

    // Verifying if have args
    ValidateArg(argc);

    ElderlyList * elderlyList = CreateElderlyList();

    InsertElderliesIntoList(elderlyList, argv);

    PrintElderlyList(elderlyList);
    
    return 0;
}