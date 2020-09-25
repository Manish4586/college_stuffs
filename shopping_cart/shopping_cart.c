#include <stdio.h>
#include <conio.h>

int main()
{
    char item[500][50];
    int size[1000];
    int n, i, j, tmp;

/*    printf("Enter Product Name :");
    scanf("%s", &item);
*/
    printf("Enter No Of Items :");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    printf("%d Enter Product Name :",i);
    scanf("%s",&item[i]);
    printf("%d Enter Product Price :",i);
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
    printf("Product:%s ", item[i]);
    printf("Price:%d\n", size[i]);
    }
        //printf("\n\n");
}
