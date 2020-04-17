#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Project.h"
employee empM[100];
customer custM[100];
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
void ReadEmployeeData(){		
	FILE *fp;
	fp=fopen("employee.csv","r");
	char x[100];
			// while(
			fgets(x,100,fp);
			fgets(x,100,fp);
			//!=NULL){
			printf("%s\n",x);
			removeCommas(x);
			printf("\n");
			sscanf(x,"%d %s %ld %s",&(empF.employee_id),empF.employee_name,&(empF.phno),empF.shift);
			printf("%d\n",empF.employee_id);
			printf("%s\n",empF.employee_name);
			printf("%ld\n",empF.phno);
			printf("%s\n",empF.shift);
			fclose(fp);
		
}

void ReadCustomerData()
{
	FILE *fp;
	fp=fopen("customer.csv","r");
	char x[100];
			fgets(x,100,fp);
			removeCommas(x);
			printf("\n");
			sscanf(x,"%d %s %s %f %d %s %s %d",&(custF.customer_id),custF.cust_name,custF.item,&(custF.item_price),&(custF.code),custF.email_ID,custF.address,&(custF.pincode));
			printf("%d\n", custF.customer_id);
			printf("%s\n",custF.cust_name);
			printf("%s\n", custF.item);
			printf("%f\n", custF.item_price);
			printf("%d\n",custF.code);
			printf("%s\n",custF.email_ID);
			printf("%s\n",custF.address);
			printf("%d\n", custF.pincode);
			fclose(fp);
}

// void PrintEmpData()
// void WriteEmployeeData()
// void findData(){

// }
void add_last(del **head,employee e,customer c){
	del *ptr=(del*)malloc(sizeof(del));
	ptr->priority=0;
	emp=e;
	cus=c;
	if(*head==NULL){
		*head=ptr;
		ptr->next=NULL;
	}
	else{
		node *crt=*head;
		while(crt->next!=NULL){
			crt=crt->next;

		}
		crt->next=ptr;
		ptr->next=NULL;
	}

} 
int main(int argc, char const *argv[])
{
	//FILE *fp; //a file pointer 
	//fp=fopen("test.csv","a+"); //opening file in append mode
	//char x[100];
	
// 		while(fgets(x,100,fp)!=NULL){
			
// 		removeCommas(x);
// 		printf("\n");
// 		sscanf(x,"%d %s %s %s %d %d",&(def.obs),def.a,def.b,def.c,&(def.d),&(def.e));
// 		printf("%d\n",def.obs);
// 		printf("%s\n",def.a);
// 		printf("%s\n", def.b);
// 		printf("%s\n", def.c);
// 		printf("%d\n",def.d);
// 		printf("%d\n",def.e);
		
// 		// 
// }
	
	//fclose(fp);
	node *head=NULL;	
	FILE *fp;
	fcust=fopen("customer.csv","r");
	char x[100];
	while(fgets(x,100,fp)!=NULL){
		removeCommas(x);


	}

	
	return 0;
}
