#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"

int main() {
    // Intanciar Cliente
    struct Cliente* cliente;
    cliente = New_Cliente("José", "Rua da Saudade");
    //cliente = New_Cliente();
    
    //Cliente_SetNome(cliente, "José");
    //Cliente_SetEndereco(cliente, "Rua da Saudade");
    
    printf("Nome: %s: \n", Cliente_GetNome(cliente));
    printf("Endereco: %s: \n", Cliente_GetEndereco(cliente));
    
    Cliente_FazPedido(cliente);
    
    return 0;
}