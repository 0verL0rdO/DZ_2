#include <stdio.h>
#define N 3

int main()
{

int counter, counter1;
int arr[N][N];
	for(counter1 = 0; counter1 < N; counter1++)
	{
		for(counter = 0; counter < N; counter++)
		{
		arr[counter][counter1] = (counter1 - 1) * N + counter + N + 1;
		printf("%d ",arr[counter][counter1]);
		
		}
		printf("\n");
	}	

}
