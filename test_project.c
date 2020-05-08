#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
#include "Project.h"

void main()
{
    int a,b,c=1;
    while(1)
    {
        printf("\nLogin As:\n");
        printf("\n1.Admin\n2.Employee\n3.Exit");
        printf("Enter your choice: ");
        scanf("%d",&a);
        if(a==1)
        {
            clrscr();
            printf("Hello Admin!\nWhat would you like to do ->\n");
            while(c)
            {
                printf("1.Enter new employee data.\n");
                printf("2.Edit existing employee data.\n");
                printf("3.Delete existing employee data.\n");
                printf("4.Exit to Main Menu.\n");
                printf("\nEnter your choice: ")
                scanf("%d",&b);
                switch(b)
                {
                    case 1://function for adding new employee's information
                            break;
                    case 2://function for retrieving employee's information
                            break;
                    case 3://function for adding new employee's information
                            break;
                    case 4:c=0;
                            break;
                    default :printf("Enter correct value: ");
                }
            }
        }
        else if(a==2)
        {
            clrscr();
            employee* e;
            printf("Enter Employee Details: ");
            input_employee(e);
            printf("Corresponding Employee's Customer Details:\n");
            print_customer();
        }
    }
    else
        exit(0);
}
