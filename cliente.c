#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>

struct Cliente {
    char* nome;
    char* endereco;
    int saborPizzaDesejado; // 1 - mussarela; 2 - calabresa
};

struct Cliente* New_Cliente(char* nome, char* endereco, int saborPizzaDesejado)
{
   struct Cliente* cliente;
   cliente = malloc(sizeof(struct Cliente));
   cliente->nome = nome;
   cliente->endereco = endereco;
   cliente->saborPizzaDesejado = saborPizzaDesejado;
   return cliente;
}

void Del_Cliente(struct Cliente* cliente)
{
   free(cliente);
}

char* Cliente_GetNome(struct Cliente* cliente)
{
   return cliente->nome;
}

void Cliente_SetNome(struct Cliente* cliente, char* nome)
{
   cliente->nome = nome;
}

char* Cliente_GetEndereco(struct Cliente* cliente)
{
   return cliente->endereco;
}

void Cliente_SetEndereco(struct Cliente* cliente, char* endereco)
{
   cliente->endereco = endereco;
}

char* Cliente_GetSaborPizzaDesejado(struct Cliente* cliente) {
    switch(cliente->saborPizzaDesejado) {
        case 1 : 
            return "mussarela";
        case 2 :
            return "calabresa";
        default :
            return "sabor não especificado";
    }
}

void Cliente_SetSaborPizzaDesejado(struct Cliente* cliente, int sabor) {
    cliente->saborPizzaDesejado = sabor;
}
