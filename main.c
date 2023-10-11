//atividade em C, feita no dia 20/09/2023, questão 36.
#include <stdio.h>
int main()
{
   // Programa para calcular o valor de gasto de energia 
   int numConta = 0;
   float consumoAnterior = 0;
   float consumoAtual = 0;
   float diferenca = 0;
   float totalConta = 0;
   float taxa = 0.40725;
   
   printf("Digite o número da sua conta: ");
   scanf("%i", &numConta);
   
   printf("\nDigite a leitura que obteve no mês anterior: ");
   scanf("%f", &consumoAnterior);
   
   printf("\nDigite a leitura que obteve no mês atual: ");
   scanf("%f", &consumoAtual);
   
   diferenca = (consumoAtual - consumoAnterior);
   
   totalConta = (diferenca * taxa);
   
   printf("\n\n--> Usuário: %i\n--> o valor o qual você terá que pagar é de R$ %.2f\n--> O consumo de energia foi de %.2f KW/h\n ", numConta, totalConta, diferenca );
   
   
   return 0;
}
