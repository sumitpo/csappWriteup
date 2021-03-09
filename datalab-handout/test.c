#include <stdio.h>
int isAsciiDigit(int x) {
  // if x>29 a=0
  // else a=0x80000000
  int a = (x + 0xffffffe2) & 0x80000000;
  // if x>39 b=0
  // else b=0x80000000
  int b = (x + 0xffffffd9) & 0x80000000;
  return (!a) & (!(!b));
}
int logicalNeg(int x) {
  /*
  int a = ((x >> 16)|x)&0xffff;
  int b = (a >> 8) | a;
  int c = (b >> 4) | b;
  int d = (c >> 2) | c;
  return (d >> 1) | d;
  */
  int a=~x+1;
  return a^x;
}
int main(int argc, char *argv[]) {
  printf("%d\n\n", logicalNeg(0x0));
  printf("%d\n\n", logicalNeg(0x80000000));
  printf("%d\n\n", logicalNeg(0x7fffffff));
  return 0;
}
