#ifndef _CLIENTE_H // Previne que o header file seja incluído múltiplas vezes
#define _CLIENTE_H

struct Cliente;

//struct Cliente* New_Cliente();

struct Cliente* New_Cliente(char* nome, char* endereco);

int Del_Cliente(struct Cliente* cliente);

char* Cliente_GetNome(struct Cliente* cliente);

int Cliente_SetNome(struct Cliente* cliente, char* nome);

char* Cliente_GetEndereco(struct Cliente* cliente);

int Cliente_SetEndereco(struct Cliente* cliente, char* endereco);

void Cliente_FazPedido(struct Cliente* cliente);

#endif