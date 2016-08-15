#include <stdio.h>

int *ft_range(int min, int max);

void show_array(int *arr)
{
	int i = 0;
	long long k = sizeof(arr);
	
	if (arr == NULL)
		return ;
	while (i <= k)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
		i++;
	}
}

int main()
{
	show_array(ft_range(-2, 7));
	return (0);
}
