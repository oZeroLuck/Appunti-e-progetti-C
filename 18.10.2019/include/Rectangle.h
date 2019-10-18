#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include "Point.h"

struct rectangle{
  point bottom_left;
  point top_right;
};

int width(rectangle r);
int heigth(rectangle r);
int area(rectangle r);

#endif
