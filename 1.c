#include<stdio.h>

int now(int a,int b)
{
 
  int r, tmp;
 
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}


int main(){
	int N;

	scanf("%d",&N);

	int i,j,k;
	int temp =0;
	int temp2 = 0;
	int sum =0;

	for(i=1;i<N+1;i++){
		for(j=1;j<N+1;j++){
			for(k=1;k<N+1;k++){
				temp = now(k,j);
				temp2 = now(i,temp);
				sum = sum + temp2;
				

			}
		}
	}
	printf("%d\n",sum);



	return 0;
}
