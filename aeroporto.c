#include "aeroporto.h"

/*
    ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                        >> IMPLEMENTA��O  DA FUN��ES QUE EXIBEM OS MENUS <<
    ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/* >> IMPLEMENTA��O DA FUN��O QUE EXIBE O MENU  DE BOAS VINDAS << */
int menuBoasVindas(){
        int op;

        printf("################################################################################    ###################################################################\n");
        printf("#################################################################         ####        #########       #################################################\n");
        printf("##################################################       ########  #####   ##   #####   #######   ##    ####    #######################################\n");
        printf("##############################  #########      ##  ##############  ######  ##  ######   #######   ########        #####################################\n");
        printf("###########################    #######    #######         #######   ####   ##   #####  ########  #    ###  ######  ####     ###########################\n");
        printf("#############################      ###   ##  ###########   ######         ####        ########   ########  ######   ##   ##    ########################\n");
        printf("###########################   ##    ###    #######  ##    #######  # #########################   ########   ####   ###   ####   ##    #################\n");
        printf("####################   ###  ######   ##  ####    #      ###################################################       ###   #      ###       ##############\n");
        printf("################  ###  ###  ######   ##        #####################################################################   ###  #####   ####   ######### ##\n");
        printf("################  ###   ##    ###   ######################################################################################   ###           ####  ##  ##\n");
        printf("#########   ####  ####   ###      ##########################################################################################  ##  ###    ###        ###\n");
        printf("##########    ##  #####  ######################################################################################################## ###   ###   #####  ##\n");
        printf("##  ########      #####  #############################################################################################################  ###  #######  #\n");
        printf("#     ########    ######################################################### ###############################################################   #####   #\n");
        printf("## ##    ################################################################## #################################################################        ##\n");
        printf("##  #      ################################################################ ####################################################################  #####\n");
        printf("##  #######################################################################  ##########################################################################\n");
        printf("##  #######################################################################  ##########################################################################\n");
        printf("## #############################################################     ###       ###     ################################################################\n");
        printf("#####################################################################     # #      ####################################################################\n");
        printf("#################################################################### ############# ####################################################################\n");
        printf("################################### ###############################  #############  ############################### ###################################\n");
        printf("####################################           ####################                 ####################           ####################################\n");
        printf("########################################                                                                       ########################################\n");
        printf("#####################################################                                             #####################################################\n");
        printf("##########################################################    #                         #    ##########################################################\n");
        printf("######################################################### ###  ######             ####### ###  ########################################################\n");
        printf("########################################################  #### ########         ########  ###  ########################################################\n");
        printf("#################################################### ####      ##########################     #### ####################################################\n");
        printf("#################################################### ############################################# ####################################################\n");
        printf("##################################################### ########################################### #####################################################\n");
        printf("######################################################   #####################################   ######################################################\n");
        printf("#######################################################   ###################################   #######################################################\n");
        printf("#########################################################   ###############################   #########################################################\n");
        printf("##########################################################    ###########################    ##########################################################\n");
        printf("#############################################################    ######################    ############################################################\n");
        printf("###############################################################      ##############     ###############################################################\n");
        printf("###################################################################                  ##################################################################\n");
        printf("#######################################################################################################################################################\n");
        printf("#######################################################################################################################################################\n");
        printf("########################################################################################################################################   ###   ######\n");
        printf("######       ##         #####  #####   ##########        ##         #   #####   ######   ###   ##  ###  #####  ##        ####       ####  ####  #######\n");
        printf("#####   ###  ##   ###########  #####    #########  ####  ##   ########   ###    ######   ###  ###  ###    ###  ##   ###   ##   ###   ###  ####  #######\n");
        printf("######      ###       #######  ####  #   ########        ###      ####    #     #######   #  ####  ###  #  ##  ##  #####  ##  #####   ##  ##### #######\n");
        printf("###########  ###  ###########  ###       ########  ####  ###  ######## ##   ##  ########     ####  ###  ##     ##  #####  ##  #####  ##################\n");
        printf("#####        ##         #      ##  #####   ######        ##         #   ## ##   #########   #####  ###  ####   ##        ####       ####  ####   ######\n");
        printf("#######################################################################################################################################################\n");


        printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        printf("\t\t\t\t\t\t\t\t1. CONTINUAR | 0. SAIR\n");
        scanf("%d", &op);

        return op;
}

/* >> IMPLEMENTA��O DA FUN��O QUE EXIBE O MENU  PRINCIPAL DE OP��ES << */
int menuPrincipal(){
        int op;

        printf( "\t\t\t\t1.  INFORMACOES DA MALHA AEREA | 2. LISTAR AEROPORTOS | 3. INFORMACOES AEROPORTO | 4. ROTA | 0. SAIR\n");
        scanf("%d", &op);

        return op;
}


