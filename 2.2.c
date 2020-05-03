#include <stdio.h>

#define size 100

void main() {

	int a[size];
	int n, index = 0, b = 0;
	int i;


	scanf_s("%d", &n); //проверка с максимальным размером
	if (n <= 0 || n > size)
	{
		printf("Error! Max 100"); 
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			printf("[%d%s", b++, "]="); //ввод массива
			scanf_s("%d", &a[i]);
		}
		int max = a[0];
		for (int i = 0; i < n; i++)
		{
			if (a[i] > max) //ищем макс
			{
				max = a[i];
				index = i;
			}
		}
		if (index == 0)
		{
		printf("no numbers");
		}
		else if (index > 0)
		{
			for (int i = 0; i < index; i += 2)
			{
				a[i] *= max;
			}
			
			for (int i = 0; i < n; i++)
				printf("%d,", a[i]);

		}
	}
return 0;
}
