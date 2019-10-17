#include <iostream>
#include "stringhe.h"

int main(int argc, char *argv[]){
  if (argc < 2){
    std::cerr<<"Errore, manca la stringa"<<std::endl;
    return 0;
  }

  stampa_stringa(argv[1]);

  std::cout<<"lunghezza stringa : "<<lunghezza_stringa(argv[1])<< std::endl;
  std::cout<<"stringa invertita : ";
  inverti_stringa(argv[1]);
  std::cout<<argv[1]<<std::endl;

  char *copia=clona_stringa(argv[1]);

  std::cout<<"stringa clonata : "<<copia<<std::endl;

  delete[] copia;
  copia=nullptr;

  return 0;
}
