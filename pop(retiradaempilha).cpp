

#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo:  " << cartas.top() << "\n";
   


    cartas.pop();

   cout << "Carta do topo: " << cartas.top() << "\n";
   cout << "Tamanho da pilha:  " << cartas.size() << "\n";

    return 0;






}

