#include <stdio.h>
#include <string.h>

int main()
{

    int Peter[] = {5,2,2,5,6,7,6,6,9,4,3,4,3};
    printf("Peter ");
    for(int i=0;i<13;i++)
    {
        printf("P%d ",Peter[i]);
    }
    int n = sizeof(Peter) / sizeof(int);
    int i;
    float total, medeltal;
    for (i = 0; i < n; i++)
    {total += Peter[i];
    }
    medeltal = total / n;
    printf("Medelvärde:%.1f", medeltal);
    printf("\n");

    int Alice[] = {1,3,1,8,7,7,1,6,9,4,8,9,3};
    printf("Alice ");
    for(int i=0;i<13;i++)
    {
        printf("P%d ",Alice[i]);
    }
    int n2 = sizeof(Alice) / sizeof(int);
    float total2, medeltal2;
    for (i = 0; i < n2; i++)
    {total2 += Alice[i];
    }
    medeltal2 = total2 / n2;
    printf("Medelvärde:%.1f", medeltal2);
    printf("\n");

    int Bob[] = {2,4,6,7,8,2,1,4,5,7,9,6,4};
    printf("Bob ");
    for(int i=0;i<13;i++)
    {
        printf("P%d ",Bob[i]);
    }
    int n3 = sizeof(Bob) / sizeof(int);
    float total3, medeltal3;
    for (i = 0; i < n3; i++)
    {total3 += Bob[i];
    }
    medeltal3 = total3 / n3;
    printf("Medelvärde:%.1f", medeltal3);
    printf("\n");

    int Charlie[] = {3,5,4,1,1,8,7,4,3,2,4,5,2};
    printf("Charlie ");
    for(int i=0;i<13;i++)
    {
        printf("P%d ",Charlie[i]);
    }
    int n4 = sizeof(Charlie) / sizeof(int);
    float total4, medeltal4;
    for (i = 0; i < n4; i++)
    {total4 += Charlie[i];
    }
    medeltal4 = total4 / n4;
    printf("Medelvärde:%.1f", medeltal4);
    printf("\n");

    int Oliver[] = {4,6,5,3,2,1,1,2,5,6,5,6,9};
    printf("Oliver ");
    for(int i=0;i<13;i++)
    {
        printf("P%d ",Oliver[i]);
    }
    int n5 = sizeof(Oliver) / sizeof(int);
    float total5, medeltal5;
    for (i = 0; i < n5; i++)
    {total5 += Oliver[i];
    }
    medeltal5 = total5 / n5;
    printf("Medelvärde:%.1f", medeltal5);
    printf("\n");
    return 0;
}