#include <stdio.h>
struct classe
{
	char nome[100];
	float nota[3];
	float media;
};
int main()
{
	int y;
	struct classe aluno[48];
	for(y = 0; y < 48; y++)
	{

		float soma = 0;
		int i = 0;
		printf("Digite o nome do aluno %d:\n", y + 1);
		scanf("%s", aluno[y].nome);
		for(i = 0; i < 3; i++)
		{
			printf("Digite a nota %d:\n", i + 1);
			scanf("%f", &aluno[y].nota[i]);
			soma = soma + aluno[y].nota[i];
		}
		aluno[y].media = soma / 3;
		if(aluno[y].media < 7)
		{
			printf("Aluno reprovado\n");
		}
		else
		{
			printf("Aluno aprovado\n");
		}


	}
	return 0;
}
