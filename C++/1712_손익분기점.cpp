#include <stdio.h>

int main()
{
    int fixed_cost, variable_cost, price;
    unsigned int count;
    scanf("%d %d %d", &fixed_cost, &variable_cost, &price);
    if(fixed_cost>price && price<variable_cost) printf("-1");
    else if(price != variable_cost)
    {
        count = fixed_cost/(price-variable_cost) + 1;
        printf("%d", count);
    }
    else
    {
        while(price*count <= variable_cost*count+fixed_cost)
            count++;
        printf("%d", count);
    }
    return 0;
}