/*Carta 1:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.
Para cada carta, o usuário deverá fornecer as seguintes informações:


Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

/*Calcular a Densidade Populacional: Divida a população da cidade pela sua área. 
O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. 
Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. 
Armazene esse valor em uma variável do tipo float.
 
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), 
seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. 
Formate os valores de ponto flutuante com duas casas decimais.

Exemplo de Saída:

Carta 1:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais*/

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

	
	char estado2 [30];
	char codcarta2 [3];
	char nomecidade2 [30];
	int populacao2;
	float area2;
	float pib2;
	int numpontoturistico2;
	float densipop2;
	float pibpercap2;
	
	printf("Bem vindo ao SUPER TRUNFO\n");
	printf("************************************************************************\n");	
	
	//entrada e armazenagem de dados CARTA 1
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

	//entrada e armazenagem de dados CARTA 2
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
	
	printf("************************************************************************\n");	
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
	printf("\nPIB per Capita: %.2f\n\n\n", pibpercap2);
	
	
}

