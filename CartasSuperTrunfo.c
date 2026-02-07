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
	
	char estado2 [30];
	char codcarta2 [3];
	char nomecidade2 [30];
	int populacao2;
	float area2;
	float pib2;
	int numpontoturistico2;
	
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
	//impressão CARTA 2
	printf("\n\nCARTA 2");
	printf("\nEstado: %s", estado2);
	printf("\nCódigo: %s", codcarta2);
	printf("\nNome da Cidade: %s", nomecidade2);
	printf("\nPopulação: %d", populacao2);
	printf("\nÁrea: %.2f km²", area2);
	printf("\nPIB: %.2f", pib2);
	printf("\nNúmero de Pontos Turísticos: %d\n\n\\n", numpontoturistico2);
}

