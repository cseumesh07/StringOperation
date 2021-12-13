#include<stdio.h>
#include<stdlib.h>

void findandreplace(char str[], char pat[], char rep[])
{
  int s,c,p,i,j,occ=0;
  s=p=c=j=0;
  char res[50];
  while(str[c]!='\0')
  {
    if(str[s]==pat[p])
    {
      p++;
      s++;
      if(pat[p]=='\0')
      {
        occ++;
        printf("Pattern found at %d\n",c);
        for(i=0; rep[i]!='\0'; i++,j++)
        res[j]=rep[i];
        p=0;
        c=s;
      }
    }
    else
    {
      res[j]=str[c];
      j++;
      c++;
      s=c;
      p=0;
    }
  }
  res[j]='\0';
  if(occ)
  {
    printf("Number of occurences = %d\n",occ);
    printf("The resulting string is : %s",res);
  }
  else
  printf("Pattern not found");
}

void main(){
  char str[50], pat[50], rep[50];
  printf("Enter a string\n");
  gets(str);
  printf("Enter a pattern string\n");
  gets(pat);
  printf("Enter a replace string\n");
  gets(rep);
  findandreplace(str, pat, rep);
}