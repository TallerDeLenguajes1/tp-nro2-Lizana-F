#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 4
#define M 5
int main(){

	int f,c;
	int mt[N][M]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};


	for(f = 0;f<N; f++)
	{
	for(c = 0;c<N; c++)
	{
	cprintf("%d ", mt[f][c]);
	}
	cprintf("\n");
	}


	return 0;
}