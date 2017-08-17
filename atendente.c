#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "cliente.h"
#include "pedido.h"
#include "pizzaiolo.h"

struct Pizzaiolo* Atendente_ChamaPizzaiolo(char* nomePizzaiolo) {
    struct Pizzaiolo* pizzaiolo = New_Pizzaiolo(nomePizzaiolo);
    return pizzaiolo;
}

void Atendente_PassarPedidoParaPizzaiolo(struct Pedido* pedido, struct Pizzaiolo* pizzaiolo) {
    Pizzaiolo_RecebePedido(pizzaiolo, pedido);
}

struct Pedido* Atendente_RegistrarPedidoDoCliente(struct Cliente* cliente) {
    struct Pedido* pedido = New_Pedido();
    Pedido_SetCliente(pedido, cliente);

    time_t rawtime;
    struct tm * timeinfo;
    time (&rawtime);
    timeinfo = localtime (&rawtime);
    
    Pedido_SetDataHora(pedido, asctime(timeinfo));
    
    printf("Novo pedido\n");
    //printf("Nome do cliente: %s\n", pedido->cliente->nome);
    printf("Nome do cliente: %s\n", Cliente_GetNome(Pedido_GetCliente(pedido)));
    //printf("Pizza %d\n", pedido->cliente->saborPizzaDesejado);
    printf("Endereço do cliente: %s\n", Cliente_GetEndereco(Pedido_GetCliente(pedido)));
    //printf("Data e hora do pedido: %s\n", pedido->dataHora);
    printf("Data e hora do pedido: %s\n", Pedido_GetDataHora(pedido));
    
    return pedido;
}


