
/*******1|********2|********3|********4|********5|********6|********7|********8|
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::
Arquivo: exer_10.C
Autor: Emiliano Costa Junior
Data: 23 de Agosto 2021 
Descrição: Entrar via teclado, com dois valores distintos. Exibir o menor deles.
------------------------------------------------------------------------------*/
#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h>

int main(int argc, char const *argv[])
{
//Inicia
  setlocale(LC_ALL, "Portuguese");
  printf("Exercicio 10:\t");

//Entrada de dados 
  printf("Exibe o menor\n");
  printf("Digite o primeiro valor: ");
  int d_valorA;
  scanf("%d",&d_valorA);
  printf("Digite o segundo valor: ");
  int d_valorB;
  scanf("%d",&d_valorB);

//decisão
	if(d_valorA<=d_valorB)
		printf("Menor valor é %d", d_valorA);
	else
		printf("Menor valor é %d", d_valorB);

//Termina
  return (EXIT_SUCCESS);
}/*FIM MAIN*/
/*Fim de Arquivo-------------------------------------------------------------*/
