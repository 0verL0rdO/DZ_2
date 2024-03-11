#include <stdio.h>
#define N 10

int main(){
int static arr[N][N];
int counter, col = 0, row = 0, col1 = 0, row1 = 0, col2, row2;
counter = 1;
col2 = N - 1;
row2 = N - 1;

while(counter <= (N * N))
{
	for(col = col1; col <= col2; col++)
	{
		arr[row1][col] = counter++;
	}
	
	for(row = row1 + 1; row <= row2; row++)
	{
		arr[row][col2] = counter++;
	}
	
	for(col = col2 - 1; col >= col1; col--)
	{
		arr[row2][col] = counter++;
	}
	
	for(row = row2 - 1; row >= row1 + 1; row--)
	{
		arr[row][col1] = counter++;
	}
	row1++;
	col1++;
	row2--;
	col2--;	
}

for (col = 0; col < N; col++)
{
	for(row = 0; row < N; row++)
	{
		printf("%d ", arr[col][row]);
	}
	printf("\n");
}
}
