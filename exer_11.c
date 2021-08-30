/*******1|********2|********3|********4|********5|********6|********7|********8|
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::
Arquivo: exer_11.C
Autor: Emiliano Costa Junior
Data: 23 de Agosto 2021 
Descrição: Entrar com dois valores quaisquer. Exibir o maior deles, se existir, 
caso contrário, enviar mensagem avisando que os números são idênticos.
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]){
//Inicia
  setlocale(LC_ALL, "Portuguese");
  printf("Exercicio 11:\t");

//Entrada de dados 
  printf("Exibe o menor\n");
  printf("Digite o primeiro valor: ");
  int d_valorA;
  scanf("%d",&d_valorA);
  printf("Digite o segundo valor: ");
  int d_valorB;
  scanf("%d",&d_valorB);

//decisão
	if(d_valorA==d_valorB)
	{
		goto iguais; //Testando o comando goto
	}
	else
	{
		if(d_valorA>d_valorB)
			goto maiorA;
		else
			goto maiorB;
	}

//Exibe resultado final
iguais:
	printf("Valores são iguais %d", d_valorA);
	goto fim;
maiorA:
	printf("Maior valor é %d", d_valorA);
	goto fim;
maiorB:
	printf("Maior valor é %d", d_valorB);
fim:
//Termina
  return (EXIT_SUCCESS);
}/*FIM MAIN*/
/*Fim de Arquivo-------------------------------------------------------------*/
