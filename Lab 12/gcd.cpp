#include "header.h"

int gcd(int greater, //CALC - the greater integer number
int smaller) //CALC - the smaller integer number
{

    if(greater == 0)
	  {
	  return smaller;
	  }
    if(smaller == 0)
	{
	return greater;
	}
  if(greater%smaller == 0)
      {
      return abs(smaller);
      }
  else
      {gcd(smaller, (greater%smaller));
      }
}
