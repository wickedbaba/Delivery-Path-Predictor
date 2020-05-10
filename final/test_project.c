#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
#include "Project.h"

void main()
{
    int a,b,c=1,i,n,id;
    employee e1[1000];
    customer c1[100];
    while(1)
    {
        printf("\nLogin As:\n");
        printf("\n1.Admin\n2.Employee\n3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&a);
        if(a==1)
        {
            system("cls");
            printf("Hello Admin!\nWhat would you like to do ->\n");
            while(c)
            {
                printf("1.Enter new employee data.\n");
                printf("2.Print existing employee data.\n");
                printf("3.Enter new customer data\n");
                printf("4.Print existing customer data\n");
                printf("5.Return to main menu\n");
                printf("\nEnter your choice: ");
                scanf("%d",&b);
                printf("\n");
                switch(b)
                {
                    case 1: printf("Enter the number of employees whise data is to be entered: ");
                            scanf("%d",&n);
                            for(i=0;i<n;i++)
                                input_employee(e1[i]);
                            break;
                    case 2: printf("Enter the employee Id of the employee: ");
                            scanf("%d",&id);
                            for(i=0;i<1000;i++)
                            {
                                if(e1[i].employee_id==id)
                                    print_employee(e1[i]);
                            }
                            break;
                    case 3: printf("Enter the number of customers whose data you want to enter: ");
                            scanf("%d",&n);
                            for(i=0;i<n;i++)
                                get_cust_data(c1[i]);
                            break;
                    case 4: printf("Enter the customer Id: ");
                            scanf("%d",&id);
                            for(i=0;i<100;i++)
                            {
                                if(c1[i].customer_id==id)
                                    print_customer(c1[i]);
                            }
                            break;
                    case 5: c=0;
                            break;
                    default :printf("Enter correct value: ");
                }
            }
        }
        else if(a==2)
        {
            system("cls");
            printf("Enter your employee ID: ");
            scanf("%d",&id);
            for(i=0;i<1000;i++)
            {
                if(e1[i].employee_id==id)
                    asscustemp(e1,c1,1000,100);
            }
        }
        else
            exit(0);
    }
}
