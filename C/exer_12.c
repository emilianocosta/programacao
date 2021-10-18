/*******1|********2|********3|********4|********5|********6|********7|********8|
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::
Arquivo: exer_12.C
Autor: Emiliano Costa Junior
Data: 23 de Agosto 2021
Descrição: Calcular e exibir a área de um retângulo,
a partir dos valores da base e altura que serão digitados.
Se a área for maior que 100,
	exibir a mensagem “Terreno grande"
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]){
//Inicia
  setlocale(LC_ALL, "Portuguese");
  printf("Exercicio 12:\t");

//Entrada de dados
  printf("Calcula e exibi a área de um retângulo\n");
  printf("Digite a base: ");
  int d_base;
  scanf("%d",&d_base);
  printf("Digite a altura: ");
  int d_altura;
  scanf("%d",&d_altura);
//Calcula a área
	int d_area = d_altura * d_base;
//decisão
	if(d_area > 100)
		goto mensagem; //Testando o comando goto
	else
		goto fim;

//Exibe resultado final
mensagem:
	printf("Terreno Grande");
fim:
//Termina
  return (EXIT_SUCCESS);
}/*FIM MAIN*/
/*Fim de Arquivo-------------------------------------------------------------*/
