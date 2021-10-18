/*******************************************************************************
Arquivo : main.c
Data : 13 de Outubro de 2021, 12:02
Autor: Emiliano Costa Junior
--------------------------------------------------------------------------------
CURSO: PROGRAMAÇAO APLICADA A PROGRAMAÇÂO
Bibliografia: Notas de aula
Exercicio: 01
--------------------------------------------------------------------------------
Descrição: Programa didático, executado em aula.
--------------------------------------------------------------------------------
Objetivos didáticos: 
--------------------------------------------------------------------------------
CABEÇALHOS - HEADERS ---------------------------------------------------------*/
#include <stdio.h>  //biblioteca-padrão de entrada/saída, printf(), scanf() 
#include <stdlib.h> //Para uso da função System() 
#include <string.h> //Manipulação de Strings
#include <locale.h> //Necessário para usar setlocale 
#include <math.h>   //biblioteca-padrão de funções matemáticas
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/******************************************************************************
Variaveis Globais-------------------------------------------------------------*/

/*******************************************************************************
PROTOTICOS de Funções --------------------------------------------------------*/
void assinatura_Emiliano();

/*******************************************************************************
PRINCIPAL - MAIN -------------------------------------------------------------*/
int main(int argc, char** argv) {
    /*iniciando o sistema*/
    setlocale(LC_ALL, "Portuguese");

    /*Iniciação de váriáveis*/
    int d_num_A;
    int d_num_B;
    int d_area;

    /*Rotina principal*/
    printf("Exercício numero 1\n\n");
    printf("Calcula a área de um retangulo\n");
    printf("Digite a base do retangulo: ");
    scanf("%d",&d_num_A);
    printf("Digite a altura do retangulo: ");
    scanf("%d",&d_num_B);
    d_area = d_num_A * d_num_B;
    printf("A área do retangulo é igual %d\n",d_area );
 
    assinatura_Emiliano();

    /*Finalizando o sistema*/
    system("pause");
    return (EXIT_SUCCESS);
}/*Fim método main*/

/***************************************************************************
FUNÇÔES-------------------------------------------------------------------*/
void assinatura_Emiliano() {
    printf("\t\t\t--------------\n");
    printf("\t\t\t|By Emiliano |\n");
    printf("\t\t\t--------------\n");
    printf("\n\n\n\n");
    
}/*Imprime Assinatura Emiliano*/