#ifndef _PEDIDO_H // Previne que o header file seja incluído múltiplas vezes
#define _PEDIDO_H

struct Pedido;

struct Pedido* New_Pedido();

int Del_Pedido(struct Pedido* pedido);

char* Pedido_GetHoraPedido(struct Pedido* pedido);

int Pedido_SetHoraPedido(struct Pedido* pedido, char* hora);

int Pedido_GetPrazoDeEntrega(struct Pedido* pedido);

int Pedido_SetPrazoDeEntrega(struct Pedido* pedido, int prazo);

double Pedido_GetValorTotal(struct Pedido* pedido);

int Pedido_SetValorTotal(struct Pedido* pedido, double valor);

#endif