#include <stdio.h>
#include <String.h>
void reverse(char *str);
int main(){
  char str[50];
  scanf("%s",str);
  reverse(str);
  printf("%s",str);
  return 0;
}
void reverse(char *str){
  int l,i;
  l=strlen(str);
  char t;
  for(i=0;i<l/2;i++){
    t=str[i];
    str[i]=str[l-i-1];
    str[l-i-1]=t;
  }
}
