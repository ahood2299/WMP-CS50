#include<stdio.h>
void main()
{
    int h;
    do{
     printf("Enter the height of the pyramid:");
     scanf("%d", &h);
    }while((h>23)&&(h<0));
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<h; j++)
        {
            if((i+j)>=(h-1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
