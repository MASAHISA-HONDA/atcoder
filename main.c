#include<stdio.h>
#include<math.h>
#include"my_func.h"
#define N 20

int main(){
	int i;

	double sum = 0;
	double temp = 0;	

	double a[N];
	double out[N];
	for(i=0;i<N;i++){
		*(out+i) = 0.0;
	}
	printf("ans = %39.38f\n",out[N-1]);
	

	for(i=0;i<N;i++){
		temp = pow(-1,i)/(2*i+1);
		sum = sum + temp;
		a[i] = sum*4;
	}

	eps1(&a[0],&out[0],N);
	printf("ans = %39.38f\n",out[N-2]);

}
