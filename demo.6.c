#include<stdio.h>
int main()
{
    int num1=10,num2=20,choice;
    printf("1.addition\n.2.subtraction\n.3.multiplication\n.4.division\n");
    printf("enter your choice :");
    scanf("%d",&choice);

    switch (choice)
    {
        case1:
              printf("addition=%d\n",num1+num2);
              break;

        case2:
              printf("subtraction=%d\n",num1-num2);
              break;

        case3:
              printf("multiplication=%d\n",num1*num2);
              break;

        case4:
              printf("division=%d\n",num1/num2);
              break;

        default:
              printf("enter the valid choice between 1 to 4\n");
              break;


    }
    return 0;
}