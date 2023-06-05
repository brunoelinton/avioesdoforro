#ifndef _AEROPORTO_H
#define _AEROPORTO_H

// INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DEFINIÇÃO DO TIPO DE DADO QUE REPRESENTA UM VÉRTICE DO GRAFO, OU SEJA, UM AEROPORTO DA MALHA AÉREA
#define aeroporto int
// DEFINIÇÃO DA CONSTANTE RESPONSÁVEL PELA TABULAÇÃO DE ALGUMAS INFORMAÇÕES
#define TAB ' '

// DEFINIÇÃO DA ESTRUTURA QUE REPRESENTA A DATA
typedef struct data{
        int dia;
        int mes;
        int ano;
}tipoData;

// DEFINIÇÃO DA ESTRUTURA QUE REPRESENTA O TEMPO DE VÔO EM HORAS E MINUTOS (HH:MM)
typedef struct tempo{
        int dd;
        int hh;
        int mm;
}tipoTempo;

// DEFINIÇÃO DA ESTRUTURA QUE REPRESENTA UM AEROPORTO
typedef struct aerodromo{
        int id;
        int qtdPistas;
        int vooInternacional;
        int dataDados;
        int movimentoAnual;
        char codigoIATA[4];
        char uf[3];
        char *cidade;
        char *nome;
        char *fonte;
        char *dadosDisponiveis;
        tipoData inauguracao;
}tipoAerodromo;

// DEFINIÇÃO DA ESTRUTURA QUE REPRESENTA O GRAFO, OU SEJA, A MALHA AÉREA PARA UMA IMPLEMENTAÇÃO UTILLIZANDO LISTAS DE ADJACÊNCIAS
typedef struct grafoL{
        int qtdAeroportos;
        int qtdEmpresasOperantes;
        int *conexoes;
        int **listaAdj;
        int **tempo;
        int **custo;
        int **compAerea;
        float **distancia;
        char *pais;
        char *agReguladora;
        char *presidenteAgencia;
        char *empAdmAeroportos;
        char *presidenteEmpAdmAeroportos;
        tipoAerodromo *listaAeroportos;
}malhaAerea;

// DEFINIÇÃO DA ESTRUTURA QUE REPRESENTA AS CONEXÕES ENTRE DOIS AEROPORTOS DA MALHA AÉREA
typedef struct conexao{
        aeroporto partida;
        struct conexao *ponte;
}tipoConexao;

// DEFINIÇÃO DA ESTRUTURA QUE REPRESENTA  OS VÔOS POSSÍVEIS ENTRE DOIS AEROPORTOS DA MALHA AÉREA
typedef struct voo{
        tipoConexao *C;
        tipoConexao *ultimoAeroporto;
        tipoTempo duracao;
        tipoData dataVoo;
        int qtdConexoes;
        int tempoTotal;
        int custo;
        char *compAerea;
        struct voo *prox;
}tipoVoo;

// DEFINIÇÃO DA ESTRUTURA QUE REPRESENTA  AS ROTAS ENCONTRADAS ENTRE DOIS AEROPORTOS DA MALHA AÉREA
typedef struct rotas{
        int qtdRotas;
        tipoVoo *V;
        tipoVoo *vooDireto;
        tipoVoo *vooMaisBarato;
        tipoVoo *vooMaisCaro;
        tipoVoo *vooMaisRapido;
        tipoVoo *vooMaisDemorado;
        tipoVoo *vooMenosConexoes;
}tipoRota;

/*
------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                >> DEFINIÇÃO DAS FUNÇÕES <<
------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/* >> DEFINIÇÃO DA FUNÇÃO QUE EXIBE O MENU DE BOAS VINDAS << */
int menuBoasVindas();

/* >> DEFINIÇÃO DA FUNÇÃO QUE EXIBE O MENU OPÇÕES  PRINCIPAL<< */
int menuPrincipal();

/* >> DEFINIÇÃO DA FUNÇÃO QUE EXIBE O MENU OPÇÕES  DE ROTAS << */
int menuRotas(malhaAerea *M, tipoRota *R, aeroporto origem, aeroporto destino);

/* >> DEFINIÇÃO DA FUNÇÃO QUE EXIBE A LOGO << */
int exibirLogo();

/* >> DEFINIÇÃO DA FUNÇÃO QUE EXIBE AS INFORMAÇÕES DA MALHA AÉREA  << */
int exibirInformacoesMalhaAerea(malhaAerea *M);

/* >> DEFINIÇÃO DA FUNÇÃO QUE LISTA TODOS OS AEROPOSTOS QUE COMPÕEM A MALHA AÉREA  << */
int listarAeroportos(malhaAerea *M);

/* >> DEFINIÇÃO DA FUNÇÃO QUE  BUSCA INFORMÇÕES DE  QUALQUER UM  DOS AEROPORTOS QUE COMPÕEM A MALHA AÉREA  << */
int buscarInfoAeroporto(malhaAerea *M, aeroporto A);

