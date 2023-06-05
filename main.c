#include "aeroporto.h"

int main(){
        int opMBV= 0; // VARIÁVEL QUE ARMAENA A OPÇÃO SELECIONADA NO MENU DE BOAS VINDAS
        int opMP = 0; // VARIÁVEL QUE ARMAZENA A OPÇÃO SELECIONADA NO MENU PRINCIPAL
        int opMR = 0; // VARIÁVEL QUE ARMAZENA A OPÇÃO SELECIONADA NO MENU DE ROTAS
        malhaAerea *M = NULL; // PONTEIRO PARA A MALHA AÉREA
        tipoRota *R = NULL; // PONTEIRO PARA ROTAS
        aeroporto A;
        aeroporto origem;
        aeroporto destino;

        M = criarMalhaAerea();//CRIANDO A MALHA AÉREA
        do{
                opMBV = menuBoasVindas();
                if(opMBV == 1){
                        // LIMPANDO A TELA
                        system("cls");
                        // EXIBINDO A LOGO
                        exibirLogo();
                        M = preencherMalhaAerea(M); // PREENCHENDO A MALHA AÉREA
                        do{
                                // LIMPANDO A TELA
                                system("cls");
                                // EXIBINDO A LOGO
                                exibirLogo();
                                opMP = menuPrincipal();
                                if(opMP == 1){
                                        // LIMPANDO A TELA
                                        system("cls");
                                        // EXIBINDO A LOGO
                                        exibirLogo();
                                        exibirInformacoesMalhaAerea(M);
                                }else if(opMP == 2){
                                        // LIMPANDO A TELA
                                        system("cls");
                                        // EXIBINDO A LOGO
                                        exibirLogo();
                                        listarAeroportos(M);
                                }else if(opMP == 3){
                                        // LIMPANDO A TELA
                                        system("cls");
                                        // EXIBINDO A LOGO
                                        exibirLogo();
                                        printf("\t\tInforme o codigo do aeroporto que deseja obter informacoes: ");
                                        scanf("%d", &A);
                                        buscarInfoAeroporto(M, A);
                                }else if(opMP == 4){
                                        //LIMPANDO A TELA
                                        system("cls");
                                        // EXIBINDO A LOGO
                                        exibirLogo();
                                        // INICIALIZANDO ROTAS
                                        R = inicializarRotas();
                                        do{
                                                //LIMPANDO A TELA
                                                system("cls");
                                                // EXIBINDO A LOGO
                                                exibirLogo();
                                                printf("\t\t(0 a 48)\n");
                                                printf("\t\tInforme o aeroporto de origem: ");
                                                scanf("%d", &origem);
                                                printf("\t\tInforme o aeroporto de destino: ");
                                                scanf("%d", &destino);
                                                if(origem >48 || origem < 0 || destino > 48 || destino < 0){
                                                        printf("\t\tUM OU MAIS CODIGOS DE AEROPORTOS INVALIDOS! POR FAVOR INFORME CODIGO(s) VALIDO(s)\n");
                                                        system("\t\tpause");
                                                }
                                        }while(origem >48 || origem < 0 || destino > 48 || destino < 0);

                                        // INICIANDO BUSCA POR ROTAS POSSÍVEIS PARA ESSE VÔO
                                        R = buscarRotas(M, R, origem, destino);
                                        // EXIBINDO MENU DE OPÇÕES DE ROTA
                                        do{
                                                system("cls");
                                                exibirLogo();
                                                opMR = menuRotas(M, R, origem, destino);

                                                if(opMR == 1){
                                                        exibirRotaDireta(M, R);
                                                }else if(opMR == 2){
                                                        exibirRotaMaisBarata(M, R);
                                                }else if(opMR == 3){
                                                        exibirRotaMaisRapida(M, R);
                                                }else if(opMR == 4){
                                                        exibirRotaMaisCara(M, R);
                                                }else if(opMR == 5){
                                                        exibirRotaMaisDemorada(M, R);
                                                }else if(opMR == 6){
                                                        exibirRotaMenosConexoes(M, R);
                                                }else if(opMR == 7){
                                                        exibirRotas(M, R->V);
                                                }else if(opMR == 0){
                                                        printf("Saindo...\n");
                                                }else{
                                                        printf("Opcao invalida!\n");
                                                }
                                        }while(opMR != 0);
                                }else if(opMP == 0){
                                        printf("Retornando ao menu iniciar...\n");
                                        system("cls");
                                }else if(opMP == 5){
                                        exibirListaAdj(M);
                                }
                        }while(opMP != 0);
                }else  if(opMBV == 0){
                        printf("OBRIGADO E VOLTE SEMPRE!\n");
                }else{
                        printf("Opcao invalida!\n");
                }
        }while(opMBV != 0);


        return 0;
}
