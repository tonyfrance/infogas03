#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    
    float t,n,hi,mini,minn,min,gi,gn,g,mv,gc,odo,odon,odoi,i,s,km,odox;
    printf("\n\n\t\tINTRUCOES:\n");
    printf("\n1-A hora de ver se coloca n:n(EX:10:30).\n");
    printf("2-Odometro deve esta em km.\n");
    printf("3-O volume do tanque deve estar em L\n");
    printf("Digite o numero de paradas que você fara no caminho:\n");
    scanf("%f",&n);
    printf("Digite que horas sao:\n");
    scanf("%f:%f",&hi,&mini);
    printf("Digite o odometro atual do carro:\n");
    scanf("%f",&odoi);
    printf("Digite volume atual do tanque de combustivel:\n");
    scanf("%f",&gli);
    printf("Distancia a ser percorrida:\n");
    scanf("%f",&km);
    minn=mini;
    odon=odoi;
    hn=hi;
    for(i=0;i<n;i++)
    {
        printf("Parada %f:\n",i+1);
        printf("Que horas são?\n");
        scanf("%f:%f",&h,&min);
        printf("Valor atual do odometro?\n");
        scanf("%f",&odo);
        printf("Volume do tanque de combustivel?\n");
        scanf("%f", &g);
        printf("Foi abastecido quantos litros de gasolina? \n");
        scanf("%f", &gc);
        t=(min-minn)/60;
        if(minn>min)
        {
           t*=-1;

           t-=1; 
        }
        t+=(h-hn);
        s=odo-odon;
        printf("%f-distancia \n%f-tempo", s, t);
        odon=odo;
        hn=h;
        minn=min;
        gn-=g;
        printf("\nVelocidade Media Parcial = %fKm/h\n", s/t);
        printf("Consumo de Combustivel = %fKm/l\n", s/g);
        printf("Previsao de chegada no destino = %fHoras\n", km/(s/t));
        gn+=gc;
        printf("Ultima parada: \n");
        printf("\nQue horas sao?\n");
        scanf("%f:%f", &h, &min);
        printf("Ultimo abastecimento? \n0-NAO\n1-SIM/n");
        fflush(stdin);
        int ab;
        scanf("%d", &ab);
        if(ab==1)
        {
            printf("\nFoi Abastecido quantos litros de gasolina?\n");
            scanf("%f", &gc);

        }                        
        t=(min-mini)/60;
        if(mini>min)
        {
            t*=-1;
            t-=1;
        }
        t+=(h-hi);
        s=odo-odoi;
        gi-=g;
        printf("Velocidade media final de viagem =%fKm/h", s/t);
        printf("\nConsumo total= %fKm/l", s/gi);


    return EXIT_SUCCESS;
}

