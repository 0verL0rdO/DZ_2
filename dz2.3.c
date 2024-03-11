#include <stdio.h>
#define N 3

int main()
{
int con, con2;
int arr[N][N];

	for(con2 = 0; con2 < N; con2++)
	{
		for(con = 0; con <= con2; con++)
		{
		arr[N - (con + 1)][con2] = 1;
		}
	}
	
	for(con2 = 0; con2 < N; con2++)
	{
		for(con = 0; con < N; con++)
		{
		printf("%d ",arr[con][con2]);
		}
	printf("\n");
	}
	
	

}
