#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    

    float t,temp,n,hi,h,hn,mini,min,minn,cmt,gn,g,gc,odo,odon,odoi,i,s,km,cof;
    char ab;
    /*t= temp=tempo*/
    /*n= numero de paradas*/
    /*h= hora de final de viagem*/
    /*hn= hora em que acontece a parada*/
    /*hi= hora de início de viagem*/
    /*mini= minutos de início de viagem*/
    /*min= minutos finais de viagem*/
    /*minn= minutos em que acontece a parada*/
    /*cmt= consumo total de gasolina usada na viagem*/
    /*gn= gasolina abestecida na parada*/
    /*g= gasolina inicial da viagem*/
    /*gc= gasolina consumida em um trecho*/
    /*odo= valor do odômetro no final da viagem*/
    /*odon= O valor do odômetro ao chegar em cada parada*/
    /*odoi= O valor do odômetro no início da viagem*/
    /*i= variável intermediária*/
    /*s= espaço*/
    /*km= kilometro*/
    /*cof= consumo medio final*/

    printf("\n\nINSTRUÇÕES:\n");
    printf("\n1-A hora que deve ser colocada seguindo o exemplo n:n(EX:10:30).\n");
    printf("2-Odômetro deve estar em km.\n");
    printf("3-O volume do tanque deve estar em L\n");
    printf("Digite o número de paradas que você fará no caminho:\n");
    scanf("%f",&n);
    printf("Digite que horas são:\n");
    scanf("%f:%f",&hi,&mini);
    printf("Digite o odômetro atual do carro:\n");
    scanf("%f",&odoi);
    printf("Digite volume atual do tanque de combustível:\n");
    scanf("%f",&gn);
    printf("Distância a ser percorrida:\n");
    scanf("%f",&km);
    hn=hi;
    minn=mini;
    odon=odoi;
   
    for(i=0;i<n;i++)
    {
        t=0;
        printf("Parada %f:\n",i+1);
        printf("Que horas são?\n");
        scanf("%f:%f",&h,&min);
        printf("Valor atual do odômetro?\n");
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
        temp=s/(gn-g);
        cof+=temp;
        gn-=(gn-g);
        km-=s;
        printf("Consumo de Combustível = %fKm/l\n",temp);
        temp=km/(s/t);
        printf("Previsão de chegada no destino = %fHoras\n",temp);
        gn+=gc;
    }
                 
        printf("Último abastecimento? (s/n)\n");
        scanf("%c",&ab);
        scanf("%c",&ab);

        if(ab=='n')
        {
            printf("\nForam Abastecidos quantos litros de gasolina?\n");
            scanf("%f", &gc);
            printf("\nQue horas são?\n");
            scanf("%f:%f", &h, &min);
            printf("Valor atual do odômetro?\n");
            scanf("%f",&odo);

        }
        t=(min-mini)/60;
        if(minn>min)
        {
            t*=-1;
            t-=1;
        }
        t+=(h-hi);
        gn-=(gn-g);
        s=odo-odoi;
        temp=s/t;
        int temphh;
        float tempminn;
        temphh=(int)t;
        tempminn=(float) (t-temphh)*60;
        printf("\nTempo total de viagem = %02dh:%02.0fmin",temphh, tempminn);
        printf("\nVelocidade média final de viagem =%fKm/h",temp);
        cmt=s/gn;
        printf("\nConsumo medio total= %fKm/l\n\n",cof/n);        
        
        return EXIT_SUCCESS;
}
