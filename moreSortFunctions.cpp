/*************************************************/
//moreSortFunctions.cpp
//R. A. Hillyard
//October 15, 2001
//Implementation file gives function definitions
/*************************************************/

#include "moreSortFunctions.h"

/*****************************************************************/
//sort3 - overloaded function that sorts three integers from smallest to largest
/*****************************************************************/
void sort3(int& a, int& b, int& c)
  {
  if(a > b)
    { swap(a,b); }
  if(a > c)
    { swap(a,c); }
  if(b > c)
    { swap(b,c); }
  }//end sort3
/*****************************************************************/
//swap - overloaded function that interchanges the value of two integers
/*****************************************************************/
void swap(int& a, int& b)
  {
  int temp = a;
  a = b;
  b = temp;
  }//end swap

/*****************************************************************/
//sort3 - overloaded function that sorts three doubles from smallest to largest
/*****************************************************************/
void sort3(double& a, double& b, double& c)
  {
  if(a > b)
    { swap(a,b); }
  if(a > c)
    { swap(a,c); }
  if(b > c)
    { swap(b,c); }
  }//end sort3

/*****************************************************************/
//swap - overloaded function that interchanges the value of two doubles
/*****************************************************************/
void swap(double& a, double& b)
  {
  double temp = a;
  a = b;
  b = temp;
  }//end swap
/*****************************************************************/
