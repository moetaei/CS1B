/*******************************************************************************
 * AUTHOR         : Mohammed Taei
 * STUDENT ID     : 1019392
 * HOMEWORK #9    : Virtual Functions & Abstract Classes
 * CLASS          : CS1C
 * SECTION        : T/Th 12:30
 ******************************************************************************/
#ifndef TRI_H_
#define TRI_H_
#include "shape.h"

class Triangle : public Shape
{
private:
  int l,w,h;
public:
  Triangle(int num1, int num2, int num3)
{
    l = num1;
    w = num2;
    h = num3;
}

  int calcPerimeter(){return (l+w+h);}
  int calcArea(){return ((w*h)*.5);}
  void Print(){}
  int getL(){return l;}
  int getW(){return w;}
  int getH(){return h;}
  void setL(int val){l=val;}
  void setW(int val){w=val;}
  void setH(int val){h=val;}
};



#endif
