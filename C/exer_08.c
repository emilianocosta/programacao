
/*******1|********2|********3|********4|********5|********6|********7|********8|
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::
Arquivo: exer_08.C
Autor: Emiliano Costa Junior
Data: 16 de Agosto 2021 
Descri??o: Entrar com peso e altura de uma pessoa e calcular o IMC. 
A f?rmula ? IMC = peso / altura * altura
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
//Vari?veis
  float r_peso;
  float r_altura;
  
//Algorimo
  printf("Exercicio 8:\t");
  printf("Calcula o IMC\n");
  printf("Digite o peso: ");
  scanf("%f",&r_peso);
  printf("Digite a altura: ");
  scanf("%f",&r_altura);
  printf("Seu IMC ? : %.2f\n", r_peso/(r_altura * r_altura));
//Termina
  return (EXIT_SUCCESS);
}/*FIM MAIN*/

/*Fim de Arquivo-------------------------------------------------------------*/
