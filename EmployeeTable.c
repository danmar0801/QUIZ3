#include<string.h> 
#include<stdlib.h> 
#include"employee.h" 
Employee EmployeeTable[]= 
{ 
  {1001,"DaphneBorromeo", "909-555-2134",8.78}, 

  {1011,"TammyFranklin",  "213-555-1212",4.50}, 

  {1140,"DorrisPerl",   "310-555-1215",7.80}, 

  {4011,"TonyBobcat",   "909-555-1235",6.34}, 

  {5045,"BrianHeight",   "714-555-2749",8.32} 

}; 
constintEmployeeTableEntries=sizeof(EmployeeTable)/sizeof(EmployeeTable[0]);