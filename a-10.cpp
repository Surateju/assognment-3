#include <bits/stdc++.h>
using namespace std;
 
void reverseString(char* str)
{
  int l, i;
  char *begin_ptr, *end_ptr, ch;
 
  l = strlen(str);
 
  begin_ptr = str;
   
  end_ptr = str + l - 1;
 
  for (i = 0; i < (l - 1) / 2; i++) {
 
    ch = *end_ptr;
    *end_ptr = *begin_ptr;
    *begin_ptr = ch;

    begin_ptr++;
    end_ptr--;
  }
}
int main()
{
  char str[100] = "saveetha";
  cout<<"Enter a string: "<<str<<endl;
  reverseString(str);
  printf("Reverse of the string: %s\n", str);
 
  return 0;
}
