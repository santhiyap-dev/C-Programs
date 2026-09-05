#include <stdio.h>

int main()
{
    int choice;

    printf("Enter 1 or 2: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("You selected One");
            break;

        case 2:
            printf("You selected Two");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
