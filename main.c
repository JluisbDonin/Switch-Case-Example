#include <stdio.h>
#include <stdlib.h>



int main()
{

    int option = 0;

    system("clear");
    printf("Choose an Option: ");
    scanf("%d", &option);



    switch (option)
    {
    case 1:
        printf("\nYou chose option 1!\n");
        break;
    case 2:
        printf("\nYou chose option 2!\n");
        break;
    default:
        break;
    }


    return 0;
}


