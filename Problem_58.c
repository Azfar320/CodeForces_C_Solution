#include<stdio.h>


int main(){

   int B[100];
   int n,i,k,count=0;

   scanf("%d %d",&n,&k);

   for(i=0;i<n;i++){
     scanf("%d",&B[i]);
   }

   for(i=0;i<n;i++){
    if(B[i]>=B[k-1]&&B[i]>0){
        count++;
    }
   }

   printf("%d",count);


   return 0;
}
