#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	return factorial(n) / (factorial(r) * factorial(n-r));
}

int factorial(int n)
{
	int i, result=1;
	
	for (i=1; i<=n; i++)
		result = result * i;
		
	return result;
}

int get_integer()
{
	int x;
	
	printf("enter an integer: ");
	scanf("%i", &x);
	
	return x;
}
	
int main (int argc, char *argv[])
{
	int n, r, result;
	
	n = get_integer();
	r = get_integer();
	
	result = combination(n,r);
	
	printf("the combination result is: %i\n", result);
					
	return 0;
}
