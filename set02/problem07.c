#include<stdio.h>
int main()
{
  char s[50];
  printf("Enter the name of the camel\n");
  scanf("%s",&s);
  int i=0; 
  int len=strlen(s);
  int vowel_count=0;
  int cons_count=0;
  while(i<len)
    {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
      {
       vowel_count=vowel_count+1;
      }
      else
      {
       cons_count=cons_count+1;
      }
      i++;
      }
    if(vowel_count>=2&& cons_count>=2)
    {
      printf("The camel has a very nice name");
    }
  return 0;
  }
