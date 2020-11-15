#include <stdio.h>
#include <string.h>


int main(){

    int line1, line2, i, j, cnt=0;
    char str1[1000], str2[1000];


    scanf("%s",&str1);
    scanf("%s",&str2);


    line1 = strlen(str1);
    line2 = strlen(str2);


    for(i=0,j=line2-1;i<line1,j>=0;i++,j--){

            if (str1[i]==str2[j]){

                 cnt++;

            }

     }

     if (cnt==line1){
        printf("YES");
     }
     else
        printf("NO");




    return 0;

}
