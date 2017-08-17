#ifndef _ATENDENTE_H // Previne que o header file seja incluído múltiplas vezes
#define _ATENDENTE_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "cliente.h"
#include "pedido.h"

//struct Atendente;

//struct Atendente* New_Atendente(char* nome);

//void Del_Atendente(struct Atendente* atendente);

//char* Atendente_GetNome(struct Atendente* atendente);

//void Atendente_SetNome(struct Atendente* atendente, char* nome);

struct Pizzaiolo* Atendente_ChamaPizzaiolo(char* nomePizzaiolo);

void Atendente_PassarPedidoParaPizzaiolo(struct Pedido* pedido, struct Pizzaiolo* pizzaiolo);

struct Pedido* Atendente_RegistrarPedidoDoCliente(struct Cliente* cliente);

static char* GetDataHoraAtual();

#endif