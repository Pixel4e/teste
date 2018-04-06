#include <stdio.h>
#include <stdlib.h>

int main(){
int num;
int resposta = 0;
printf("qual o numero final?\n");
scanf("%d",&num);

resposta=soma(num);
printf("resposta = %d\n",resposta);

return 0;
}
