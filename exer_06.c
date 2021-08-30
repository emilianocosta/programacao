
/*******1|********2|********3|********4|********5|********6|********7|********8|
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::
Arquivo: exer_06.C
Autor: Emiliano Costa Junior
Data: 16 de Agosto 2021 
Descrição: 
Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de 
dólares. Calcular e exibir o valor correspondente em Reais (R$).
-------------------------------------------------------------------------------
##     ## ########    ###    ########  ######## ########
##     ## ##         ## ##   ##     ## ##       ##     ##
##     ## ##        ##   ##  ##     ## ##       ##     ##
######### ######   ##     ## ##     ## ######   ########
##     ## ##       ######### ##     ## ##       ##   ##
##     ## ##       ##     ## ##     ## ##       ##    ##
##     ## ######## ##     ## ########  ######## ##     ##
------------------------------------------------------------------------------*/
#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h>
/*******1|********2|********3|********4|********5|********6|********7|********8|
          ##     ##    ###    #### ##    ##
          ###   ###   ## ##    ##  ###   ##
          #### ####  ##   ##   ##  ####  ##
          ## ### ## ##     ##  ##  ## ## ##
          ##     ## #########  ##  ##  ####
          ##     ## ##     ##  ##  ##   ###
          ##     ## ##     ## #### ##    ##
------------------------------------------------------------------------------*/
int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Portuguese");
//Vari�veis
  float r_dolar;
  float r_dindim;
//Algorimo
  printf("Exercicio 6:\t");
  printf("Converte uma certa quantidade de dolares no valor correspondente em Reais\n");
  printf("Digite a cota��o do d�lar: ");
  scanf("%f",&r_dolar);
  printf("Digite quantos dolares voc� quer que sejam convertidos: ");
  scanf("%f",&r_dindim);
  float r_real = r_dindim * r_dolar;
  printf("O valor de %.2f dolares, corresponde a %.2f Reais.\n",r_dindim,r_real);
//Termina
  return (EXIT_SUCCESS);
}/*FIM MAIN*/

/*Fim de Arquivo-------------------------------------------------------------*/
