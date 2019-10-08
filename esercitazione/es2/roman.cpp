#include "roman.h"

void roman_helper(int digit, char s1, char s2){
  switch (digit) {
    case 1: std::cout<<s1;
    case 2: std::cout<<s1<<s1;
    case 3: std::cout<<s1<<s1<<s1;
  }
}

void print_roman(int n){
  //Implementeremo una funzione che ci aiuterà a scomporre il numero da convertire
  // e farà anche da "dispatcher", cioè distribuirà i compiti con uno switch
  roman_helper(n/1000, M, A);
  n = n%1000;
  roman_helper(n/100, C, L);
  n = n%100;
  roman_helper(n/10, X, V);
  n = n%10;
  roman_helper(n, I);

}
