#include<stdio.h>
int main(int argc,char *argv[]){
  int a=0x80000000,b=0x80000000;
  printf("a:%x\nb:%x\n",a,b);
  printf("~a:%x\n~b:%x\n",~a,~b);
  printf("a&b:%x\n",a&b);
  printf("~a&~b:%x\n",(~a)&(~b));
  printf("a&b:%x\n",a&b);
  printf("~a&~b:%x\n",(~a)&(~b));
  printf("~(a&b):%x\n",~(a&b));
  printf("~(~a&~b):%x\n",~((~a)&(~b)));
  printf("(~(a&b))&(~(~a&~b)):%x\n",(~(a&b))&(~((~a)&(~b))));
  printf("%d\n",a);
  printf("%d\n",~(a-1));
  int c=0x12341234;
  printf("%x\n",c);
  printf("%x\n",~c);
  printf("%x\n",-c);
  printf("%x\n",c&(0xaa)&(c>>8)&(c>>16)&(c>>24));
  return 0;
}
