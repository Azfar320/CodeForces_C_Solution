#include<stdio.h>
#include<string.h>


int main(){

   int i, upper_case=0, lower_case=0,line;
   char str[1000];

   scanf("%s",&str);

   line = strlen(str);


   for(i=0;i<line;i++){

       if(str[i]>=65&&str[i]<=90){
           upper_case++;
       }
       else if(str[i]>=97&&str[i]<=122){
           lower_case++;
       }
   }

   if(upper_case>lower_case){

        for(i=0;i<line;i++){

            if(str[i]>=97&&str[i]<=122){

                str[i]= 65+str[i]-97;
            }
        }
   }
  else
        for(i=0;i<line;i++){
            if(str[i]>=65&&str[i]<=90){
                str[i]=97+str[i]-65;
            }
        }

   printf("%s",str);



   return 0;
}
