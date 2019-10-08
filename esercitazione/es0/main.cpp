#include <iostream>
#include <cmath> //Libreria per accedere ad alcune macro e funzioni, come il P greco (M_PI)

int main() {
   int N=0;
   float a=0, b=M_PI, integrale;
   //Usiamo std perchè appartiene alla libreria, appunto, std
   std::cout << "Inserisci il numero di intervalli per la precisione dell'approssimazione: ";
   std::cin >> N;

   float D=(b-a)/N;

   for (int k = 1; k <= N; k++) {
    integrale = integrale + (((std::sin(a+(k-1)*D)) + (std::sin(a+k*D)))/2); //Unica operazione, suddivisibile
   }

   integrale  *= D;

   std::cout <<"L'approssimazione con "<< N <<" intervalli vale : " << integrale << std::endl;
  return 0;
}
