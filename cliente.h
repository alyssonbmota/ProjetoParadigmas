#ifndef _CLIENTE_H // Previne que o header file seja incluído múltiplas vezes
#define _CLIENTE_H

#include <stdio.h>
#include <stdlib.h>

struct Cliente;

struct Cliente* New_Cliente(char* nome, char* endereco, int saborPizzaDesejado);

void Del_Cliente(struct Cliente* cliente);

char* Cliente_GetNome(struct Cliente* cliente);

void Cliente_SetNome(struct Cliente* cliente, char* nome);

char* Cliente_GetEndereco(struct Cliente* cliente);

void Cliente_SetEndereco(struct Cliente* cliente, char* endereco);

char* Cliente_GetSaborPizzaDesejado(struct Cliente* cliente);

void Cliente_SetSaborPizzaDesejado(struct Cliente* cliente, int sabor);

#endif