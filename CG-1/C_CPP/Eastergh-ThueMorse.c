#include <stdio.h>int c(int n){return n==0?0:1+c(n&(n-1));}int main(n){n--;while(n<11){int d=1l<<n++,i=0;while(i++<d){printf("%c",c(i)%2?'1':'0');}printf("\n");}}