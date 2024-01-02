#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int alp=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==97 || str[i]==101 || str[i]==105 || str[i]==111 || str[i]==117)
        {
            alp=alp+1;
        }
        
    }
    printf("%d",alp);
}