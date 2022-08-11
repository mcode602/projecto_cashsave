#include <stdio.h>
#include <stdlib.h>
#include<time.h>//tempo
#include<math.h>// suporte de operadores matematicos

void main()
{
char nome;
int senha, senha2, resp, resp2,resp3,opcao,opcao2, numero;
float deposito_inicial,deposito_final,saldo_total,montante_por_transferir;
int outra_operacao=1;

time_t now;//data

    time(&now);
    printf("\t\t\t\t%s\n",ctime(&now));

    printf("\t\t\t********Bem-vindo ao CashSave********\n");
    printf("\n\tEscreva o seu nome completo para criar a conta CashSave: \n");
    scanf("%s",&nome);
    printf("\tDigite uma senha ( no min 8 caracteres): \n");//introducao da senha
    scanf("%d",&senha);
    printf("\tConfirmar a sua senha: \n");//confirmacao de senha
    scanf("%d", &senha2);
if (senha == senha2) {
        printf("\tBem-vindo, a sua conta esta activada.\n\n");
        printf("\tDeposite um valor inicial na sua conta: \n");
        scanf("%f",&deposito_inicial);
        printf("\tDeseja continuar? 1.Sim ou 2.Nao\n");
        scanf("%d",&resp);//terminar ou continuar no processo.
        printf("\tPrecione 1 para continuar e 2 para cancelar.\n");
        scanf("%d",&resp2);
        if (resp2 ==1){
            printf("\tBem-vindo novamente sr(a).\n");
            printf("\n\tConfirma a sua senha para continuar\n");
            scanf("%d",&senha);
            if (senha == senha2) {
                while(outra_operacao==1){
                printf("\n\t*Menu principal do CashSave.*\n");
                printf("\n\t1.Consultar_saldo.\n");
                printf("\t2.Depositar.\n");
                printf("\t3.Recargas.\n");
                printf("\t4.Levantamento.\n");
                printf("\t5.Transferencia.\n");
                printf("\t6.Minha_conta.\n");
                printf("\n\tEscolha uma opcao: \n");
                scanf("%d",&opcao);
                switch (opcao)
                {
                case 1: //consulta de saldo
                    saldo_total=deposito_inicial;
                    printf("\tO seu saldo e de : %f MZN\n.",saldo_total);
                    printf("\tObrigado por confiar nos nossos servicos, ate breve Sr(a).\n\n");
                    break;
                case 2://deposito
                    printf("\tDigie o montante a depositar:\n ");
                    scanf("%f",&deposito_final);
                    if (deposito_final>0){
                        saldo_total=deposito_inicial+deposito_final;
                    printf("\tDepositou %f MZN na sua conta, o seu saldo actual e %f MZN.\n", deposito_final,saldo_total);
                    printf("\tObrigado por confiar nos nossos servicos, ate breve Sr(a).\n\n");
                    } else{
                    printf("\n\tNao pode depositar um valor inferior a 1 MZN.\n");
                    }

                    break;
                case 3://recargas
                    printf("\t1.MOVITEL\n");
                    printf("\t2.VODACOM\n");
                    printf("\t3.TMCEL\n");
                    printf("\tEscolher uma opcao: \n");
                    scanf("%d",&opcao2);
                    switch(opcao2)
                    { case 1://recargas de movitel
                        printf("\t1.10-MOVITEL\n");
                        printf("\t2.20-MOVITEL\n");
                        printf("\t3.50-MOVITEL\n");
                        printf("\t4.100-MOVITEL\n");
                        break;
                    case 2://recargas de vodacom
                       printf("\t1.10-VODACOM\n");
                       printf("\t3.20-VODACOM\n");
                       printf("\t3.50-VODACOM\n");
                       printf("\t4.100-VODACOM\n");
                       break;
                    case 3://recargas de tmcel
                        printf("\t1.10-Tmcel\n");
                        printf("\t2.20-Tmcel\n");
                        printf("\t3.50-Tmcel\n");
                        printf("\t4.100-Tmcel\n");

                    default:// caso digite uma entrada invalida
                        printf("\tDigite uma opcao valida.\n");
                    }
                     break;
                case 4://levantamento
                        printf("\tDeseja fazer um levantamento na sua conta? 1.SIM ou 2.Nao\n");
                       scanf("%d",&resp3);
                        if(resp3==1)
                       {
                printf("\\n\tRecebera dentro de instantes via *SMS* um codigo de 6 digitos para levantar o seu dinheiro.\n");
                printf("\t\t\tObrigado por usar os nossos servicos Sr(a) ate breve.\n\n");
                        }
                    break;
                case 5://transferencias
                    printf("\tInsira o montante que deseja transferir:\n ");
                    scanf("%f",&montante_por_transferir);
                    printf("\tDigite um numero valido: \n");
                    scanf("%d",&numero);
                    saldo_total=deposito_inicial+deposito_final-montante_por_transferir;
                    printf("\n\tTransferiu %f MZN para o numero %d , o seu saldo actual e de %f MZN.\n",montante_por_transferir,numero,saldo_total);
                      printf("\t\t\tObrigado por usar os nossos servicos Sr(a) ate breve.\n\n");
                    break;
                case 6://minha conta
                    printf("\tEspere 2 meses, enquanto se efectiva o seu cadastro totalmente, assim que o processo terminar podera ter acesso a sua conta.\n");
                    printf("\t\t\tObrigado por usar os nossos servicos Sr(a) ate breve.\n\n");
                    break;

                }}

            } else{
                printf("\n\tSenha incorrecta,repita o processo novamente.\n\n");
            }
        } else{
            printf("\n\tObrigado por usar os nossos servicos Sr(a) ate breve.\n");
        }

    } else{
     printf("\n\n\tSenha incorrecta, repita o processo novamente.\n\n");
    } {
    outra_operacao==0;//variavel do loop
    while(outra_operacao!=1 && outra_operacao!=2)
    {
    printf("pretende realizar outra operacao? 1.SIM, 2.NAO");
    scanf("%d", &outra_operacao);
    }
}
    return 0;
}
