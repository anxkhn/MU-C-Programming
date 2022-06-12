#include <stdio.h>
int main()
{
  int c , count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  for (c = 0 ; s[c] != '\0' ; c++ ) {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count+=1;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}
