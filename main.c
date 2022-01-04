#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
    Matriz *m;
    m = NULL;
    m = cria(3);
    Matriz *n;
    n = NULL;
    n = cria(3);
    Matriz *res;
    res = NULL;
    atribui(m,1,2,5.2);
    atribui(n,1,2,1);
    printf("%f \n",acessa(m,1,2));
    res = somar(m,n);
    printf("%f \n",acessa(res,1,2));
    exibir(m);
    exibir(n);
    exibir(res);
    /*libera(m);*/
    return 0;
}
