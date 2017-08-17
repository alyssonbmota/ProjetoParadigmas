#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"
#include "atendente.h"
#include "pizzaiolo.h"
#include "pedido.h"

int main() {
    // Intanciar Cliente
    struct Cliente* cliente;
    cliente = New_Cliente("José", "Rua da Saudade", 1);
    
    struct Pedido* pedido;
    pedido = Atendente_RegistrarPedidoDoCliente(cliente);
    
    struct Pizzaiolo* pizzaiolo;
    pizzaiolo = Atendente_ChamaPizzaiolo("Mario");
    Atendente_PassarPedidoParaPizzaiolo(pedido, pizzaiolo);
    
    return 0;
}