/*>> FUNÇÃO QUE EXIBE A PILHA DE  CONEXÕES  DE UM DETERMINADO VÔO ENTRE DOIS AEROPORTOS  QUE COMPÕEM A MALHA AÉREA <<*/
int exibirPilhaConexoes(tipoConexao *C);

/*>> DEFINIÇÃO DA FUNÇÃO QUE CALCULA O CUSTO E O TEMPO DE CADA VÔO <<*/
int calcularCusto(int custoTotal, int custoAtual);

/*>> DEFINIÇÃO DA FUNÇÃO QUE CALCULA O TEMPO DE CADA VÔO <<*/
int calcularTempo(int tempoTotal, int tempoAtual);

/*>> DEFINIÇÃO DA FUNÇÃO QUE EXIBE A ROTA DIRETA <<*/
int exibirRotaDireta(malhaAerea *M, tipoRota *R);

/*>> DEFINIÇÃO DA FUNÇÃO QUE EXIBE A ROTA MAIS BARATA <<*/
int exibirRotaMaisBarata(malhaAerea *M, tipoRota *R);

/*>> DEFINIÇÃO DA FUNÇÃO QUE EXIBE A ROTA MAIS RÁPIDA <<*/
int exibirRotaMaisRapida(malhaAerea *M, tipoRota *R);

/*>> DEFINIÇÃO DA FUNÇÃO QUE EXIBE A ROTA MAIS CARA <<*/
int exibirRotaMaisCara(malhaAerea *M, tipoRota *R);

/*>> DEFINIÇÃO DA FUNÇÃO QUE EXIBE A ROTA MAIS  DEMORADA <<*/
int exibirRotaMaisDemorada(malhaAerea *M, tipoRota *R);

/*>> DEFINIÇÃO DA FUNÇÃO QUE EXIBE A ROTA COM MENOS CONEXÕES <<*/
int exibirRotaMenosConexoes(malhaAerea *M, tipoRota *R);

/*>> DEFINIÇÃO DA FUNÇÃO QUE EXIBE TODAS AS ROTAS <<*/
int exibirRotas(malhaAerea *M, tipoVoo *V);

/*>> DEFINIÇÃO DA FUNÇÃO QUE ALOCAR AS STRINGS DAS INFORMAÇÕES REFERENTES À MALHA AÉREA <<*/
char *alocarString(int tam);

/* >> DEFINIÇÃO DA FUNÇÃO QUE  EXIBE A LISTA DE ADJACÊNCIA  << */
void exibirListaAdj(malhaAerea *M);

/* >> DEFINIÇÃO DA FUNÇÃO QUE CRIA A MALHA AÉREA << */
malhaAerea *criarMalhaAerea();

/* >> DEFINIÇÃO DA FUNÇÃO QUE PREENCHE A MALHA AÉREA  << */
malhaAerea *preencherMalhaAerea(malhaAerea *M);

/*>> DEFINIÇÃO DA FUNÇÃO QUE INICIALIZA AS ROTAS ENTRE DOIS AEROPORTOS DA MALHA AAÉREA <<*/
tipoRota *inicializarRotas();

/* >> DEFINIÇÃO DA FUNÇÃO QUE  BUSCA AS ROTAS  POSSÍVEIS ENTRE DOIS AEROPORTOS DA MALHA AÉREA  (INTERFACE COM USUÁRIO) << */
tipoRota *buscarRotas(malhaAerea *M, tipoRota *R, aeroporto origem, aeroporto destino);

/* >> DEFINIÇÃO DA FUNÇÃO QUE  BUSCA AS ROTAS ENTRE DOIS AEROPORTOS DA MALHA AÉREA UTILIZANDO BUSCA EM PROFUNDIDADE << */
tipoRota *buscarRotasProfundidade(malhaAerea *M, tipoRota *R, tipoConexao *C, aeroporto origem, aeroporto destino, int *visitado, int flag, int custoTotal, int tempoTotal);

/*>>FUNÇÃO QUE EMPILHA AS CONEXÕES PARA UM DETERMINADO VÔO ENTRE DOIS AEROPORTOS  QUE COMPÕEM A MALHA AÉREA <<*/
tipoConexao *empilharConexoes(tipoConexao *C, aeroporto origem);

/*>> DEFINIÇÃO DA FUNÇÃO QUE ENFILEIRA AS CONEXÕES <<*/
tipoVoo *enfileirarConexoes(tipoVoo *V, tipoConexao *C);

/*>> DEFINIÇÃO DA FUNÇÃO QUE PROCESSA AS ROTAS, DESEMPILHANDO, ENFILEIRANDO E SALVANDO A ROTA ENCONTRADA <<*/
tipoRota *processarRotas(tipoRota *R, tipoConexao *C, int custoTotal, int tempoTotal, aeroporto origem, aeroporto destino, int compAerea);

/*>> DEFINIÇÃO DA FUNÇÃO QUE DESEMPILHA CONEXÃO <<*/
tipoConexao *desempilharConexao(tipoConexao *C);

/*--------------------------------------------->>>> FIM DA DEFINIÇÃO <<<<--------------------------------------------*/

#endif // _AEROPORTO_H
