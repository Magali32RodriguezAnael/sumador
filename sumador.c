#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
int num1, num2, num3, suma, resta, multiplicacion, division;
p("ingrese primer valor: ");
s("%d", &num1);
p ("ingrese segundo valor: ");
s ("%d", &num2);
p ("ingrese tercer valor: ");
s ("%d", &num3);
suma = num1 + num2 + num3;
p("%d + %d + %d = %d\n", num1,num2,num3,suma);
resta = num1 - num2 - num3;
p("%d - %d - %d = %d\n" , num1,num2,num3,resta);
multiplicacion = num1 * num2 * num3;
p("%d * %d * %d = %d\n", num1,num2,num3,multiplicacion);
division = num1 / num2 / num3;
p("%d / %d / %d = %d", num1,num2,num3,division);
return 0;
}
