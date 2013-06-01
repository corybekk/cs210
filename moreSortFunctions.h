/*************************************************/
//moreSortFunctions.h
//R. A. Hillyard
//October 15, 2001
//Interface file gives function prototypes
//with per and post conditions
/*************************************************/

void sort3(int& a, int& b, int& c);
//per  condition a, b, and c have been given integer values
//post condition a, b, and c will be sorted from lowest to highest

void sort3(double& a, double& b, double& c);
//per  condition a, b, and c have been given double values
//post condition a, b, and c will be sorted from lowest to highest

void swap(int& a, int& b);
//per  condition a and b have been given integer values
//post condition the values of a and b will be interchanged

void swap(double& a, double& b);
//per  condition a and b have been given double values
//post condition the values of a and b will be interchanged

/**************************************************/
