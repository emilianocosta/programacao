
/*******1|********2|********3|********4|********5|********6|********7|********8|
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::
Arquivo: exer_09.C
Autor: Emiliano Costa Junior
Data: 23 de Agosto 2021 
Descrição: Entrar via teclado, com dois valores distintos. Exibir o maior deles.
------------------------------------------------------------------------------*/
#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h>

int main(int argc, char const *argv[])
{
//Inicia
  setlocale(LC_ALL, "Portuguese");
  printf("Exercicio 9:\t");

//Entrada de dados 
  printf("Exibe o maior\n");
  printf("Digite o primeiro valor: ");
  int d_valorA;
  scanf("%d",&d_valorA);
  printf("Digite o segundo valor: ");
  int d_valorB;
  scanf("%d",&d_valorB);

//decisão
	if(d_valorA>=d_valorB)
		printf("Maior valor é %d", d_valorA);
	else
		printf("Maior valor é %d", d_valorB);

//Termina
  return (EXIT_SUCCESS);
}/*FIM MAIN*/
/*Fim de Arquivo-------------------------------------------------------------*/
