#include "Point.h"

point move(point p, int dx, int dy){
  p.x += dx;
  p.y += dy;
  return p;
}
