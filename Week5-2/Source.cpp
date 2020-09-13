#include<stdio.h>
int main()
{
	int i,j,y, num[10];
	for (i = 0;i < 10;i++)
	{
		printf("Input number is %d : ", i);
		scanf_s("%d", &num[i]);
	}
	for (i = 9;i > 0;i--)
		for (j = 0;j < i;j++)
			if (num[j] > num[j + 1])
			{y = num[j];num[j] = num[j + 1];num[j + 1] = y;}
	printf("Num Result : ");
	for (i = 0;i < 10;i++) printf("%d", num[i]);
	printf("\n");
	return 0;
}