#include "Rectangle.h"

int width(rectangle r){
  return r.top_right.x-r.bottom_left.x;
}

int heigth(rectangle r){
  return r.top_right.y-r.bottom_left.y;
}

int area(rectangle r){
  return (width(r)*heigth(r));
}
