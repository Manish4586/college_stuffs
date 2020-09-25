#include <stdio.h>

int main()
{
    char item[500][50];
    int price[1000];
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
    scanf("%d",&price[i]);
    }

    for(i=0; i<n; i++)
    {
    for(j=i+1; j<n; j++)
    {
    if(price[j] > price[i])
    {
    tmp = price[i];
    price[i] = price[j];
    price[j] = tmp;
    }
   }
  }
    printf("%-9s%15s\n", "Item", "Price");
    for(i=0; i<n; i++)
    {
    printf("%-10s %10.2d\n", item[i], price[i]);
    }
        //printf("\n\n");
}

