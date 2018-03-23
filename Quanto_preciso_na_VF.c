//PROGRAMA CALCULA O QUANTO É PRECISO TIRAR NA VF PARA PASSAR SEM REC

#include<stdio.h>

int main()
{
    int N, i, continua;                                               //DEFINIÇÃO DE TIPOS DO NÚMERO DE VE's FEITAS E VARIÁVEL AUXILIAR
    float VE, meta, soma, VC, MVE, valor;
    while(1){                                                        //DEFINICAO DE TIPOS DA NOTA DE VE, DO QUANTO É PRECISO TIRAR NA VF, DA MÉDIA DE VE E DA NOTA DE VC
    soma = 0;                                               //ATRIBUI VALOR ZERO A SOMA DAS NOTAS DE VE

    printf("\nQuantas VE`s foram feitas? ");                  //RECEBE DO O NÚMERO DE VE's A SEREM FEITAS
    scanf("%f", &valor);
    N = valor;
    if(N==valor)
    {
        for(i=1;i<=N;i++)
        {
            VE = 0;                                         //ATRIBUI O VALOR ZERO A VE ANTES DE RECEBER SEU VALOR PELO USUÁRIO
            printf("\nInsira a %d nota de VE: ", i);
            scanf("%f", &VE);                               //RECEBE A NOTA DE CADA VE A CADA ITERAÇÃO
            soma = soma + VE;                               //ARMAZENA A SOMA DE NOTAS DE VE ATÉ A PRESENTE ITERAÇÃO
        }

        MVE = soma/N;                                  //AO FINAL NO LOOP CALCULA A MÉDIA DE VE DIVIDINDO A SOMA TOTAL DE NOTAS DE VE PELO NÚMERO DE ITERAÇÕES

        printf("\nInsira a nota de VC: ");
        scanf("%f", &VC);
        meta = (20 - VC - MVE)/2;
        if(meta>=4.0)                                          //RELACIONA O QUANTO É PRECISO TIRAR COM AS OUTRAS VARIAVEIS
            printf("\nVoce precisa de %f na VF para passar sem REC!!\n\n", meta);
        else
            printf("\nVoce precisa de 4.0 na VF para passar sem REC!!\n\n");                                                                                    //IMPRIME NA TELA O QUANTO É PRECISO TIRAR NA VF
        printf("\nAperte 1 se deseja fazer o calculo para outra materia e 0 caso contrario? ");
        scanf("%d", &continua);
        if(continua == 0)
            break;
        if(continua == 1)
            continue;
    }
    else
        printf("\nO numero de VE's escolhido nao e valido. Insira um numero inteiro \n");
    }
    return 0;
}
