#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salario, inss, ir, sal_liquido;
	
	printf("Digite o seu salario bruto: R$");
	scanf("%f", &salario);
	
	if(salario <= 1212 )
	{
		inss =salario * 0.075;
	}
	else
	if(salario >= 1212.01 && salario <= 2427.35)
	{
		inss = salario * 0.09;
	}
	
	else
	if(salario >= 2427.36 && salario <= 3641.03)
	{
		inss = salario * 0.12;
	}
	
	else
	if(salario >= 3641.04 && salario <= 7087.22)
	{
		inss = salario * 0.14;
	}
	
	
		if(salario <= 1903.98 )
	{
		ir =salario * 1;
	}
	else
	if(salario >= 1903.99 && salario <= 2826.65)
	{
		ir = salario * 0.075;
	}
	
	else
	if(salario >= 2826.66 && salario <= 3751.05)
	{
		ir = salario * 0.15;
	}
	
	else
	if(salario >= 3751.06 && salario <= 4664.68)
	{
		ir = salario * 0.225;
	}
	
	else
	if(salario >= 4664.69)
	{
		ir = salario * 0.275;
	}	
	
	ir = ir-inss;
	sal_liquido = salario-inss-ir;
	
	printf("\n Desconto Inss: R$%.2f\n", inss);
	printf("\n Desconto IR: R$%.2f\n", ir);
	
	printf("\n Salario liquido: R$%.2f\n", sal_liquido);
	
		
	return 0;
}
