#include "stringhe.h"
#include <iostream>
#include <cassert>

void stampa_stringa(const char *str){
  assert(str!=nullptr);
  const char * current = str;
  while(*current != '\0'){
    std :: cout << *current;
    current ++;
  }
  std::cout<<""<<std::endl;
}


unsigned int lunghezza_stringa(const char * str){
  assert(str !=nullptr);
  const char * current = str;
  while(*current != '\0'){
    current++;
  }
  return static_cast<unsigned int>(current - str);
}

void inverti_stringa(char *str){
  char *punt=str;
  char *end=str + lunghezza_stringa(str)-1;

  while(punt<end){
    std::swap(*punt,*end);
    punt++;
    end--;
  }
}

char *clona_stringa(const char *str){
  int sz = lunghezza_stringa(str);
  char *out = new char[sz+1];
  for(int i=0;i<sz+1;++i){
    out[i]=str[i];
  }
  return out;
}

char *unisci_stringhe(const char *str1, const char *str2){
  int sz1=lunghezza_stringa(str1);
  int sz2=lunghezza_stringa(str2);
  char *out=new char[sz1+sz2+1];
for(int i=0; i<sz1; ++i){
  out[i]=str1[i];
 }
for (int i=sz1; i<sz1+sz2+1; i++) {
  out[i]=str2[i-sz1];
 }
return out;
}

const char *cerca_stringa(const char *s1, const char *st){
  int sz1=lunghezza_stringa(s1);
  int szt=lunghezza_stringa(st);
  for(int i=0; i<sz1; ++i){
    int j=0;
    while((j<szt) && (i+j < sz1) && (s1[i+j]==st[j])){
      ++j;
    if (j==szt)
      return s1+i;
    if (i+j>=sz1)
      return nullptr;
  }
 }
 return nullptr;
}

void sostituisci_stringa(char *s1, const char *st){

  int szs=lunghezza_stringa(st);
  int szt=lunghezza_stringa(st);
  assert(szt==szs);
  char *token = const_cast<char *>(cerca_stringa(s1, st));
  while (token!=nullptr){
       for (int i = 0; i<szt; ++i) {
          token[i]=s1[i];
       }
      char *token = const_cast<char *>(cerca_stringa(token+szs, st));
     }
  }
}
