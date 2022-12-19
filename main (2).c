#include <stdio.h>
int main(){
  int a,b,ekok,i;
  printf("iki tam sayı giriniz: ");
  scanf("%d%d",&a,&b);
  while(1){
    i++;
  if(i%a==0&&i%b==0)
  {
   ekok=i;
   break;}
  }
  printf("%d",ekok);
  }
