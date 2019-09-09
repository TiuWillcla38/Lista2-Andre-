#include <stdio.h>
#include <stdlib.h>

int main()
{
int vida, defesa, ataque;
float media;
printf("Insira seu valor de vida:");
scanf("%d", &vida);
printf("Insira seu valor de defesa:");
scanf("%d", &defesa);
printf("Insra seu valor de ataque:");
scanf("%d", &ataque);
media= (vida+ataque+defesa)/3;

if(media<=25 && media>=0){
		printf("Nivel: Novato");
}

else if(media<=50 && media>=26) {
        printf("Nivel: Mago");
}

else if(media<=75 && media>=51){
        printf("Nivel: Mago Supremo");
}
else if(media<=100 && media>=76){
        printf("Nivel: Lorde das Magias");
}
else {
    printf("Nivel desconhecido");
}
}
