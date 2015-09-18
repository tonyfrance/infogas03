#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    

    float t,temp,n,hi,h,hn,mini,min,minn,gn,g,gc,odo,odon,odoi,i,s,km;
    char ab;
    printf("\n\nINTRUCOES:\n");
    printf("\n1-A hora que deve ser colocada seguindo o exemplo n:n(EX:10:30).\n");
    printf("2-Odometro deve estar em km.\n");
    printf("3-O volume do tanque deve estar em L\n");
    printf("Digite o numero de paradas que você fará no caminho:\n");
    scanf("%f",&n);
    printf("Digite que horas são:\n");
    scanf("%f:%f",&hi,&mini);
    printf("Digite o odometro atual do carro:\n");
    scanf("%f",&odoi);
    printf("Digite volume atual do tanque de combustivel:\n");
    scanf("%f",&gn);
    printf("Distancia a ser percorrida:\n");
    scanf("%f",&km);
    hn=hi;
    minn=mini;
    odon=odoi;
   
    for(i=0;i<n-1;i++)
    {
        t=0;
        printf("Parada %f:\n",i+1);
        printf("Que horas são?\n");
        scanf("%f:%f",&h,&min);
        printf("Valor atual do odometro?\n");
        scanf("%f",&odo);
        printf("Volume do tanque de combustível?\n");
        scanf("%f", &g);
        printf("Foram abastecidos quantos litros de gasolina? \n");
        scanf("%f", &gc);
        t=(min-minn)/60;
        if(minn>min)
        {
           t*=-1;

           t-=1; 
        }
        
        t+=(h-hn);
        s=odo-odon;
        temp=s/t;
        printf("Velocidade Média Parcial=%fkm/h\n",temp);
        odon=odo;
        hn=h;
        minn=min;
        gn-=g;
        temp=s/gn;
        km-=s;
    }
        printf("Consumo de Combustivel = %fKm/l\n",temp);
        temp=km/(s/t);
        printf("Previsao de chegada no destino = %fHoras\n",temp);
        gn+=gc;
       /* printf("Ultima parada: \n");*/
        printf("\nQue horas sao?\n");
        scanf("%f:%f", &h, &min);
        printf("Valor atual do odometro?\n");
        scanf("%f",&odo);
        printf("Volume atual do tanque do combustivel?\n");
        scanf("%f",&g);
        printf("Ultimo abastecimento? (s/n)\n");
        scanf("%c",&ab);
        fflush(stdin);
                
        if(ab=='s')
        {
            printf("\nFoi Abastecido quantos litros de gasolina?\n");
            scanf("%f", &gc);

        }                        
        t=(min-mini)/60;
        if(minn>min)
        {
            t*=-1;
            t-=1;
        }
        t+=(h-hi);
        s=odo-odoi;
        gn-=g;
        temp=s/t;
        printf("Velocidade media final de viagem =%fKm/h",temp);
        temp=s/gn;
        printf("\nConsumo total= %fKm/l",temp);        
        
        return EXIT_SUCCESS;
}
