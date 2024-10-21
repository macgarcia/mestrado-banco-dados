#ifndef PRODUTO_H_INCLUDED
#define PRODUTO_H_INCLUDED

typedef struct Produto {
    char nome[20];
    int qtde;
    float preco;
    float preco_total;
} Produto;

extern Produto new_produto(char* linha_arquivo);
extern void adicionar_produto(Produto produto);

#endif // PRODUTO_H_INCLUDED
