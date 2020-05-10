#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Project.h"

void main()
{
    int a,b,c=1,i,n,n1,id;
    int wc,we;
    employee e1[100];
    customer c1[100];
    ReadEmployeeData(e1,&n);
    ReadCustomerData(c1,&n1);
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
                printf("5.Print all employee data\n");
                printf("6.Print all customer data\n");
                printf("7.Return to main menu\n");
                printf("\nEnter your choice: ");
                scanf("%d",&b);
                printf("\n");
                switch(b)
                {
                    case 1: printf("Enter the number of employees whose data is to be entered: ");
                            scanf("%d",&we);
                            for(i=n;i<(n+we);i++)
                                input_employee(e1[i]);
                            ReadEmployeeData(e1,&n);
                            n=n+we;
                            break;
                    case 2: printf("Enter the employee Id of the employee: ");
                            scanf("%d",&id);
                            for(i=0;i<n;i++)
                            {
                                if(e1[i].employee_id==id)
                                    print_employee(e1[i]);
                            }
                            break;
                    case 3: printf("Enter the number of customers whose data you want to enter: ");
                            scanf("%d",&wc);
                            for(i=n1;i<(n1+wc);i++)
                                get_cust_data(c1[i]);
                            n1=n1+wc;
                            ReadCustomerData(c1,&n1);
                            break;
                    case 4: printf("Enter the customer Id: ");
                            scanf("%d",&id);
                            for(i=0;i<n1;i++)
                            {
                                if(c1[i].customer_id==id)
                                    print_customer(c1[i]);
                            }
                            break;
                    case 5:printf("employee data:\n");
                            for(int i=0;i<n;i++){
                                printf("%d,%s,%ld,%s,%d\n",e1[i].employee_id,e1[i].employee_name,e1[i].phno,e1[i].shift,e1[i].area_code);
                            }
                            break;
                    case 6:printf("customer data\n");
                            for(int i=0;i<n1;i++){
                                printf("%d,%s,%s,%f,%d,%s,%s,%d\n",c1[i].customer_id,c1[i].cust_name,c1[i].item,c1[i].item_price,c1[i].code,c1[i].email_ID,c1[i].address,c1[i].pincode);

                            }
                            break;
                    case 7: c=0;
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
