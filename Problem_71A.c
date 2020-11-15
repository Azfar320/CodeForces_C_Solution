#include <stdio.h>
#include <string.h>

int main(){

  int i,n,l;
  char str[1000];

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%s",&str);


    l = strlen(str);

    if(l>10){
          printf("%c",str[0]);
          printf("%d",l-2);
          printf("%c\n",str[l-1]);
    }
    else
          printf("%s\n",str);

  }




   return 0;
}
