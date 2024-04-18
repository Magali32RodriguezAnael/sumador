#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
int num1, num2, num3, suma; 
p("ingrese primer valor: ");
s("%d", &num1);
p ("ingrese segundo valor: ");
s ("%d", &num2);
p ("ingrese tercer valor");
suma = num1 + num2 + num3;
p("%d + %d + %d = %d", num1,num2,num3,suma);
return 0;
}
