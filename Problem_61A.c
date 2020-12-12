#include <stdio.h>
#include <string.h>

int main(){

   int i,j,numlen1, numlen2;

   char num1[1000];
   char num2[1000];
   char result[1000];

   scanf("%s",&num1);
   scanf("%s",&num2);


   numlen1 = strlen(num1);
   numlen2 = strlen(num2);


  for(i=0,j=0;i<numlen1,j<numlen2;i++,j++){

        if(((num1[i]=='1' && num2[j]=='0')||(num1[i]=='0' && num2[j]=='1')) && numlen1==numlen2){

                    result[i]= '1';


            }


        else
                    result[i]= '0';

     }


   printf("%s",result);


   return 0;

}
