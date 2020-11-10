/*******************************************************************************
 * AUTHOR         : Mohammed Taei
 * STUDENT ID     : 1019392
 * HOMEWORK #9    : Virtual Functions & Abstract Classes
 * CLASS          : CS1C
 * SECTION        : T/Th 12:30
 ******************************************************************************/
#ifndef SHAPE_H_
#define SHAPE_H_
#include<iostream>
using namespace std;
class Shape
{
public:
  Shape(){}
  virtual ~Shape(){}
  virtual int calcPerimeter()=0;
  virtual int calcArea()=0;
  virtual int getL();
  virtual int getW();
  virtual void setL(int);
  virtual void setW(int);
};
#endif
