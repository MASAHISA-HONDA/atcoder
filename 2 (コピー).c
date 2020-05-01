#include<stdio.h>
#include<math.h>

int main(){

 int A,B,C,D;
 scanf("%d %d %d %d",&A,&B,&C,&D);

 int takashi = C / B;
 int amari = C%B;
printf("%d\n",amari);
 if (amari > 0){takashi =takashi + 1;} 

printf("takashi=%d\n",takashi);
 int aoki = A / D;
 int aoki_amari = A%D;
 if(aoki_amari > 0){aoki = aoki + 1;}

printf("aoki=%d\n",aoki);
 if(takashi>aoki){
	printf("No");
}else if(takashi == aoki){
	printf("Yes");
}else{
	printf("Yes");

}



return 0;
}
