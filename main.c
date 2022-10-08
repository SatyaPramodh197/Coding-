#include<stdio.h>
#include<conio.h>
void main()
{
    int amt,ticket,balamt;
    printf("Enter the amount:");
    scanf("%d",&amt);
    printf("Number of tickets :");
    scanf("%d",&ticket);
    if (amt%5==0)
    {
        if (amt==5)
        {
        printf("Print the ticket");
    }
     else if(amt<5*ticket)
     printf("The given amount is not enough");
    }
    else if(amt>5)
    {
        balamt=amt-5*ticket;
        printf("Print Tickets");
        printf("\nBalance Amount=%d",balamt);
    }
    else
    {
        printf("Invalid Coin");
    }
    getch();
    }

