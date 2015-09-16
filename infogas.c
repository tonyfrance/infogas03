#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
    printf("programa referencial para abastecimento:");
    printf("\nObs: o tempo do programa deve entrar em forma de\n HH:MM no formato de 24h");
    char escolha,sair,timeini[6];
    struct lkt{  //registro para poder guardar todos os valores de parciais.
        float litros;
        float consumo;
        float velocidade;
        char tempo[6];
  };
    struct lkt viagem;

    printf("\nDigite o valor inicial do Odometro: ");
    float kmi,disttotal; //quilometro inicial
    scanf("%f",&kmi);
    
    printf("\nDigite o instante de tempo inicial em HH:MM : ");
    scanf("%s", &timeini);
    char horasref[3], minutosref[3];//variaveis intermediarias,conversão str to int
    int i=0;

    for(i=0;i<2;i++)
    {
        horasref[i]=timeini[i];
        minutosref[i]=timeini[(3+i)];
    }
    horasref[2]='\0';
    minutosref[2]='\0';
    float horas, min, tempoini;
    horas=atoi(horasref);
    min=atoi(minutosref);
    tempoini=horas*60+min;//conversão de tempo, trabalhando com minutos.
    printf("\nDigite a distancia total da viagem em Km: ");
    scanf("%f", &disttotal);
    int cont;
    printf("\nNumero de paradas: %d", cont);
    printf("\nPara entrar no programa digite 'p' ");

    float litrosf=0, kmf=0, odometro=0, last_odometro=0, las_h=0, last_m=0, consumof=0;
    last_odometro=kmi;
    do
    {
        scanf("s", &escolha);
        if(escolha=='p')
        {

        }
        else
            printf("\nComando Invalido!\n");

        if(kmf>=distotal)
        {
            printf("ULTIMO BASTECIMENTO? s/n ");
            scanf("%s", &sair);
        }
    }while(kmf<disttotal || sair!='s');

    printf("\nRelatorio Final: ");
    printf("\nVelocidade Media Total: %.2f", disttotal/ /*aqui vai entrar o tempo final - tempo inicial*/);
    printf("\nConsumo de Combustivel: %.2f", /*somatorio de todos os litros dos trechos*/);
    return 0;
}
