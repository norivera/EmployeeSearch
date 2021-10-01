#include <string.h>
#include <stdlib.h>
#include "employee.h"

Employee EmployeeTable[] =
{
    {101l,  "Daphne Borromeo",  "909-555-2134", 8.75},
    {1011l, "Tammy Franklin",   "213-555-1212", 4.50},
    {1140l, "Dorris Perl",      "310-555-1215", 7.80},
    {4011l, "Tony Bobcat",      "909-555-1235", 6.34},
    {5045l, "Brian Height",     "714-555-2749", 8.32},
};

const int EmployeeTableEntries = sizeof(EmployeeTable)/sizeof(EmployeeTable[0]);

//explain padding in gcc compiler. each member in struct employee = 8 bytes
//depends on compiler used for memory alignment. All members can be accessed by incrementing equal dista
// void main()
// {
//     printf("%d\n", sizeof(EmployeeTable));
//     printf("%d\n", sizeof(EmployeeTable[0]));
//     printf("%d\n", sizeof(long));
//     printf("%d\n", sizeof(char*)); // i have intel 64 bit proocessor -> 8 bytes for adress
//     printf("%d\n", sizeof(char*)); // note this may change on your processor
//     printf("%d\n", sizeof(double));
// }