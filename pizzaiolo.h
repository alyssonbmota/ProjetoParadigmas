#ifndef _PIZZAIOLO_H // Previne que o header file seja incluído múltiplas vezes
#define _PIZZAIOLO_H

struct Pizzaiolo;

struct Pizzaiolo* New_Pizzaiolo(char* nome);

void Del_Pizzaiolo(struct Pizzaiolo* pizzaiolo);

char* Pizzaiolo_GetNome(struct Pizzaiolo* pizzaiolo);

int Pizzaiolo_SetNome(struct Pizzaiolo* pizzaiolo, char* nome);

struct Pedido* Pizzaiolo_GetPedido(struct Pizzaiolo* pizzaiolo);

void Pizzaiolo_RecebePedido(struct Pizzaiolo* pizzaiolo, struct Pedido* pedido);

static void verificarPizza(struct Pedido* pedido);

#endif