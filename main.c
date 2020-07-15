
//Demostrates the use of the break statement

#include <stdio.h>

char s[] = "This is a test string. It originally contains two sentences.";

int main(void)
{
    int count;

    printf("\nOriginal string is: \n%s\n", s);

    for (count=0; s[count]!= '\0'; count++)
    {
        if (s[count]=='.')
        {
            s[count+1]='\0';
            break;
        }
        //printf("%c\n",s[count]);  //just to see what's in array s[] after parsing takes place
    }

    printf("\nModified string is now: %s\n", s);

    return 0;
}



