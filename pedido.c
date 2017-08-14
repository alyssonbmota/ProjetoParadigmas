#include <stdlib.h>
#include <string.h>

struct Pedido {
    // Pedido tabém precisa me uma Pizza
    string horaPedido;
    int prazoDeEntrega; // Em minutos
    double valorTotal;
};

struct Pedido* New_Pedido(){
    struct Pedido* pedido;
    pedido = malloc(sizeof(struct Pedido));
    return pedido;
}

int Del_Pedido(struct Pedido* pedido) {
    free(pedido);
    return 1;
}

char* Pedido_GetHoraPedido(struct Pedido* pedido) {
    return pedido->horaPedido;
}

int Pedido_SetHoraPedido(struct Pedido* pedido, char* hora) {
    pedido->horaPedido = hora;
    return 1;
}

int Pedido_GetPrazoDeEntrega(struct Pedido* pedido) {
    return pedido->prazoDeEntrega;
}

int Pedido_SetPrazoDeEntrega(struct Pedido* pedido, int prazo) {
    pedido->prazoDeEntrega = prazo;
    return 1;
}

double Pedido_GetValorTotal(struct Pedido* pedido) {
    return pedido->valorTotal;
}

int Pedido_SetValorTotal(struct Pedido* pedido, double valor) {
    pedido->valorTotal = valor;
    return 1;
}