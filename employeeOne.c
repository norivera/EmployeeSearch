#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tablesize, long targetNumber)
{
    const PtrToConstEmployee endPtr = ptr + tablesize;
    for(; ptr < endPtr; ptr++) //search until end of table
    {
        if(ptr->number == targetNumber) // check if it equals the Employee number
        {
            return (PtrToEmployee) ptr; //return location of the number call
        }
    }
    return NULL; //this will only happen if no employee number matches in loop above
}

//essentially the same functionality as above but comapring strings to check if equal
PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name,targetName)==0)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}

//Function to search for employee by phone
PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tablesize, char * targetPhone)
{
    const PtrToConstEmployee endPtr = ptr + tablesize;
    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->phone,targetPhone)==0)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}

//function to seach employee by salary
PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tablesize, double targetSalary)
{
    const PtrToConstEmployee endPtr = ptr + tablesize;
    for(; ptr < endPtr; ptr++)
    {
        if(ptr->salary == targetSalary)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}