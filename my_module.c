#include <stdio.h>

int main()
{
int num1 = 1;
int num2 = ++num1;

if (num1 == num2)
	printf("적용");
else
	printf("적용 안 됨");


return 0;
}
