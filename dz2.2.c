#include <stdio.h>
#define N 5
int main()
{
int con, con2, temp;
int arr[N] = {1, 2, 3, 4, 5};
	

	for(con = 0; con < N / 2; con++)
	{
	temp = arr[con];
	arr[con] = arr[N - con - 1];
	arr[N - con - 1] = temp;
	}
		
	for(con = 0; con < N; con++)
	{
	printf("%d ",arr[con]);
	}
	
printf("\n");


}
