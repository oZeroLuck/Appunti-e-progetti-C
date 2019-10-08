#include "nsqrt.h"

double nsqrt(double x, double epsilon){
  double s=x/2;

  if (x==0)
      return 0;
  double diff;
  do{
       s = (s*s+x)/(2*s);
       diff = s*s-x;
    } while(diff < -epsilon || diff > epsilon);

    return s;
}
//Compilato con g++ -g -c nsqrt.cpp
