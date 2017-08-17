#include <stdlib.h>
#include "pizza.h"

static const char *ingredientes(void)
{
    return "Mussarela, calabresa, cebola e azeitonas";
}

static const char *preco(void)
{
    return "30.70";
}

const struct pizza_vtable_ CALABRESA[] = { { ingredientes, preco } };