/* >> IMPLEMENTA��O DA FUN��O QUE EXIBE O A LOGO << */
int exibirLogo(){
        printf("\t\t\t\t\t\t############################################################\n");
        printf("\t\t\t\t\t\t############################################################\n");
        printf("\t\t\t\t\t\t############################## #############################\n");
        printf("\t\t\t\t\t\t#############################  #############################\n");
        printf("\t\t\t\t\t\t#############################  #############################\n");
        printf("\t\t\t\t\t\t######################                ######################\n");
        printf("\t\t\t\t\t\t#########################   ####   #########################\n");
        printf("\t\t\t\t\t\t# ######################  ######### ###################### #\n");
        printf("\t\t\t\t\t\t##               #######             #######              ##\n");
        printf("\t\t\t\t\t\t#########                                           ########\n");
        printf("\t\t\t\t\t\t#################                          #################\n");
        printf("\t\t\t\t\t\t############# ##  ## #####         #### ### ##  ############\n");
        printf("\t\t\t\t\t\t#############  ## #  #######    #######  #  ## #############\n");
        printf("\t\t\t\t\t\t##############  #############################  #############\n");
        printf("\t\t\t\t\t\t##############   ###########################  ##############\n");
        printf("\t\t\t\t\t\t################  ########################   ###############\n");
        printf("\t\t\t\t\t\t#################   #####################  #################\n");
        printf("\t\t\t\t\t\t###################   ################    ##################\n");
        printf("\t\t\t\t\t\t#####################     ########     #####################\n");
        printf("\t\t\t\t\t\t###########################      ###########################\n");
        printf("\t\t\t\t\t\t############################################################\n");
        printf("\t\t----------------------------------------------------------------------------------------------------------------------------------\n");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O QUE EXIBE O MENU  DE ROTAS ENCONTRADAS << */
int menuRotas(malhaAerea *M, tipoRota *R, aeroporto origem, aeroporto destino){
        int op = 0;

        printf("\n\t\t\t--------------------------------------------------->>ROTA SOLICITADA<<----------------------------------------------------\n");
        printf("\n\t\t\tORIGEM:---------------------------> %s \n", M->listaAeroportos[origem].nome);
        printf("\n\t\t\tDESTINO:--------------------------> %s \n", M->listaAeroportos[destino].nome);
        if(R->qtdRotas == 0){
                printf("\n\t\t\t    INFELIZMENTE NAO HA ROTAS DISPONIVEIS ENTRE OS AEROPORTOS SELECIONADOS\n");
                return op;
        }else{
                printf("\n\t\t\tQUANTIDADE DE ROTAS ENCONTRADAS:--> %d\n", R->qtdRotas);
        }
        printf("\n\t\t\tEXIBIR VOO(s):\n");
        printf("\t\t\t1. DIRETO | 2. MAIS BARATO | 3. MAIS RAPIDO | 4. MAIS CARO | 5. MAIS DEMORADO | 6. COM MENOS CONEXOES | 7. TODOS | 0. VOLTAR\n");
        scanf("%d", &op);

        return op;
}

/* >> IMPLEMENTA��O DA FUN��O QUE CRIA A MALHA A�REA << */
malhaAerea *criarMalhaAerea(){
        malhaAerea *novaMalha = (malhaAerea *)calloc(1, sizeof(malhaAerea));

        if(!novaMalha){
                printf("Erro de alocacao! Abortando o programa...\n");
                exit(1);
        }

        return novaMalha;
}

/* >> IMPLEMENTA��O DA FUN��O QUE CRIA PREENCHE A MALHA A�REA A PARTIR DOS DADOS CARREGADOS EM UM ARQUIVO << */
malhaAerea *preencherMalhaAerea(malhaAerea *M){
        int indiceL;
        int indiceC;
        int tamanho;
        FILE *banco;

        // ABRE O ARQUIVO COM AS INFORMA��ES DE CONEX�O, CUSTO, DISTANCIA E TEMPO EM MODO LEITURA
        banco = fopen("banco.txt", "rt");

        // VERIFICANDO DE A ABERTURA FOI BEM SUCEDIDA, CASO CONTR�RIO O PROGRAMA � ABORTADO
        if(!banco){
                printf("Erro ao abrir o arquivo! Abortando o programa...\n");
                exit(1);
        }

        fscanf(banco, "%d", &tamanho);
        M->pais = alocarString(tamanho);
        fscanf(banco, " %[^\n]s", M->pais);

        fscanf(banco, "%d", &tamanho);
        M->agReguladora = alocarString(tamanho);
        fscanf(banco, " %[^\n]s", M->agReguladora);

        fscanf(banco, "%d", &tamanho);
        M->presidenteAgencia = alocarString(tamanho);
        fscanf(banco, " %[^\n]s", M->presidenteAgencia);

        fscanf(banco, "%d", &tamanho);
        M->empAdmAeroportos = alocarString(tamanho);
        fscanf(banco, " %[^\n]s", M->empAdmAeroportos);

        fscanf(banco, "%d", &tamanho);
        M->presidenteEmpAdmAeroportos = alocarString(tamanho);
        fscanf(banco, " %[^\n]s", M->presidenteEmpAdmAeroportos);

        fscanf(banco, "%d", &M->qtdEmpresasOperantes);
        fscanf(banco, "%d", &M->qtdAeroportos);

        M->listaAeroportos = (tipoAerodromo *)calloc(M->qtdAeroportos, sizeof(tipoAerodromo));
        for(indiceL = 0; indiceL < M->qtdAeroportos; indiceL++){
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].id);
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].qtdPistas);
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].vooInternacional);
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].movimentoAnual);
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].inauguracao.dia);
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].inauguracao.mes);
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].inauguracao.ano);
                fscanf(banco, "%d", &M->listaAeroportos[indiceL].dataDados);
                fscanf(banco, "%s", M->listaAeroportos[indiceL].codigoIATA);
                fscanf(banco, " %s", M->listaAeroportos[indiceL].uf);
                fscanf(banco, "%d", &tamanho);
                M->listaAeroportos[indiceL].cidade = alocarString(tamanho);
                fscanf(banco, " %[^\n]s", M->listaAeroportos[indiceL].cidade);
                fscanf(banco, "%d", &tamanho);
                M->listaAeroportos[indiceL].nome = alocarString(tamanho);
                fscanf(banco, " %[^\n]s", M->listaAeroportos[indiceL].nome);
                fscanf(banco, "%d", &tamanho);
                M->listaAeroportos[indiceL].fonte = alocarString(tamanho);
                fscanf(banco, " %[^\n]s", M->listaAeroportos[indiceL].fonte);
                fscanf(banco, "%d", &tamanho);
                M->listaAeroportos[indiceL].dadosDisponiveis = alocarString(tamanho);
                fscanf(banco, " %[^\n]s", M->listaAeroportos[indiceL].dadosDisponiveis);
        }

        // PREENCHENDO A QUANTIDADE DE CONEX�ES DE CADA AEROPORTO
        M->conexoes = (int *)calloc(M->qtdAeroportos, sizeof(int));
        for(indiceL = 0; indiceL < M->qtdAeroportos; indiceL++){
                fscanf(banco, "%d", &M->conexoes[indiceL]);
        }

        // CRIANDO A LISTA DE ADJAC�NCIA  QUE REPRESENTA AS CONEX�ES  DE CADA AEROPORTO
        M->listaAdj = (int **)calloc(M->qtdAeroportos, sizeof(int *));
        for(indiceL = 0; indiceL < M->qtdAeroportos; indiceL++){
                M->listaAdj[indiceL] = (int *)calloc(M->conexoes[indiceL], sizeof(int));
                for(indiceC = 0; indiceC < M->conexoes[indiceL]; indiceC++){
                        fscanf(banco, "%d", &M->listaAdj[indiceL][indiceC]);
                }
        }

        // CRIANDO A LISTA DE ADJAC�NCIA  QUE REPRESENTA O CUSTO DE V�O ENTRE CADA AEROPORTO
        M->custo = (int **)calloc(M->qtdAeroportos, sizeof(int *));
        for(indiceL = 0; indiceL < M->qtdAeroportos; indiceL++){
                M->custo[indiceL] = (int *)calloc(M->conexoes[indiceL], sizeof(int));
                for(indiceC = 0; indiceC < M->conexoes[indiceL]; indiceC++){
                        fscanf(banco, "%d", &M->custo[indiceL][indiceC]);
                }
        }

        // CRIANDO A LISTA DE ADJAC�NCIA  QUE REPRESENTA O TEMPO DE V�O ENTRE CADA AEROPORTO
        M->tempo = (int **)calloc(M->qtdAeroportos, sizeof(int *));
        for(indiceL = 0; indiceL < M->qtdAeroportos; indiceL++){
                M->tempo[indiceL] = (int *)calloc(M->conexoes[indiceL], sizeof(int));
                for(indiceC = 0; indiceC < M->conexoes[indiceL]; indiceC++){
                        fscanf(banco, "%d", &M->tempo[indiceL][indiceC]);
                }
        }

        // CRIANDO A LISTA DE ADJAC�NCIA  QUE REPRESENTA AS COMPANHIAS A�RES RESPONS�VEIS PELOS V�OS DIRETOS ENTRE CADA AEROPORTO
        M->compAerea = (int **)calloc(M->qtdAeroportos, sizeof(int *));
        for(indiceL = 0; indiceL < M->qtdAeroportos; indiceL++){
                M->compAerea[indiceL] = (int *)calloc(M->conexoes[indiceL], sizeof(int));
                for(indiceC = 0; indiceC < M->conexoes[indiceL]; indiceC++){
                        fscanf(banco, "%d", &M->compAerea[indiceL][indiceC]);
                }
        }

        // FECHANDO O ARQUIVO
        fclose(banco);

        return M;
}

