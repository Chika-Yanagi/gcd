#include<stdio.h>
#include<stdlib.h>

int gcd ( int a, int b )
{int s=1; 
 while(s!=0){s=a%b;a=b;b=s;}
  

  return a;
}

void example4 ( void )
{
  int a = 3;
  int b = 33;
  int c = gcd ( a, b ); // 3と33の最大公約数(=3)を求める
  printf("%d\n", c);
}

void check3(int argc, char *argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = gcd(a, b);
  printf("%d\n", c);
}

int main(int argc, char *argv[])
{
  //example4();
  check3(argc, argv);
  return 0;
}

