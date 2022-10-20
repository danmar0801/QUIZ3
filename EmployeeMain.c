//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 
//gcc employeeMain.c employeeTable.c employeeTwo.c 
#include <string.h> 
#include <stdlib.h> 
#include "Employee.h" 

int main(void){ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * PhoneToFind); 
    //defined in employeeTable.c 
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;      
    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1001);
    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n"); 
    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 
    // this return a valid phone record
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2134"); 
    if (matchPtr != NULL) 
        printf("Employee 909-555-2134 is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee 909-555-2134 is NOT found in the record\n"); 
    // this return an invalid phone record
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2034"); 
    if (matchPtr != NULL) 
        printf("Employee 909-555-2134 is in record %ld\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee 909-555-2034 is NOT found in the record\n");






    return EXIT_SUCCESS;
    
     

}