#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void)
{
    //defined in employeeOne.c or employeeTwo.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    //defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //declaration

    //match/nomatch for employee number
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

    //match/nomatch for employee name
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
    {
        printf("Employee Tony Bobcat is in record %d\n",matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee Tony Bobcat is NOT found in the record\n");
    }

    //match/nomatch for employee phone
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if(matchPtr != NULL)
    {
        printf("Employee phone 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee phone 909-555-1235 is NOT found in the record\n");
    }

    //match/nomatch for employee salary
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.33);
    if(matchPtr != NULL)
    {
        printf("Employe salary 6.34 is in the record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("Employee salary 6.34 is NOT found in the record");
    }
    return EXIT_SUCCESS;
}