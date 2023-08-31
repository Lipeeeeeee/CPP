#include <iostream>
using namespace std;

int main(){
  int numero;
  cin >> numero; //input

  int divs = 0; //quantidade de divisores

  for(int i = 2; i < numero; i++){ //laço desconsiderando o 1 e o próprio input
    if (divs == 2) // o número de divisores é 2?
      break; // quebre o laço
    if (numero % i == 0) // o número é divisível pelo input?
      divs += 1; // incremento no número de divisores
  }
  string primo = (divs == 2) ? "Não é primo." : "É primo."; // se houver dois divisores, então não é primo, caso contrário é primo
  cout << primo; //mostre o resultado
}
