#include <iostream>
#include "pilha.h"

using namespace std;



int main(){

   pilha pilha1;
   TipoItem item;
   int opcao;
   cout << "Programa gerador de pilha:\n";

   do {
    cout << "Programa gerador de pilha:\n";
    cout << "Programa gerador de pilha:\n";
    cout << "Programa gerador de pilha:\n";
    cout << "Programa gerador de pilha:\n";
    cin>>opcao;
    if (opcao ==1){
        cout << "Digite o elemento a ser inserido: \n";
        cin >> item;
        pilha1.inserir(item);

    }else if(opcao ==2){
       item =pilha1.remover();
       cout <<"elemento removido:  "<< item << endl;
    
    }else if(opcao ==3){



    }

   }while(opcao !=0);


return 0;
}