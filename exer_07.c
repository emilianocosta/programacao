
/*******1|********2|********3|********4|********5|********6|********7|********8|
'########:'##::::'##:'####:'##:::::::'####::::'###::::'##::: ##::'#######::
 ##.....:: ###::'###:. ##:: ##:::::::. ##::::'## ##::: ###:: ##:'##.... ##:
 ##::::::: ####'####:: ##:: ##:::::::: ##:::'##:. ##:: ####: ##: ##:::: ##:
 ######::: ## ### ##:: ##:: ##:::::::: ##::'##:::. ##: ## ## ##: ##:::: ##:
 ##...:::: ##. #: ##:: ##:: ##:::::::: ##:: #########: ##. ####: ##:::: ##:
 ##::::::: ##:.:: ##:: ##:: ##:::::::: ##:: ##.... ##: ##:. ###: ##:::: ##:
 ########: ##:::: ##:'####: ########:'####: ##:::: ##: ##::. ##:. #######::
........::..:::::..::....::........::....::..:::::..::..::::..:::.......:::
Arquivo: exer_07.C
Autor: Emiliano Costa Junior
Data: 16 de Agosto 2021 
Descrição: Entrar via teclado com o valor de cinco produtos. 
Após as entradas, digitar um valor referente ao pagamento da somatória destes 
valores. 
Calcular e exibir o troco que deverá ser devolvido
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
//Variáveis
  float r_produto1;
  float r_produto2;
  float r_produto3;
  float r_produto4;
  float r_produto5;
  float r_pagamento;
  
//Algorimo
  printf("Exercicio 7:\t");
  printf("Calcula o troco\n");
  printf("Digite a valor do produto 1: ");
  scanf("%f",&r_produto1);
  printf("Digite a valor do produto 2: ");
  scanf("%f",&r_produto2);
  printf("Digite a valor do produto 3: ");
  scanf("%f",&r_produto3);
  printf("Digite a valor do produto 4: ");
  scanf("%f",&r_produto4);
  printf("Digite a valor do produto 5: ");
  scanf("%f",&r_produto5);
  float r_total = r_produto1 + r_produto2 + r_produto3 + r_produto4 + r_produto5;
  printf("Digite a valor do pagamento: ");
  scanf("%f",&r_pagamento);
  float r_troco = r_total - r_pagamento;
  printf("Seu troco é de %.2f\n", r_troco);
//Termina
  return (EXIT_SUCCESS);
}/*FIM MAIN*/

/*Fim de Arquivo-------------------------------------------------------------*/
