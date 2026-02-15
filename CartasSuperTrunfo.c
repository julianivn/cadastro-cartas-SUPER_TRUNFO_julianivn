/*Carta 1:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
*/

/*Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.
Para cada carta, o usuário deverá fornecer as seguintes informações:


Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int


MESTRE:
-Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos 
(população, área, PIB, número de pontos turísticos, 
PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
 
-Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), 
incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; 
para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
-Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), 
exibindo o resultado da comparação 
(1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char estado [30];
	char codcarta [3];
	char nomecidade [30];
	int populacao;
	float area;
	float pib;
	int numpontoturistico;
	float densipop;
	float pibpercap;
	float superpoder;
	float inversodensipop;
	
	char estado2 [30];
	char codcarta2 [3];
	char nomecidade2 [30];
	int populacao2;
	float area2;
	float pib2;
	int numpontoturistico2;
	float densipop2;
	float pibpercap2;
	float superpoder2;
	float inversodensipop2;
	
	int resultado_populacao;
	int resultado_area;
	int resultado_pib;
	int resultado_numpontoturistico;
	int resultado_densipop;
	int resultado_pibpercap;
	int resultado_superpoder;
	
	printf("Bem vindo ao SUPER TRUNFO\n");
	printf("************************************************************************\n");	
	
	//entrada e armazenagem de dados CARTA 1 ***********************************************************************************************************************
	printf("\nINFORME OS DADOS DA [CARTA 1]");
	printf("\nEstado (Informe uma letra de 'A' a 'H'): ");
	scanf("%s", estado);
	printf("COD da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
	scanf("%s", codcarta);
	printf("Cidade: ");
	scanf("%s", nomecidade);
	printf("População: ");
	scanf("%d", &populacao);
	printf("Área: ");
	scanf("%f", &area);
	printf("PIB: ");
	scanf("%f", &pib);
	printf("Número de pontos turísticos: ");
	scanf("%d", &numpontoturistico);
	
	densipop=populacao/area; //calculo densidade populacional CARTA 1
	pibpercap=pib/populacao; //pib per capita
	
	inversodensipop= 1.0 / densipop; //calcular o inverso na densidade populacionarl CARTA 1
	superpoder= (float) populacao + area + pib + numpontoturistico + pibpercap + inversodensipop; //calcular SUPER PODER - CARTA 1 !!!!! está convertendo tudo em FLOAT
	

	//entrada e armazenagem de dados CARTA 2 **************************************************************************************************************************
	printf("\n\nINFORME OS DADOS DA [CARTA 2]");
	printf("\nEstado (Informe uma letra de 'A' a 'H'): ");
	scanf("%s", estado2);
	printf("COD da carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
	scanf("%s", codcarta2);
	printf("Cidade: ");
	scanf("%s", nomecidade2);
	printf("População: ");
	scanf("%d", &populacao2);
	printf("Área: ");
	scanf("%f", &area2);
	printf("PIB: ");
	scanf("%f", &pib2);
	printf("Número de pontos turísticos: ");
	scanf("%d", &numpontoturistico2);
	
	densipop2=populacao2/area2; //calculo densidade populacional CARTA 2
	pibpercap2=pib2/populacao2; //pib per capita
	
	inversodensipop2= 1.0 / densipop2; //calcular o inverso na densidade populacionarl CARTA 2
	superpoder2= (float) populacao2 + area2 + pib2 + numpontoturistico2 + pibpercap2 + inversodensipop2; //calcular SUPER PODER - CARTA 2 !!!!! está convertendo tudo em FLOAT
	
	printf("************************************************************************\n");	//Impressão das CARTAS
	//impressão CARTA 1
	printf("\n\nCARTA 1");
	printf("\nEstado: %s", estado);
	printf("\nCódigo: %s", codcarta);
	printf("\nNome da Cidade: %s", nomecidade);
	printf("\nPopulação: %d", populacao);
	printf("\nÁrea: %.2f km²", area);
	printf("\nPIB: %.2f", pib);
	printf("\nNúmero de Pontos Turísticos: %d", numpontoturistico);
	printf("\nDensidade Populacional: %.2f km²", densipop);
	printf("\nPIB per Capita: %.2f", pibpercap);
	printf("\nSuper Poder: %.2f", superpoder); //impressão SUPER PODER CARTA 1

	//impressão CARTA 2
	printf("\n\nCARTA 2");
	printf("\nEstado: %s", estado2);
	printf("\nCódigo: %s", codcarta2);
	printf("\nNome da Cidade: %s", nomecidade2);
	printf("\nPopulação: %d", populacao2);
	printf("\nÁrea: %.2f km²", area2);
	printf("\nPIB: %.2f", pib2);
	printf("\nNúmero de Pontos Turísticos: %d", numpontoturistico2);
	printf("\nDensidade Populacional: %.2f km²", densipop2);
	printf("\nPIB per Capita: %.2f", pibpercap2);
	printf("\nSuper Poder: %.2f", superpoder2); //impressão SUPER PODER CARTA 2
	
	//COMPARAÇÕES CARTA 1 e CARTA 2 para obter VERDADEIRO (1) ou FALSO (0)
	resultado_populacao=populacao>populacao2;
	resultado_area=area>area2;
	resultado_pib=pib>pib2;
	resultado_numpontoturistico=numpontoturistico>numpontoturistico2;
	resultado_densipop=densipop>densipop2;
	resultado_pibpercap=pibpercap>pibpercap2;
	resultado_superpoder=superpoder>superpoder2;
	
	printf("\n************************************************************************\n\n\n");	//Impressão da COMPARAÇÃO --IMPRIME O TEXTO DO VENCEDOR
	printf("COMPARAÇÂO DE CARTAS:\n");
	
	printf("\nPopulação:");
	if (resultado_populacao == 1) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
    
    printf("\nÁrea:");
	if (resultado_area == 1) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
    
    printf("\nPIB:");
	if (resultado_pib == 1) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
    
    printf("\nPontos Turísticos:");
	if (resultado_numpontoturistico == 1) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
    
    printf("\nDensidade Populacional:");
	if (resultado_densipop == 1) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
    
    printf("\nPIB per Capita:");
	if (resultado_pibpercap == 1) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }
    
    printf("\nSuper Poder:");
	if (resultado_superpoder == 1) {
        printf("Carta 1 venceu (1)");
    } else {
        printf("Carta 2 venceu (0)");
    }

printf("\n\n\n");//espaço para o FIM
	
	
	
}

