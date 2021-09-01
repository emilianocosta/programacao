/******************************************************************************
Arquivo: exer_03.C
Autor: Emiliano Costa Junior
Data: 09 de Agosto 2021 
-------------------------------------------------------------------------------
Descrição: 
-------------------------------------------------------------------------------
         ##     ## ########    ###    ########  ######## ########
         ##     ## ##         ## ##   ##     ## ##       ##     ##
         ##     ## ##        ##   ##  ##     ## ##       ##     ##
         ######### ######   ##     ## ##     ## ######   ########
         ##     ## ##       ######### ##     ## ##       ##   ##
         ##     ## ##       ##     ## ##     ## ##       ##    ##
         ##     ## ######## ##     ## ########  ######## ##     ##
------------------------------------------------------------------------------*/
#include <stdio.h>  //Funções de Entrada e Saida
#include <stdlib.h> //system().
/******************************************************************************
          ##     ##    ###    #### ##    ##
          ###   ###   ## ##    ##  ###   ##
          #### ####  ##   ##   ##  ####  ##
          ## ### ## ##     ##  ##  ## ## ##
          ##     ## #########  ##  ##  ####
          ##     ## ##     ##  ##  ##   ###
          ##     ## ##     ## #### ##    ##
PRINCIPAL - MAIN-------------------------------------------------------------*/
int main(int argc, char const *argv[])
{
  //Varíaveis
    int d_num_A;
    int d_num_B;
    int d_area;
  //Algorimo
    printf("Exercicio 3:\t");
    printf("Calcula a área de um triangulo\n");
    printf("Digite a base do triangulo: ");
    scanf("%d",&d_num_A);
    printf("Digite a altura do triangulo: ");
    scanf("%d",&d_num_B);
    d_area = d_num_A * d_num_B / 2 ;
    printf("A área do retangulo é igual %d\n",d_area );
  //Termina
    return (EXIT_SUCCESS);
}/*FIM MAIN*/

/*Fim de Arquivo-------------------------------------------------------------
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::*/