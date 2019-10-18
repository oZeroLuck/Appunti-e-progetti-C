#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main(){
  int x, y;
  std::cout<< "Please enter coordinates point top_right"<<std::endl;
  std::cout<<"X :";
  std::cin>>x;
  std::cout<<""<<std::endl;
  std::cout<<"Y :";
  std::cin>>y;
  std::cout<<""<<std::endl;

  point tr;
  tr.x=x;
  tr.y=y;

  std::cout<< "Please enter coordinates point bottom_left"<<std::endl;
  std::cout<<"X :";
  std::cin>>x;
  std::cout<<""<<std::endl;
  std::cout<<"Y :";
  std::cin>>y;
  std::cout<<""<<std::endl;

  point bl;
  bl.x=x;
  bl.y=y;

  rectangle r;
  r.bottom_right=bl;
  r.top_right=tr;

  cout<< "The rectangle";

  return 0;
}
