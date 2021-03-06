#include <string.h>
#include "employee.h"

static PtrToEmployee searchEmployeeTable(PtrToConstEmployee ptr, int tableSize, const void * targetPtr, int (*functionPtr)(const void *, PtrToConstEmployee))
{
    PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if((*functionPtr)(targetPtr, ptr) == 0) //compareEmployeeNumber(&1045, TableRow)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}

//The functionPtr will point to one of these comparison functions to perform a check 
static int compareEmployeeNumber(const void *targetPtr, PtrToConstEmployee tableValuePtr)
{
    return * (long *) targetPtr != tableValuePtr->number;
}

static int compareEmployeeName(const void *targetPtr, PtrToConstEmployee tableValuePtr)
{
    return strcmp((char *) targetPtr, tableValuePtr->name);
}

//these are called wrappers. these functions are what you use in your main
PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int size, long number)
{
    return searchEmployeeTable(ptr, size, &number, compareEmployeeNumber);
}

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int size, char* name)
{
    return searchEmployeeTable(ptr, size, name, compareEmployeeName);
}