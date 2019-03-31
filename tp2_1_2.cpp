 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 4
#define M 5

typedef double matriz[N][M];

int main (){

	matriz V;

	double *pv;
	int f,c;

	pv=(double*)V;
//	c=M-1;

	for(f=0;f<N;f++){

		for(c=0;c<M;c++){
			cprintf("%lf  ",*(pv+(f*M + c)));
		}
		cprintf("\r\n");
	}

	return 0;
}