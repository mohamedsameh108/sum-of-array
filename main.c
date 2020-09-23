#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, sum = 0, z = 0, x;
    int ok;
    printf("Enter size of numbers\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Numbers\n");
    for (i = 0; i < size; i++)
    {
        ok = 1;
        printf("Enter number%d: ", i + 1);
        scanf("%d", &z);
        for (x = 0; x <= i; x++)
        {
            if (arr[x] == z)
            {
                printf("It's duplicate number, enter another number\n");
                i = i - 1;
                ok = 0;
            }
        }
        if (ok == 1)
        {
            arr[i] = z;
        }
    }
    printf("Your Numbers is: ");
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        printf("%d ", arr[i]);
    }
    float avr = (float)sum / (float)size;
    printf("\n");
    sleep(3);
    printf("The sum is %d and the average is %0.2f \n", sum, avr);
    main1();
    return 0;
}
int main1()
{
    int menu;
    printf("Press 1 to restart\nPress 0 to exit\n");
    scanf("%d", &menu);
    if (menu == 1)
    {
        main();
    }
    else if (menu == 0)
    {
        exit(0);
    }
    else
    {
        printf("I didn't understand you\n");
        main1();
    }
    return 0;
}
