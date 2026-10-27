#include<stdio.h>
void main()
{
  char ch;
  printf("\nEnter the character:");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("\nCharacter is vowel");
  else if((ch>'a'&&ch<='z')||(ch>'A'&&ch<'Z'))
    printf("\nCharacter is consonant");
  else
    printf("\nInput is not alphabet");
}    