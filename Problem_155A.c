#include <stdio.h>

int main(){


   int n,i,count=0;

   scanf("%d",&n);

   int A[n];

   for(i=0;i<n;i++){
      scanf("%d",&A[i]);
   }

   int biggest = A[0];
   int smallest = A[0];


   for(i=0;i<n;i++){
      if(A[i]>biggest){
          biggest=A[i];
          count++;
      }
      if(A[i]<smallest){
          smallest=A[i];
          count++;
      }
   }


   printf("%d",count);


   return 0;
}
