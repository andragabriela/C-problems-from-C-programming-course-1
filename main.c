#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    ///Using file objects and I/O, solve at least one of the following:
///2. Replace all vowels with # in the text read from a given file.

///3. Replace even numbers with | in the text read from a given file.

    FILE *fp;
    FILE *fp1;
    FILE *fp2;
    int i;
    char buff[200], buff1[200], voc[]="aeiouAEIOU";
    fp=fopen("fisier1.txt", "r");
    fp1=fopen("fisier2.txt", "w");
    fp2=fopen("fisier3.txt", "w");
    if(fp==NULL)
        printf("Eroare");
    else
    {
        while(1)
        {
            if(fgets(buff,200,fp)==NULL)
                break;
            else strcpy(buff1, buff);

            for(i=0;i<strlen(buff);i++)
            {
                if(strchr(voc, buff[i])!=NULL)
                {
                    buff[i]='#';
                }
                if(buff1[i]-'0'>=0 && buff1[i]-'0'<=9)
                    if((buff1[i]-'0')%2==0)
                    buff1[i]='|';
            }
            fputs(buff, fp1);
            fputs(buff1, fp2);
        }
    }
}
