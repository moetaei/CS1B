/*******************************************************************************
 * AUTHOR         : Mohammed Taei
 * STUDENT ID     : 1019392
 * HOMEWORK #9    : Virtual Functions & Abstract Classes
 * CLASS          : CS1C
 * SECTION        : T/Th 12:30
 ******************************************************************************/
#ifndef REC_H_
#define REC_H_
#include "shape.h"

class Rectangle : public Shape
{
private:
  int l,w;
public:
  Rectangle(int num1, int num2)
{
    l = num1;
    w = num2;
}
  int calcPerimeter(){return (2*l)+(2*w);}
  int calcArea(){return (l*w);}
  void Print(){}
  int getL(){return l;}
  int getW(){return w;}
  void setL(int val){l=val;}
  void setW(int val){w=val;}

};



#endif /* REC_H_ */
