#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    printf("programa referencial para abastecimento:");
    printf("\nObs: o tempo do programa deve entrar em forma de\n HH:MM no formato de 24h");
    char escolha,sair,timeini[6];
    struct lkt{  //registro para poder guardar todos os valores de parciais.
        float litros;
        float consumo;
        float velocidade;
        char tempo[];
  };
    struct lkt control[];
    printf("\nDigite o valor inicial do Odometro:  ");
    float kmi, disttotal; //quilometro inicial
    scanf("%f", &kmi);

    printf("\nDigite o instante de tempo inicial em HH:MM : ");
    scanf("%s", &timeini);
    char horasref[], minutosref[]; //variaveis intermediarias, conversao str to int
    int i=0;
    for(i=0;i<2;i++) 

    
    printf("\nDigite o valor inicial do Odometro: ");
    float kmi,disttotal; //quilometro inicial
    scanf("%f",&kmi);
    
    printf("\nDigite o instante de tempo inicial em HH:MM : ");
    scanf("%s", &timeini);
    char horasref[3], minutosref[3];//variaveis intermediarias,conversão str to int
    int i=0;
    char horasref[3], minutosref[3];
    for(i=0;i<2;i++)
    {
        horasref[i]=timeini[i];
        minutosref[i]=timerini[(3+i)];
    }
    horasref[2]='\0';
    minutosref[2]='\0';
}
