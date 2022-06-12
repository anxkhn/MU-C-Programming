#include <stdio.h>
// print and scan/scan function
void message();
int main()
{
  message();
  return 0;
}
void message() {
  char abc[100];
  gets(abc);
  printf("%s\n", abc);
}
