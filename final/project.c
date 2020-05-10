#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Project.h"

int firste=0;
int firstc=0;

void removeSpaces(char line[]){

int i=0;
int l=strlen(line);
int j=0;

	while(line[j]!='\0'){
		 if(line[j]==' '){
		 	l-=1;
		 }

		 ++j;
	}
	while(line[strlen(line)-1]==' '){
		line[strlen(line)-1]='\0';
	}
	while(line[i]!='\0'){
		if(line[i]==' '){
			int j=i;
			int k=i;
			while(line[j]==' '){
				j++;

			}

						while(j<strlen(line)){
				line[k]=line[j];
				k++;j++;
			}
			continue;
		}
		i++;
	}
	line[l]='\0';

}
void removeCommas(char line[]){
	removeSpaces(line);
	int i=0;
	while(line[i]!='\0'){
		if(line[i]==','){
			line[i]=' ';
		}
		i++;
	}
}
void ReadEmployeeData(employee empF[],int (*length)){
	FILE *fp;
	(*length)=0;
	fp=fopen("employee.csv","r");
	char x[100];
	int first=0;
	while(fgets(x,100,fp)!=NULL){
		if(first==0){
			first=1;
			continue;
		}
		removeCommas(x);
		sscanf(x,"%d %s %ld %s %d",&(empF[(*length)].employee_id),empF[(*length)].employee_name,&(empF[(*length)].phno),empF[(*length)].shift,&(empF[(*length)].area_code));
		(*length)+=1;
	}
	(*length)-=1;

	fclose(fp);
}

void ReadCustomerData(customer custF[],int *length){
	FILE *fp;
	(*length)=0;
	fp=fopen("customer.csv","r");
	char x[100];
	int first=0;
	while(fgets(x,100,fp)!=NULL){
		if(first==0){
			first=1;
			continue;
		}
		removeCommas(x);
 			sscanf(x,"%d %s %s %f %d %s %s %d %d",&(custF[(*length)].customer_id),custF[(*length)].cust_name,custF[(*length)].item,&(custF[(*length)].item_price),&(custF[(*length)].code),custF[(*length)].email_ID,custF[(*length)].address,&(custF[(*length)].prime),&(custF[(*length)].pincode));
		(*length)+=1;
	}
	(*length)-=1;

	fclose(fp);
}
void WriteEmployeeData(employee empF){
	FILE *f;
	printf("%d\n",firste);
	f=fopen("employee.csv","a");
	if(firste==0){
	fprintf(f,"%d,%s,%ld,%s,%d",empF.employee_id,empF.employee_name,empF.phno,empF.shift,empF.area_code);
	firste=1;
	}
	else{
		fprintf(f,"\n%d,%s,%ld,%s,%d",empF.employee_id,empF.employee_name,empF.phno,empF.shift,empF.area_code);
	}
	fclose(f);


}
void WriteCustData(customer custF){
	FILE *f;
	f=fopen("customer.csv","a");
	if(firstc==0){
	fprintf(f,"%d,%s,%s,%f,%d,%s,%s,%d",custF.customer_id,custF.cust_name,custF.item,custF.item_price,custF.code,custF.email_ID,custF.address,custF.pincode);
	firstc=1;
	}
	else{
		fprintf(f,"\n%d,%s,%s,%f,%d,%s,%s,%d,%d",custF.customer_id,custF.cust_name,custF.item,custF.item_price,custF.code,custF.email_ID,custF.address,custF.prime,custF.pincode);
	}
	fclose(f);
}

void get_cust_data(customer c)
{
    printf("\n\nEnter the Customer ID: ");
    scanf("%d",&c.customer_id);
    printf("Enter Customer Name: ");
    scanf("%s",c.cust_name);
    printf("Enter the item name: ");
    scanf("%s",c.item);
    printf("Enter the item price: ");
    scanf("%f",&c.item_price);
    printf("Enter whether item is fragile or not(0 for not 1 for yes): ");
    scanf("%d",&c.code);
    printf("Enter the Email ID of the customer: ");
    scanf("%s",c.email_ID);
    printf("Enter the address of the customer: ");
    scanf("%s",c.address);
    printf("Enter the pincode of the customer: ");
    scanf("%d",&c.pincode);
    printf("Enter the whether the customer has prime membership or not(1 if he has and 0 if he doesn't): ");
    scanf("%d",&c.prime);
    assign_priority(c);
    WriteCustData(c);
}

void print_customer(customer* c)
{
    printf("\n\nEnter the Customer ID: %d",c->customer_id);
    printf("The Customer Name: ");
    puts(c->cust_name);
    printf("\nThe item name: ");
    puts(c->item);
    printf("\nThe item price: %f",c->item_price);
    printf(" item is fragile or not(0 for not 1 for yes): %d",c->code);
    printf("The Email ID of the customer: ");
    puts(c->email_ID);
    printf("The address of the customer: ");
    puts(c->address);
    printf("The pin code of the customer: %d",c->pincode);
    printf("The customer has prime membership or not(1 if he has and 0 if he doesn't): %d",c->prime);
}

void input_employee(employee e1)
{
    printf("Enter employee ID : ");
    scanf("%d",&e1.employee_id);
    printf("Enter employee name : ");
    scanf("%s",&e1.employee_name);
    printf("Enter phone number : ");
    scanf("%ld",&e1.phno);
    printf("Enter shift : ");
    scanf("%s",&e1.shift);
    printf("Enter area code : ");
    scanf("%d",&e1.area_code);
    WriteEmployeeData(e1);
}

void print_employee(employee e1)
{
    printf("Employee name : ");
    puts(e1.employee_name);
    printf("Phone number : %d",e1.phno);
    printf("Shift : ");
    puts(e1.shift);
    printf("Enter area code : %d",e1.area_code);
}

void assign_priority(customer c)
{
    c.priority=0;
    if(c.prime==1)
    {
        ++c.priority;
        if(c.item_price>8000)
            c.priority++;
        if(c.code==1)
            c.priority=c.priority+2;
    }
    else
    {
        if(c.item_price>12000)
            c.priority++;
        if(c.code==1)
            c.priority=c.priority+2;
    }
}

void asscustemp(employee emp[],customer c[],int emp_size,int cust_size)
{
    int i,j,n[cust_size];
    for(j=0;j<cust_size;j++)
        n[j]=0;
    for(i=0;i<emp_size;i++)
    {
        for(j=0;j<cust_size;j++)
        {
            if(emp[i].area_code=c[i].pincode)
            {
               emp[i].c[i]=c[i];
               n[i]++;
            }
        }
        buildmaxheap(emp[i].c[i],n[i]);
        print_customer(emp[i].c[i]);
    }
}

void buildmaxheap(customer arr[],int n)
{
    int i;
    for(i=(n-1)/2;i>=0;i--)
        maxheapify(arr[i].priority,n,i);
}

int parent(int i)
{
    return (i-1)/2;
}

int left(int i)
{
    return 2*i+1;
}

int right(int i)
{
    return 2*i+2;
}

void maxheapify(int arr[], int n, int i)
{
    int l,r,largest,temp;
    l=left(i);
    r=right(i);
    if(l<n&&arr[l]>arr[i])
        largest=l;
    else
        largest=i;
    if(r<n&&arr[r]>arr[largest])
        largest=r;
    if(largest!=i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        maxheapify(arr,n,largest);
    }
}









