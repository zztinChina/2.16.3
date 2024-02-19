#include<stdio.h>
int math(int a)
{
	return a * (a + 1) * (a + 2);
}
int main()
{
	int count = 0;
	int i = 0;
	for (i = 1; i < 100; i+=2)
	{
		int h=math(i);
		count += h;

	}
	printf("%d\n", count);

	return 0;
}