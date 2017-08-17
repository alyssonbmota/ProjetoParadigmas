#include "pizzaiolo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedido.h"
#include "cliente.h"
#include "pizza.h"

struct Pizzaiolo {
    struct Pedido* pedido;
    char* nome;
};

struct Pizzaiolo* New_Pizzaiolo(char* nome)
{
   struct Pizzaiolo* pizzaiolo;
   pizzaiolo = malloc(sizeof(struct Pizzaiolo));
   pizzaiolo->nome = nome;
   return pizzaiolo;
}

void Del_Pizzaiolo(struct Pizzaiolo* pizzaiolo)
{
   free(pizzaiolo);
}

char* Pizzaiolo_GetNome(struct Pizzaiolo* pizzaiolo)
{
   return pizzaiolo->nome;
}

int Pizzaiolo_SetNome(struct Pizzaiolo* pizzaiolo, char* nome)
{
   pizzaiolo->nome = nome;
   return 1;
}

struct Pedido* Pizzaiolo_GetPedido(struct Pizzaiolo* pizzaiolo) {
    return pizzaiolo->pedido;
}

void Pizzaiolo_RecebePedido(struct Pizzaiolo* pizzaiolo, struct Pedido* pedido)
{
    pizzaiolo->pedido = pedido;
    verificarPizza(pedido);
}

static void verificarPizza(struct Pedido* pedido){
    char* s = Cliente_GetSaborPizzaDesejado(Pedido_GetCliente(pedido));
    if(strcmp(s, "mussarela")) {
        //printf("Sabor mussarela");
        struct pizza p = {MUSSARELA, "Pizza mussarela"};
        printf("%s - ingredientes: %s\n", p.sabor, pizza_ingredientes(&p));
        printf("Preço: %s\n", pizza_preco(&p));
    }
    if(strcmp(s, "calabresa")) {
        //printf("Sabor calabresa");
        struct pizza p = {CALABRESA, "Pizza calabresa"};
        printf("%s - ingredientes: %s\n", p.sabor, pizza_ingredientes(&p));
        printf("Preço: %s\n", pizza_preco(&p));
    }
}
