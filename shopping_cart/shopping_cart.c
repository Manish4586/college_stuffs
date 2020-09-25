#include <stdio.h>

int main()
{
    int size[1000];
    int r =20;
    int n, i, j, tmp;
    char item[r][50];
    char h, g, temp;

/*    printf("Enter Product Name :");
    scanf("%s", &item);
*/
    printf("Enter No Of Items :");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    printf("Enter Product Name :", h);
    scanf("%s",&item[h]);
    printf("Price :",i);
    scanf("%d",&size[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(size[j] <size[i])
            {
                tmp = size[i];
                size[i] = size[j];
                size[j] = tmp;
            }
        }
    }
    printf("\nItems In Your Cart :\n");
    for(i=0; i<n; i++)
    {
        printf("Product:%s ", item[h]);
        printf("Price:%d\n", size[i]);
    }
        //printf("\n\n");
}
