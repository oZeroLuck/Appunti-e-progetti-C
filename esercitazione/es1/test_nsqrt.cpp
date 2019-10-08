#include "nsqrt.h"
#include <cmath>
#include <iostream>
//Usare using namespace std per evitare di ripetere std 10mila volte.
int main() {
   double x;

   std::cout<<"Inserisci un valore double: ";
   std::cin>> x;

   if(x<0){
     std::cerr<<"Numeri negativi non validi you DUMBASS";
     return 2; //Per indicare la terminazione del programma incorretta.
   }

   double y = nsqrt(x, 1e-6);
   double z = std::sqrt(x);

   std::cout<<"Il valore di nsqrt.h e': "<<y<<std::endl;
   std::cout<<"Il valore di std::sqrt(x) e': "<<z<<std::endl;
   return 0;
}
