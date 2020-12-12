#include <stdio.h>
#include <string.h>

int main(){

  int i, line1, line2,x;
  char str1[100];
  char str2[100];


  scanf("%s\n%s",&str1,&str2);

  line1=strlen(str1);
  line2=strlen(str2);



  for (i=0;i<line1;i++){
      if (str1[i]>='a'&&str1[i]<='z'){
            str1[i]= 'A'-97+'a';
        }
    }
  for (i=0;i<line2;i++){
      if (str2[i]>='a'&&str2[i]<='z'){
            str2[i]= 'A'-97+'a';
        }
    }


  x= strcasecmp(str1,str2);

  if(x>0){
    printf("1");
  }
  else if(x<0){
    printf("1");
  }
  else if(x==0){
    printf("0");
  }

  return 0;

}
