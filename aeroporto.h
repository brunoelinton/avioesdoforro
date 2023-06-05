#ifndef _AEROPORTO_H
#define _AEROPORTO_H

// INCLUS�O DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DEFINI��O DO TIPO DE DADO QUE REPRESENTA UM V�RTICE DO GRAFO, OU SEJA, UM AEROPORTO DA MALHA A�REA
#define aeroporto int
// DEFINI��O DA CONSTANTE RESPONS�VEL PELA TABULA��O DE ALGUMAS INFORMA��ES
#define TAB ' '

// DEFINI��O DA ESTRUTURA QUE REPRESENTA A DATA
typedef struct data{
        int dia;
        int mes;
        int ano;
}tipoData;

// DEFINI��O DA ESTRUTURA QUE REPRESENTA O TEMPO DE V�O EM HORAS E MINUTOS (HH:MM)
typedef struct tempo{
        int dd;
        int hh;
        int mm;
}tipoTempo;

// DEFINI��O DA ESTRUTURA QUE REPRESENTA UM AEROPORTO
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

// DEFINI��O DA ESTRUTURA QUE REPRESENTA O GRAFO, OU SEJA, A MALHA A�REA PARA UMA IMPLEMENTA��O UTILLIZANDO LISTAS DE ADJAC�NCIAS
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

// DEFINI��O DA ESTRUTURA QUE REPRESENTA AS CONEX�ES ENTRE DOIS AEROPORTOS DA MALHA A�REA
typedef struct conexao{
        aeroporto partida;
        struct conexao *ponte;
}tipoConexao;

// DEFINI��O DA ESTRUTURA QUE REPRESENTA  OS V�OS POSS�VEIS ENTRE DOIS AEROPORTOS DA MALHA A�REA
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

// DEFINI��O DA ESTRUTURA QUE REPRESENTA  AS ROTAS ENCONTRADAS ENTRE DOIS AEROPORTOS DA MALHA A�REA
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
                                                                >> DEFINI��O DAS FUN��ES <<
------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/* >> DEFINI��O DA FUN��O QUE EXIBE O MENU DE BOAS VINDAS << */
int menuBoasVindas();

/* >> DEFINI��O DA FUN��O QUE EXIBE O MENU OP��ES  PRINCIPAL<< */
int menuPrincipal();

/* >> DEFINI��O DA FUN��O QUE EXIBE O MENU OP��ES  DE ROTAS << */
int menuRotas(malhaAerea *M, tipoRota *R, aeroporto origem, aeroporto destino);

/* >> DEFINI��O DA FUN��O QUE EXIBE A LOGO << */
int exibirLogo();

/* >> DEFINI��O DA FUN��O QUE EXIBE AS INFORMA��ES DA MALHA A�REA  << */
int exibirInformacoesMalhaAerea(malhaAerea *M);

/* >> DEFINI��O DA FUN��O QUE LISTA TODOS OS AEROPOSTOS QUE COMP�EM A MALHA A�REA  << */
int listarAeroportos(malhaAerea *M);

/* >> DEFINI��O DA FUN��O QUE  BUSCA INFORM��ES DE  QUALQUER UM  DOS AEROPORTOS QUE COMP�EM A MALHA A�REA  << */
int buscarInfoAeroporto(malhaAerea *M, aeroporto A);

/*>> FUN��O QUE EXIBE A PILHA DE  CONEX�ES  DE UM DETERMINADO V�O ENTRE DOIS AEROPORTOS  QUE COMP�EM A MALHA A�REA <<*/
int exibirPilhaConexoes(tipoConexao *C);

/*>> DEFINI��O DA FUN��O QUE CALCULA O CUSTO E O TEMPO DE CADA V�O <<*/
int calcularCusto(int custoTotal, int custoAtual);

/*>> DEFINI��O DA FUN��O QUE CALCULA O TEMPO DE CADA V�O <<*/
int calcularTempo(int tempoTotal, int tempoAtual);

/*>> DEFINI��O DA FUN��O QUE EXIBE A ROTA DIRETA <<*/
int exibirRotaDireta(malhaAerea *M, tipoRota *R);

