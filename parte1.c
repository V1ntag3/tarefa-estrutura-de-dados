#include <stdio.h>
int main()
{
	char nome[100];
	float nota[3];
	float media, soma = 0;
	int i = 0;
	printf("Digite o nome do aluno:\n");
	scanf("%s", nome);
	for(i = 0; i < 3; i++)
	{
		printf("Digite a nota %d:\n", i + 1);
		scanf("%f", &nota[i]);
		soma = soma + nota[i];
	}
	media = soma / 3;
	if(media < 7)
	{
		printf("Aluno reprovado\n");
	}
	else
	{
		printf("Aluno aprovado\n");
	}

	return 0;
}
