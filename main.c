#include <stdio.h>
struct Empresa{

int codigo;
float valorAtual;
float valorAnterior;
float media;
}

cad_bolsa[2];
int main()
{
    int i;
    printf("\n--------------BOLSA-DE-VALORES-------------\n\n\n");

for(i=0; i<2; i++){
    printf("Codigo da companhia ......");
    scanf("%d",&cad_bolsa[i].codigo);

    printf("Informe o valor atual das acoes ......");
    scanf("%f",&cad_bolsa[i].valorAtual);

    printf("Informe o valor anterior das acoes ......");
    scanf("%f",&cad_bolsa[i].valorAnterior);

    cad_bolsa[i].media = (cad_bolsa[i].valorAtual/cad_bolsa[i].valorAnterior)*100;
    printf("\n\n");
}//fim coleta

//percorrer o vetor struct
for(i=0; i<2; i++){
    printf("Codigo da Companhia .................. %d\n", cad_bolsa[i].codigo);
    printf("Informe o valor atual das acoes ......%.1f\n", cad_bolsa[i].valorAtual);
    printf("Informe o valor anterior das acoes ......%.1f\n", cad_bolsa[i].valorAnterior);
    printf("Crescimento de .................. %.1f%%", cad_bolsa[i].media );
    printf("\n\n");
}

system("pause");
return 0;

}