/*>> DEFINI��O DA FUN��O QUE EXIBE A ROTA MAIS BARATA <<*/
int exibirRotaMaisBarata(malhaAerea *M, tipoRota *R);

/*>> DEFINI��O DA FUN��O QUE EXIBE A ROTA MAIS R�PIDA <<*/
int exibirRotaMaisRapida(malhaAerea *M, tipoRota *R);

/*>> DEFINI��O DA FUN��O QUE EXIBE A ROTA MAIS CARA <<*/
int exibirRotaMaisCara(malhaAerea *M, tipoRota *R);

/*>> DEFINI��O DA FUN��O QUE EXIBE A ROTA MAIS  DEMORADA <<*/
int exibirRotaMaisDemorada(malhaAerea *M, tipoRota *R);

/*>> DEFINI��O DA FUN��O QUE EXIBE A ROTA COM MENOS CONEX�ES <<*/
int exibirRotaMenosConexoes(malhaAerea *M, tipoRota *R);

/*>> DEFINI��O DA FUN��O QUE EXIBE TODAS AS ROTAS <<*/
int exibirRotas(malhaAerea *M, tipoVoo *V);

/*>> DEFINI��O DA FUN��O QUE ALOCAR AS STRINGS DAS INFORMA��ES REFERENTES � MALHA A�REA <<*/
char *alocarString(int tam);

/* >> DEFINI��O DA FUN��O QUE  EXIBE A LISTA DE ADJAC�NCIA  << */
void exibirListaAdj(malhaAerea *M);

/* >> DEFINI��O DA FUN��O QUE CRIA A MALHA A�REA << */
malhaAerea *criarMalhaAerea();

/* >> DEFINI��O DA FUN��O QUE PREENCHE A MALHA A�REA  << */
malhaAerea *preencherMalhaAerea(malhaAerea *M);

/*>> DEFINI��O DA FUN��O QUE INICIALIZA AS ROTAS ENTRE DOIS AEROPORTOS DA MALHA AA�REA <<*/
tipoRota *inicializarRotas();

/* >> DEFINI��O DA FUN��O QUE  BUSCA AS ROTAS  POSS�VEIS ENTRE DOIS AEROPORTOS DA MALHA A�REA  (INTERFACE COM USU�RIO) << */
tipoRota *buscarRotas(malhaAerea *M, tipoRota *R, aeroporto origem, aeroporto destino);

/* >> DEFINI��O DA FUN��O QUE  BUSCA AS ROTAS ENTRE DOIS AEROPORTOS DA MALHA A�REA UTILIZANDO BUSCA EM PROFUNDIDADE << */
tipoRota *buscarRotasProfundidade(malhaAerea *M, tipoRota *R, tipoConexao *C, aeroporto origem, aeroporto destino, int *visitado, int flag, int custoTotal, int tempoTotal);

/*>>FUN��O QUE EMPILHA AS CONEX�ES PARA UM DETERMINADO V�O ENTRE DOIS AEROPORTOS  QUE COMP�EM A MALHA A�REA <<*/
tipoConexao *empilharConexoes(tipoConexao *C, aeroporto origem);

/*>> DEFINI��O DA FUN��O QUE ENFILEIRA AS CONEX�ES <<*/
tipoVoo *enfileirarConexoes(tipoVoo *V, tipoConexao *C);

/*>> DEFINI��O DA FUN��O QUE PROCESSA AS ROTAS, DESEMPILHANDO, ENFILEIRANDO E SALVANDO A ROTA ENCONTRADA <<*/
tipoRota *processarRotas(tipoRota *R, tipoConexao *C, int custoTotal, int tempoTotal, aeroporto origem, aeroporto destino, int compAerea);

/*>> DEFINI��O DA FUN��O QUE DESEMPILHA CONEX�O <<*/
tipoConexao *desempilharConexao(tipoConexao *C);

/*--------------------------------------------->>>> FIM DA DEFINI��O <<<<--------------------------------------------*/

#endif // _AEROPORTO_H
