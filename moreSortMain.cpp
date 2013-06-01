/*************************************************/
//moreSortMain.cpp
//R. A. Hillyard
//October 15, 2001
//Main program for moreSort
/*************************************************/

#include<iostream>
#include "moreSortFunctions.h"

using namespace std;

int main()
  {
  char choice;
  int a = 0, b = 0, c = 0;
  double x = 0.0, y = 0.0, z = 0.0;
  
  cout << "Double or Ints [D/I]: ";
  cin >> choice;
  if(choice == 'I')
    {
    cout << "enter three ints: ";
    cin >>a>>b>>c;
    sort3(a,b,c);
    cout << "\n sorted: " << a << " " << b << " " << c << endl;
    }
  if(choice == 'D')
    {
    cout << "enter three doubles: ";
    cin >>x>>y>>z;
    sort3(x,y,z);
    cout << "\n sorted: " << x << " " << y << " " << z << endl;
    }
  return 0;
  }//end main
