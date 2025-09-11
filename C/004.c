#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	printf("Atividade para Teste\n");
	
		system("pause");
	
	printf("João e seus amigos na academia\n");
	
		system("pause");
		
	char njoao[]= "João";
	char namigo1[10],namigo2[10],namigo3[10];
	float pesoj,peso1,peso2,peso3;
	float alturaj,altura1,altura2,altura3;
	float imcj,imc1,imc2,imc3;
	
	printf("%s pediu pra cadastrar vocês pra calcular seus IMCs\n",njoao);
	
	getchar();
	printf("Por favor, Digite seu nome!\n");
		fgets(namigo1, sizeof(namigo1), stdin);
		namigo1[strlen(namigo1) - 1] = '\0';
	printf("%s, Digite seu Peso\n",namigo1);
		scanf("%f",&peso1);
	printf("%s, Digite sua altura\n",namigo1);
		scanf("%f",&altura1);	
		
		imc1 = peso1 / (altura1 * altura1);
		
	printf("%s, Seu IMC é %.2f\n",namigo1,imc1);
		
		system("pause");
		system("cls");
		
	getchar();	
	printf("Por favor, Digite seu nome!\n");
		fgets(namigo2, sizeof(namigo2), stdin);
		namigo2[strlen(namigo2) - 1] = '\0';
	printf("%s, Digite seu Peso\n",namigo2);
		scanf("%f",&peso2);
	printf("%s, Digite sua altura\n",namigo2);
		scanf("%f",&altura2);
			
		imc2 = peso2 / (altura2 * altura2);
	
	printf("%s, Seu IMC é %.2f\n",namigo2,imc2);	
	
		system("pause");
		system("cls");
	
	getchar();
	printf("Por favor, Digite seu nome!\n");
		fgets(namigo3, sizeof(namigo3), stdin);
		namigo3[strlen(namigo3) - 1] = '\0';
	printf("%s, Digite seu Peso\n",namigo3);
		scanf("%f",&peso3);
	printf("%s, Digite sua altura\n",namigo3);
		scanf("%f",&altura3);
			
		imc3 = peso3 / (altura3 * altura3);
	
	printf("%s, Seu IMC é %.2f\n",namigo3,imc3);	
	
		system("pause");
		system("cls");
		
	printf("%s, Digite seu Peso\n",njoao);
		scanf("%f",&pesoj);
	printf("%s, Digite sua altura\n",njoao);
		scanf("%f",&alturaj);
			
		imcj = pesoj / (alturaj * alturaj);
	
	printf("%s, Seu IMC é %.2f\n",njoao,imcj);	
	
		system("pause");	
		system("cls");
		
		printf("O IMC do %s é: %.2f\n", namigo1,imc1);
		printf("O IMC do %s é: %.2f\n", namigo2,imc2);
		printf("O IMC do %s é: %.2f\n", namigo3,imc3);
		printf("O IMC do %s é: %.2f\n", njoao,imcj);
		
		
		system("cls");
	
		system("pause");
		
	
	printf("Fim do Programa!\n");	
}
