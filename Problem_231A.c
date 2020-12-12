#include <stdio.h>


int main(){

   int i,n,petya,vashya,tonya,count=0;

   scanf("%d",&n);


   for(i=0;i<n;i++){
    scanf("%d %d %d",&petya,&vashya,&tonya);
    if((petya+vashya+tonya)>1)
        count++;
    else
        count==0;
   }

   printf("%d",count);

   return 0;

}
