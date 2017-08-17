#ifndef _PEDIDO_H // Previne que o header file seja incluído múltiplas vezes
#define _PEDIDO_H

#include "cliente.h"

struct Pedido;

struct Pedido* New_Pedido();

void Del_Pedido(struct Pedido* pedido);

char* Pedido_GetDataHora();

void Pedido_SetDataHora(struct Pedido* pedido, char* dataHora);

struct Cliente* Pedido_GetCliente(struct Pedido* pedido);

void Pedido_SetCliente(struct Pedido* pedido, struct Cliente* cliente);

#endif