typedef struct matriz Matriz;

Matriz* cria (int);
void libera (Matriz*);
float acessa (Matriz*, int, int);
void atribui (Matriz*, int, int, float);
int linhas (Matriz*);
int colunas (Matriz*);
Matriz* somar(Matriz*,Matriz*);
void exibir (Matriz*);
/*Matriz* multiplicar(Matriz*,Matriz*);*/

