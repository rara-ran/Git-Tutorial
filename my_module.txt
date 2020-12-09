#include <stdio.h>

int main()
{
int num1 = 1;
int num2 = ++num1;

if (num1 == num2)
	printf("적용 안 됐지롱");
else
	printf("적용 됐넹?");


return 0;
}