#include <stdio.h>
#include "Triangle.h"

char *getTriangleName_isosceles(int l1, int l2, int l3)
{
  if (l1 == l2 || l2 == l3 || l1 == l3)
    {
      return "isosceles";
    }
  else
    {
    return "yallow";
    }
}

char *getTriangleName_NotTriangle(int l1, int l2, int l3)
{
  if (l1 <= 0 || l2 <= 0 || l3 <= 0)
  {
    return "is not a triangle";
  }
  else
  {
    return "yallow";
  }
}

char *getTriangleName_Equilateral(int l1, int l2, int l3)  
{
  
  if ((l1 > 0 || l2 > 0 || l3 > 0) && (l1 == l2 && l2 == l3 && l1 == l3) )
    {
      return "equilateral";
    }
  else 
  {
    return "error";
  }
}


char *getTriangleName_Scalene(int l1, int l2, int l3)  
{
  
  if ((l1 > 0 || l2 > 0 || l3 > 0) && (l1 != l2 && l2 != l3 && l1 != l3) )
    {
      return "scalene";
    }
  else 
  {
    return "error";
  }
}

int add(int v1,int v2)
{
  return v1+v2;
}