/* >> IMPLEMENTA��O DA FUN��O QUE EXIBE AS INFORMA��ES DA MALHA A�REA << */
int exibirInformacoesMalhaAerea(malhaAerea* M){
        printf("\n\t\t\t---------------------------------------------->>INFORMACOES DA MALHA AEREA <<---------------------------------------------\n");
        printf("\n\t\t\tPAIS:--------------------------------------> %s\n", M->pais);
        printf("\n\t\t\tAGENCIA REGULADORA:------------------------> %s\n", M->agReguladora);
        printf("\n\t\t\tPRESIDENTE:--------------------------------> %s\n", M->presidenteAgencia);
        printf("\n\t\t\tEMPRESA ADMINISTRADORA DOS AEROPORTOS:-----> %s\n", M->empAdmAeroportos);
        printf("\n\t\t\tPRESIDENTE:--------------------------------> %s\n", M->presidenteEmpAdmAeroportos);
        printf("\n\t\t\tQUANTIDADE DE EMPRESAS AEREAS OPERANTES:---> %d\n", M->qtdEmpresasOperantes);
        printf("\n\t\t\tQUANTIDADE DE AEROPORTOS:------------------> %d\n\n", M->qtdAeroportos);
        system("pause");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  LISTA TODOS OS AEROPORTOS DA MALHA A�REA << */
int listarAeroportos(malhaAerea* M){
        int indice;

        printf("\t\t\t---------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t--------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t-------------------------------------------------\n");
        printf("\n\t\t------------------------------------------------->> AEROPORTOS DA MALHA AEREA <<--------------------------------------------------\n\n");
        printf("\n");
        printf("\t\t%2cID%-1c|%1cCOD. IATA%1c|%1cNOME DO AEROPORTO%-66c|%1cUF%-1c|%1cCIDADE\n", TAB, TAB, TAB, TAB,TAB, TAB, TAB, TAB, TAB);
        printf("\t\t----------------------------------------------------------------------------------------------------------------------------------\n");
        for(indice = 0; indice < M->qtdAeroportos; indice++){

                printf("\t\t%4d%-1c|%7s%-4c|%1c%-83s|%1c%s%-1c|%1c%s\n", M->listaAeroportos[indice].id, TAB, M->listaAeroportos[indice].codigoIATA, TAB, TAB, M->listaAeroportos[indice].nome, TAB, M->listaAeroportos[indice].uf, TAB, TAB, M->listaAeroportos[indice].cidade);

                printf("\t\t----------------------------------------------------------------------------------------------------------------------------------\n");
        }
        system("pause");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O QUE BUSCA AS INFORMA��ES DE UM DOS AEROPORTOS  QUE COMP�EM A MALHA A�REA << */
int buscarInfoAeroporto(malhaAerea* M, int indice){
        if(indice > M->qtdAeroportos){
                printf("Codigo do aeroporto invalido!\n");
        }else{
                printf("\n\t\t\t--------------------------->>%s<<---------------------------\n\n", M->listaAeroportos[indice].nome);
                printf("\t\t\tID:-------------------------------------> %d\n\n", M->listaAeroportos[indice].id);
                printf("\t\t\tCOD. IATA:------------------------------> %s\n\n", M->listaAeroportos[indice].codigoIATA);
                printf("\t\t\tQUANTIDADE DE PISTAS:-------------------> %d\n\n", M->listaAeroportos[indice].qtdPistas);
                printf("\t\t\tDATA DE INAUGURACAO:--------------------> %d/%d/%d\n\n", M->listaAeroportos[indice].inauguracao.dia, M->listaAeroportos[indice].inauguracao.mes, M->listaAeroportos[indice].inauguracao.ano);
                printf("\t\t\tMOVIMENTO ANUAL DE PASSAGEIROS:---------> %d*\n\n", M->listaAeroportos[indice].movimentoAnual);
                if(!M->listaAeroportos[indice].vooInternacional)
                        printf("\t\t\tOFERECE VOOS INTERNACIONAIS:-----------------> NAO\n\n");
                else
                        printf("\t\t\tOFERECE VOOS INTERNACIONAIS:------------> SIM\n\n");
                printf("\t\t\t(*)DADOS DE:----------------------------> %d\n\n", M->listaAeroportos[indice].dataDados);
                printf("\t\t\t(*)DADOS EXTRAIDOS DE: -----------------> %s\n\n", M->listaAeroportos[indice].fonte);
                printf("\t\t\t(*)DISPONIVEL EM: ------> %s\n\n", M->listaAeroportos[indice].dadosDisponiveis);
        }
        system("pause");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE  INICIALIZA AS ROTAS << */
tipoRota *inicializarRotas(){
        tipoRota *R = (tipoRota *)calloc(1, sizeof(tipoRota));

        if(!R){
                printf("Erro de alocacao! Abortando o programa...\n");
                exit(1);
        }

        return R;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE REALIZA  A BUSCA POR ROTAS ENTRE DOIS AEROPOTOS DA MALHA A�REA<< */
tipoRota *buscarRotas(malhaAerea *M, tipoRota *R, aeroporto origem, aeroporto destino){
        int i;
        int flag = 1;
        int custoTotal = 0;
        int tempoTotal = 0;
        int visitado[M->qtdAeroportos];
        tipoConexao *C = NULL;

        for(i = 0; i < M->qtdAeroportos; i++)
                visitado[i] = 0;

        visitado[origem] = 1;
        C = empilharConexoes(C, origem);

        buscarRotasProfundidade(M, R, C, origem, destino, visitado, flag, custoTotal, tempoTotal);

        return R;
}

/* >> IMPLEMENTA��O DA QUE FUN��O  REALIZA  A BUSCA  RECURSIVAMENTE POR ROTAS ENTRE DOIS AEROPOTOS DA MALHA A�REA<< */
tipoRota *buscarRotasProfundidade(malhaAerea *M, tipoRota *R, tipoConexao *C, aeroporto origem, aeroporto destino, int *visitado, int flag, int custoTotal, int tempoTotal){
        int i;

        for(i = 0; i < M->conexoes[origem]; i++){
                // VERIFICANDO SE O AEROPORTO ATUAL J� FOI VISITADO
                if(!visitado[M->listaAdj[origem][i]]){
                        C = empilharConexoes(C, M->listaAdj[origem][i]);
                        custoTotal = calcularCusto(custoTotal, M->custo[origem][i]);
                        tempoTotal = calcularTempo(tempoTotal, M->tempo[origem][i]);
                        if(M->listaAdj[origem][i] != destino){
                                visitado[M->listaAdj[origem][i]] = 1;
                                buscarRotasProfundidade(M, R, C, M->listaAdj[origem][i], destino, visitado, flag, custoTotal, tempoTotal);
                                C = desempilharConexao(C);
                                custoTotal -= M->custo[origem][i];
                                tempoTotal -= M->tempo[origem][i];
                        }else{
                                // PROCESSANDO ROTA V�LIDA
                                R = processarRotas(R, C, custoTotal, tempoTotal, origem, M->listaAdj[origem][i], M->compAerea[origem][i]);
                                C = desempilharConexao(C);
                        }
                }
        }

        return R;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE  EMPILHA  AS CONEX�ES << */
tipoConexao *empilharConexoes(tipoConexao* C, aeroporto origem){
        tipoConexao *novaConexao = (tipoConexao *)calloc(1, sizeof(tipoConexao));

        if(!novaConexao){
                printf("Erro de alocacao de memoria! Abortando o programa...\n");
                exit(1);
        }

        novaConexao->partida = origem;

        if(!C)
                C = novaConexao;
        else
                novaConexao->ponte = C;

        return novaConexao;
}



/*>> IMPLEMENTA��O DA FUN��O QUE SALVA AS ROTAS ENTRE DOIS AEROPORTOS <<*/
tipoRota *processarRotas(tipoRota *R, tipoConexao *C, int custoTotal, int tempoTotal, aeroporto origem, aeroporto destino, int compAerea){
        int qtdConexoes = 0;
        tipoConexao *novaConexao = NULL;
        tipoConexao *aux = C;
        tipoVoo *novoVoo = (tipoVoo *)calloc(1, sizeof(tipoVoo));

        if(!novoVoo){
                printf("Erro de alocacao de memoria. Abortando o programa...\n");
                exit(1);
        }

        while(C){
                // EMPILHANDO CONEX�ES EM UMA NOVA CONEX�O
                novaConexao = empilharConexoes(novaConexao, aux->partida);
                // DESEMPILHANDO A CONEX�O ATUAL
                C = C->ponte;
                aux->ponte = NULL;
                // ENFILEIRANDO  A CONEX�O DESEMPILHADA, DE MODO A DEIXAR AS CONEX�ES NA ORDEM: SA�DA --> DESTINO
                novoVoo = enfileirarConexoes(novoVoo, aux);
                aux = C;
                // CALCULLANDO A QUANTIDADE DE CONEX�ES
                qtdConexoes++;
        }

        // RESTAURANDO A PILHA DE CONEX�ES ORIGINAL
        C = novoVoo->C;
        // ATRIBUINDO AO NOVO V�O A FILA DE CONEX�ES NA ORDEM: SA�DA --> DESTINO
        novoVoo->C = novaConexao;
        // ATRIBUINDO AO NOVO V�O O CUSTO TOTAL DA VIAGEM
        novoVoo->custo = custoTotal;
        // ATRIBUINDO AO NOVO V�O O TEMPO TOTAL DA VIAGEM
        novoVoo->tempoTotal = tempoTotal;
        // INICIANDO C�LCULO DO TEMPO DE V�O EM DIAS, HORAS E MINUTOS
        if(novoVoo->tempoTotal >= 1440){
                novoVoo->duracao.dd = novoVoo->tempoTotal / 1440;
                novoVoo->duracao.hh = (novoVoo->tempoTotal % 1440) / 60;
                novoVoo->duracao.mm = (novoVoo->tempoTotal % 1440) % 60;
        }else{
                novoVoo->duracao.hh = novoVoo->tempoTotal / 60;
                novoVoo->duracao.mm = novoVoo->tempoTotal % 60;
        }
        // ATUALIZANDO A QUANTIDADE DE CONEX�ES NECESS�RIAS PARA ESSE V�O
        novoVoo->qtdConexoes = qtdConexoes - 2;
        // ATRIBUINDO NOME PADR�O REFERENTE A COMPANHIA A�REA RESPONS�VEL PELO V�O, NO CASO DE N�O SE TRATAR DE UM V�O DIRETO
        novoVoo->compAerea = alocarString(9);
        novoVoo->compAerea = "DIVERSAS";

        if(!R->V){
                R->V = novoVoo;
        }else{
                novoVoo->prox = R->V;
                R->V= novoVoo;
        }

        // VERIFICANDO SE H� UM V�O DIRETO ENTRE O AEROPORTO DE ORIGEM E O AEROPORTO DE DESTINO
        if(novoVoo->qtdConexoes == 0){
                R->vooDireto = (tipoVoo *)calloc(1, sizeof(tipoVoo));
                R->vooDireto = novoVoo;

                R->vooDireto->compAerea = alocarString(compAerea);
                if(compAerea == 4){
                        R->vooDireto->compAerea = "GOL";
                }else if(compAerea == 5){
                        R->vooDireto->compAerea = "AZUL";
                }else if(compAerea == 6){
                        R->vooDireto->compAerea = "LATAM";
                }else{
                        R->vooDireto->compAerea = "AVIANCA";
                }

                if(origem <= 5)
                        R->vooDireto->dataVoo.dia = 25;
                else
                        R->vooDireto->dataVoo.dia = 28;
                R->vooDireto->dataVoo.mes = 1;
                R->vooDireto->dataVoo.ano = 2019;
        }

        if(!R->vooMaisBarato || !R->vooMaisCaro || !R->vooMaisDemorado || !R->vooMaisRapido){
                R->vooMaisBarato = (tipoVoo *)calloc(1, sizeof(tipoVoo));
                R->vooMaisCaro = (tipoVoo *)calloc(1, sizeof(tipoVoo));
                R->vooMaisDemorado = (tipoVoo *)calloc(1, sizeof(tipoVoo));
                R->vooMaisRapido = (tipoVoo *)calloc(1, sizeof(tipoVoo));
                R->vooMenosConexoes = (tipoVoo *)calloc(1, sizeof(tipoVoo));

                R->vooMaisBarato = novoVoo;
                R->vooMaisCaro = novoVoo;
                R->vooMaisDemorado = novoVoo;
                R->vooMaisRapido = novoVoo;
                R->vooMenosConexoes = novoVoo;
        }else{
                // VERIFICANDO V�O MAIS BARATO
                if(custoTotal <= R->vooMaisBarato->custo)
                        R->vooMaisBarato = novoVoo;
                // VERIFICANDO V�O MAIS CARO
                if(custoTotal >= R->vooMaisCaro->custo)
                        R->vooMaisCaro = novoVoo;
                // VERIFICANDO V�O MAIS DEMORADO
                if(tempoTotal >= R->vooMaisDemorado->tempoTotal)
                        R->vooMaisDemorado = novoVoo;
                // VERIFICANDO MAIS R�PIDO
                if(tempoTotal <= R->vooMaisRapido->tempoTotal)
                        R->vooMaisRapido = novoVoo;
                // VERIFICANDO V�O COM MENOS CONEX�ES
                if(novoVoo->qtdConexoes <= R->vooMenosConexoes->qtdConexoes)
                        R->vooMenosConexoes = novoVoo;
        }
        //ATUALIZANDO A QUANTIDADE DE ROTAS
        R->qtdRotas ++;

        return R;
}

/*>> IMPLEMENTA��O DA FUN��O QUE ENFILEIRA AS CONEX�ES <<*/
tipoVoo *enfileirarConexoes(tipoVoo *V, tipoConexao *novaConexao){
        if(!V->C){
                V->ultimoAeroporto = novaConexao;
                V->C = novaConexao;
        }else{
                V->ultimoAeroporto->ponte = novaConexao;
                V->ultimoAeroporto = novaConexao;
        }

        return V;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE  EXIBE PILHA DE CONEX�ES << */
int exibirPilhaConexoes(tipoConexao *C){
        tipoConexao *aux = C;

        printf("\n---------------->>EXIBINDO  PILHA DE CONEXOES<<----------------\n");
        while(aux){
                printf("%d\n", aux->partida);
                aux = aux->ponte;
        }
        printf("\n---------------->>FIM DA PILHA DE CONEXOES<<----------------\n");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE EXIBE A LISTA DE ADJAC�NCIA<< */
void exibirListaAdj(malhaAerea* M){
        int indiceL;
        int indiceC;

        // IMPRIMINDO A LISTA DE ADJAC�NCIAS
        printf("\n---------------->>LISTA DE DISTANCIA<<----------------\n");
        for(indiceL = 0; indiceL < M->qtdAeroportos; indiceL++){
                for(indiceC = 0; indiceC < M->conexoes[indiceL]; indiceC++){
                        printf("C[%d][%d] = %d - ", indiceL, indiceC, M->listaAdj[indiceL][indiceC]);
                }
                printf("\n");
        }
}

/* >> IMPLEMENTA��O DA FUN��O  QUE ALOCA AS STRINGS << */
char *alocarString(int tam){
        char *palavra = (char *)malloc(tam *sizeof(char));

        if(!palavra){
                printf("Erro de alocacao! Abortando o programa...AAA\n");
                exit(1);
        }

        return palavra;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE DESEMPILHA CONEX�O << */
tipoConexao *desempilharConexao(tipoConexao* C){
        tipoConexao *aux = C;

        C  = C->ponte;
        aux->ponte = NULL;
        free(aux);

        return C;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE REALIZA O C�CULO DO CUSTO DO V�O PARA CADA ROTA ENCONTRADA << */
int calcularCusto(int custoTotal, int custoAtual){
        return custoTotal += custoAtual;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE REALIZA O C�CULO DO TEMPO DO V�O PARA CADA ROTA ENCONTRADA << */
int calcularTempo(int tempoTotal, int tempoAtual){
        return tempoTotal += tempoAtual;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE EXIBE A ROTA DIRETA << */
int exibirRotaDireta(malhaAerea *M, tipoRota *R){
        if(R->vooDireto){
                printf("\n\t\t\t------------------------------------------------------------------------------\n");
                printf("\t\t\tROTA DIRETA: \n");
                printf("\n\t\t\t   TRAJETO:  \n\n");
                printf("\t\t\t\t%s", M->listaAeroportos[R->vooDireto->C->partida].codigoIATA);
                printf(" -> %s\n", M->listaAeroportos[R->vooDireto->C->ponte->partida].codigoIATA);
                printf("\n\t\t\t\t*CUSTO: R$ %d,00\n", R->vooDireto->custo);
                printf("\t\t\t\t*DURACAO: %dh:%dmin\n", R->vooDireto->duracao.hh, R->vooDireto->duracao.mm);
                printf("\t\t\t\t*DATA DO VOO: %d/%d/%d\n", R->vooDireto->dataVoo.dia, R->vooDireto->dataVoo.mes, R->vooDireto->dataVoo.ano);
                printf("\t\t\t\t*COMPANHIA AEREA: %s\n", R->vooDireto->compAerea);
                printf("\t\t\t------------------------------------------------------------------------------\n");
        }else{
                printf("\t\t\tNAO HA ROTA DIRETA PARA ESSE VOO\n");
        }
        system("pause");
        // LIMPANDO A TELA
        system("cls");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE EXIBE A ROTA MAIS BARATA << */
int exibirRotaMaisBarata(malhaAerea *M, tipoRota *R){
        tipoConexao *auxConexao = R->vooMaisBarato->C;

        printf("\n\t\t\t------------------------------------------------------------------------------\n");
        printf("\t\t\tROTA MAIS BARATA: \n");
        printf("\n\t\t\t   QUANTIDADE DE CONEXOES: %d\n", R->vooMaisBarato->qtdConexoes);
        printf("\n\t\t\t   TRAJETO:  \n\n");
        printf("\t\t\t\t%s", M->listaAeroportos[auxConexao->partida].codigoIATA);
        auxConexao = auxConexao->ponte;
        while(auxConexao){
                printf(" -> %s", M->listaAeroportos[auxConexao->partida].codigoIATA);
                auxConexao = auxConexao->ponte;
        }
        printf("\n");
        printf("\n\t\t\t\t*CUSTO: R$ %d,00\n", R->vooMaisBarato->custo);
        printf("\t\t\t\t*DURACAO: %dd:%dh:%dmin\n", R->vooMaisBarato->duracao.dd, R->vooMaisBarato->duracao.hh, R->vooMaisBarato->duracao.mm);
        printf("\t\t\t\t*COMPANHIA AEREA: %s\n", R->vooMaisBarato->compAerea);
        printf("\t\t\t------------------------------------------------------------------------------\n");
        system("pause");
        // LIMPANDO A TELA
        system("cls");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE EXIBE A ROTA MAIS RAPIDA << */
int exibirRotaMaisRapida(malhaAerea *M, tipoRota *R){
        tipoConexao *auxConexao = R->vooMaisRapido->C;

        printf("\n\t\t\t------------------------------------------------------------------------------\n");
        printf("\t\t\tROTA MAIS RAPIDA: \n");
        printf("\n\t\t\t   QUANTIDADE DE CONEXOES: %d\n", R->vooMaisRapido->qtdConexoes);
        printf("\n\t\t\t   TRAJETO:  \n\n");
        printf("\t\t\t\t%s", M->listaAeroportos[auxConexao->partida].codigoIATA);
        auxConexao = auxConexao->ponte;
        while(auxConexao){
                printf(" -> %s", M->listaAeroportos[auxConexao->partida].codigoIATA);
                auxConexao = auxConexao->ponte;
        }
        printf("\n");
        printf("\n\t\t\t\t*CUSTO: R$ %d,00\n", R->vooMaisRapido->custo);
        printf("\t\t\t\t*DURACAO: %dd:%dh:%dmin\n", R->vooMaisRapido->duracao.dd, R->vooMaisRapido->duracao.hh, R->vooMaisRapido->duracao.mm);
        printf("\t\t\t\t*COMPANHIA AEREA: %s\n", R->vooMaisRapido->compAerea);
        printf("\t\t\t------------------------------------------------------------------------------\n");
        system("pause");
        // LIMPANDO A TELA
        system("cls");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE EXIBE A ROTA MAIS RAPIDA << */
int exibirRotaMaisCara(malhaAerea *M, tipoRota *R){
        tipoConexao *auxConexao = R->vooMaisCaro->C;

        printf("\n\t\t\t------------------------------------------------------------------------------\n");
        printf("\t\t\tROTA MAIS CARA: \n");
        printf("\n\t\t\t   QUANTIDADE DE CONEXOES: %d\n", R->vooMaisCaro->qtdConexoes);
        printf("\n\t\t\t   TRAJETO:  \n\n");
        printf("\t\t\t\t%s", M->listaAeroportos[auxConexao->partida].codigoIATA);
        auxConexao = auxConexao->ponte;
        while(auxConexao){
                printf(" -> %s", M->listaAeroportos[auxConexao->partida].codigoIATA);
                auxConexao = auxConexao->ponte;
        }
        printf("\n");
        printf("\n\t\t\t\t*CUSTO: R$ %d,00\n", R->vooMaisCaro->custo);
        printf("\t\t\t\t*DURACAO: %dd:%dh:%dmin\n", R->vooMaisCaro->duracao.dd, R->vooMaisCaro->duracao.hh, R->vooMaisCaro->duracao.mm);
        printf("\t\t\t\t*COMPANHIA AEREA: %s\n", R->vooMaisCaro->compAerea);
        printf("\t\t\t------------------------------------------------------------------------------\n");
        system("pause");
        // LIMPANDO A TELA
        system("cls");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE EXIBE A ROTA MAIS DEMORADA << */
int exibirRotaMaisDemorada(malhaAerea *M, tipoRota *R){
        tipoConexao *auxConexao = R->vooMaisDemorado->C;

        printf("\n\t\t\t------------------------------------------------------------------------------\n");
        printf("\t\t\tROTA MAIS DEMORADA: \n");
        printf("\n\t\t\t   QUANTIDADE DE CONEXOES: %d\n", R->vooMaisDemorado->qtdConexoes);
        printf("\n\t\t\t   TRAJETO:  \n\n");
        printf("\t\t\t\t%s", M->listaAeroportos[auxConexao->partida].codigoIATA);
        auxConexao = auxConexao->ponte;
        while(auxConexao){
                printf(" -> %s", M->listaAeroportos[auxConexao->partida].codigoIATA);
                auxConexao = auxConexao->ponte;
        }
        printf("\n");
        printf("\n\t\t\t\t*CUSTO: R$ %d,00\n", R->vooMaisDemorado->custo);
        printf("\t\t\t\t*DURACAO: %dd:%dh:%dmin\n", R->vooMaisDemorado->duracao.dd, R->vooMaisDemorado->duracao.hh, R->vooMaisDemorado->duracao.mm);
        printf("\t\t\t\t*COMPANHIA AEREA: %s\n", R->vooMaisDemorado->compAerea);
        printf("\t\t\t------------------------------------------------------------------------------\n");
        system("pause");
        // LIMPANDO A TELA
        system("cls");

        return 1;
}

/* >> IMPLEMENTA��O DA FUN��O  QUE EXIBE A ROTA MAIS DEMORADA << */
int exibirRotaMenosConexoes(malhaAerea *M, tipoRota *R){
        tipoConexao *auxConexao = R->vooMenosConexoes->C;

        printf("\n\t\t\t------------------------------------------------------------------------------\n");
        printf("\t\t\tROTA COM MENOS CONEXOES: \n");
        printf("\n\t\t\t   QUANTIDADE DE CONEXOES: %d\n", R->vooMenosConexoes->qtdConexoes);
        printf("\n\t\t\t   TRAJETO:  \n\n");
        printf("\t\t\t\t%s", M->listaAeroportos[auxConexao->partida].codigoIATA);
        auxConexao = auxConexao->ponte;
        while(auxConexao){
                printf(" -> %s", M->listaAeroportos[auxConexao->partida].codigoIATA);
                auxConexao = auxConexao->ponte;
        }
        printf("\n");
        printf("\n\t\t\t\t*CUSTO: R$ %d,00\n", R->vooMenosConexoes->custo);
        printf("\t\t\t\t*DURACAO: %dd:%dh:%dmin\n", R->vooMenosConexoes->duracao.dd, R->vooMenosConexoes->duracao.hh, R->vooMenosConexoes->duracao.mm);
        printf("\t\t\t\t*COMPANHIA AEREA: %s\n", R->vooMenosConexoes->compAerea);
        printf("\t\t\t------------------------------------------------------------------------------\n");
        system("pause");
        // LIMPANDO A TELA
        system("cls");

        return 1;
}

int exibirRotas(malhaAerea *M, tipoVoo *V){
        int i = 0;
        tipoVoo *auxVoo = V;
        tipoConexao *auxConexao = V->C;

        while(auxVoo){
                printf("\t\t\t------------------------------------------------------------------------------\n");
                printf("\t\t\t   ROTA %d: \n", i + 1);
                printf("\n\t\t\t   TRAJETO:  \n\n");
                printf("\t\t\t\t%s", M->listaAeroportos[auxVoo->C->partida].codigoIATA);
                auxConexao = auxConexao->ponte;
                while(auxConexao){
                        printf(" -> %s", M->listaAeroportos[auxConexao->partida].codigoIATA);
                        auxConexao = auxConexao->ponte;
                }
                printf("\n\n");
                printf("\t\t\t\t*QUANTIDADE DE CONEXOES: %d\n", auxVoo->qtdConexoes);
                printf("\t\t\t\t*CUSTO: R$ %d,00\n", auxVoo->custo);
                printf("\t\t\t\t*DURACAO: %dd:%dh:%dmin\n", auxVoo->duracao.dd, auxVoo->duracao.hh, auxVoo->duracao.mm);
                printf("\t\t\t\t*COMPANHIA AEREA: %s\n", auxVoo->compAerea);
                auxVoo = auxVoo->prox;
                if(auxVoo)
                        auxConexao = auxVoo->C;
                i++;
        }
        printf("\t\t\t------------------------------------------------------------------------------\n");
        system("pause");
        // LIMPANDO A TELA
        system("cls");

        return 1;
}
