#include <stdio.h>
#include <time.h>
#include "cliente.h"

struct Pedido {
    char* dataHora;
    struct Cliente* cliente;
};

struct Pedido* New_Pedido(){
    struct Pedido* pedido;
    pedido = malloc(sizeof(struct Pedido));
    return pedido;
}

void Del_Pedido(struct Pedido* pedido) {
    free(pedido);
}

char* Pedido_GetDataHora(struct Pedido* pedido) {
    return pedido->dataHora;
}

void Pedido_SetDataHora(struct Pedido* pedido, char* dataHora) {
    pedido->dataHora = dataHora;
}

struct Cliente* Pedido_GetCliente(struct Pedido* pedido) {
    return pedido->cliente;
}

void Pedido_SetCliente(struct Pedido* pedido, struct Cliente* cliente) {
    pedido->cliente = cliente;
}




