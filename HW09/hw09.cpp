/*******************************************************************************
 * AUTHOR         : Mohammed Taei
 * STUDENT ID     : 1019392
 * HOMEWORK #9    : Virtual Functions & Abstract Classes
 * CLASS          : CS1C
 * SECTION        : T/Th 12:30
 ******************************************************************************/
#include "header.h"

void printPerimeter(Shape& src);
void printArea(Shape& src);
int main ()
{
  cout << "Rectangle Dimensions:" << endl;
  Rectangle myr(20, 20);
  printPerimeter(myr);
  printArea(myr);
  cout << "Triangle Dimensions:" << endl;
  Triangle tri(8, 8, 15);
  printPerimeter(tri);
  printArea(tri);
}
void printPerimeter(Shape& src)
{
  cout << endl << "The area is: " <<  src.calcArea() << endl << endl;
}

void printArea(Shape& src)
{
  cout << "The perimeter is: " <<  src.calcPerimeter() << endl << endl;
}
