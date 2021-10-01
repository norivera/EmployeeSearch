#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void)
{
    //defined in employeeOne.c or employeeTwo.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);

    //defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //declaration
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    //Example not found 
    if(matchPtr != NULL)
    {
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    }
    else 
    {
        printf("Employee ID 1045 is NOT found in the record\n");
    }

    //example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
    {
        printf("Employee Tony Bobcat is in record %d\n",matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee Tony Bobcat is NOT found in the record\n");
    }
    return EXIT_SUCCESS;
}