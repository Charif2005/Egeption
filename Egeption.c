#include <stdio.h>
int main() {
   int a,b,sp=0,pus=1,t;
  printf("puts the nember a:\n");
  scanf("%d",&a);
  printf("puts the nember b:\n");
  scanf("%d",&b);
  if(a<b){
  	 t=a;a=b;b=t;
  	 }
  while(b/2>=pus){
  	 pus=pus*2;
  	 }
  while(b!=0){
  	if(pus<=b){ 
  	b=b-pus;sp=sp+a*pus; 
  	}
      pus=pus/2;
       }
  printf("a*b=%d",sp);
  return 0;}