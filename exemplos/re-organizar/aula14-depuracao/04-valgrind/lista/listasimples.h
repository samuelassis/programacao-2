#ifndef PDS2_LISTASIMPLES_H
#define PDS2_LISTASIMPLES_H


struct node_t {
  int elemento;
  node_t *proximo;
};


class ListaSimplesmenteEncadeada {
private:
  node_t *_inicio;
  node_t *_fim;
  int _num_elementos_inseridos;
public:
  ListaSimplesmenteEncadeada();
  ~ListaSimplesmenteEncadeada();
  void inserir_elemento(int elemento);
  void remove_iesimo(int i);
  void imprimir();
};


#endif
