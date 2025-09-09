#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

printf("Hello world\n");
	printf("Um dos primeiros programas em c!\n\n");


//This is my first programms

	int idade = 32;
	float nota = 5;
	int quantidade = 8;
	float notaruim = 3.4;
	float chance = 6.9;
	double pi = 4.178239098762511;
	int p;
	
	printf("minha idade atual é %d.\n", idade);
		printf("minha nota nessa materia é %d!.\n",nota);
			printf("Eu tenho uma boa quantidade de bananas!, acho que umas %d delas. \n",quantidade);
				printf("Eu tirei uma nota ruim nessa prova!, algo em torno de %.1f. \n",notaruim);
					printf("Falei com uma garota, ela me falou q tenho %.1f de chance com ela!.\n",chance);
						printf("O verdadeiro valor do numero pi é! %.15lf. \n", pi);
						
	getchar();


	printf("A nota agora do aluno é?\n");
		scanf("%d",&nota);
		
		if (nota < 10){
			printf("Reprovado\n");
		}else{ 
			printf("Aprovado\n");
		}
		
	getchar();
	
		printf("OK, agora vamos pegar mais pesado!\n");
		
		printf("Se o valor da chance ser menor que uma quantidade eu vou me lascar!\n");
			
			printf("Então na sua visão qual a minha chance com ela? \n");
			scanf("%f",&chance);
			
			if(chance >= 5) {
				printf("Porra, então tenho uma chance\n");	
			}else{
				printf("Me lasquei\n");
			}
					
	getchar();			
			
		printf("Digite um numero especifico positivo ou negativo, QUALQUER UM k!");
			scanf("%d",&p);
			
			if(p >= 1){
				printf("Esse numero é POSITIVO!\n");
			}else if (p == 0){
				printf("ZERO NÃO PODE CARALHO!\n"); 
	
			}else{
				printf("Esse numero é NEGATIVO!\n");
			}				
return 0;

}
