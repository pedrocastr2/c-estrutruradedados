typedef int TipoItem;
const int max_itens =10;


class pilha {

private:
int tamanho;

TipoItem* estrutura;

public:
pilha(); //constuturo
~pilha();//destrutota
bool estacheia();
bool estavazia();
void inserir(TipoItem item);
TipoItem remover();
void imprimir();
int qualtamanho();


};