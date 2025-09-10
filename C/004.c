#include<stdio.h>
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
	
	printf("Por favor, Digite seu nome!\n");
		scanf("%s",&namigo1);
	printf("%s, Digite seu Peso\n",namigo1);
		scanf("%f",&peso1);
	printf("%s, Digite sua altura\n",namigo1);
		scanf("%f",&altura1);	
		
		imc1 = peso1 / (altura1 * altura1);
	
	printf("%s, Seu IMC é %.2f",namigo1,imc1);		
}
