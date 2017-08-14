#include "cliente.h"
#include <stdio.h>
#include <stdlib.h>

struct Cliente {
    char* nome;
    char* endereco;
};

struct Cliente* New_Cliente(char* nome, char* endereco)
{
   struct Cliente* cliente;
   cliente = malloc(sizeof(struct Cliente));
   cliente->nome = nome;
   cliente->endereco = endereco;
   return cliente;
}

int Del_Cliente(struct Cliente* cliente)
{
   free(cliente);
   return 1;
}

char* Cliente_GetNome(struct Cliente* cliente)
{
   return cliente->nome;
}

int Cliente_SetNome(struct Cliente* cliente, char* nome)
{
   cliente->nome = nome;
   return 1;
}

char* Cliente_GetEndereco(struct Cliente* cliente)
{
   return cliente->endereco;
}

int Cliente_SetEndereco(struct Cliente* cliente, char* endereco)
{
   cliente->endereco = endereco;
   return 1;
}

void Cliente_FazPedido(struct Cliente* cliente)
{
  printf("Cliente %s fez pedido\n", cliente->nome);
}