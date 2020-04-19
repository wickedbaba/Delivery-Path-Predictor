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
employee ReadEmployeeData(FILE *f){		
	employee empF;
	char x[100];
			fgets(x,100,f);
			removeCommas(x);
			printf("\n");
			sscanf(x,"%d %s %ld %s %d",&(empF.employee_id),empF.employee_name,&(empF.phno),empF.shift,&(empF.area_code));
			return empF;

		
}

customer ReadCustomerData(FILE *f){		
	customer custF;
	char x[100];
			fgets(x,100,f);
			removeCommas(x);
			printf("\n");
 			sscanf(x,"%d %s %s %f %d %s %s %d",&(custF.customer_id),custF.cust_name,custF.item,&(custF.item_price),&(custF.code),custF.email_ID,custF.address,&(custF.pincode));
			return custF;

		
}
void WriteEmployeeData(employee empF){
	FILE *f;
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
		fprintf(f,"\n%d,%s,%s,%f,%d,%s,%s,%d",custF.customer_id,custF.cust_name,custF.item,custF.item_price,custF.code,custF.email_ID,custF.address,custF.pincode);
	}
	fclose(f);
}
// void ReadCustomerData(                                                                              )
// {
// 	FILE *fp;
// 	fp=fopen("customer.csv","r");
// 	char x[100];
// 			fgets(x,100,fp);
// 			removeCommas(x);
// 			printf("\n");
// 			sscanf(x,"%d %s %s %f %d %s %s %d",&(custF.customer_id),custF.cust_name,custF.item,&(custF.item_price),&(custF.code),custF.email_ID,custF.address,&(custF.pincode));
// 			printf("%d\n", custF.customer_id);
// 			printf("%s\n",custF.cust_name);
// 			printf("%s\n", custF.item);
// 			printf("%f\n", custF.item_price);
// 			printf("%d\n",custF.code);
// 			printf("%s\n",custF.email_ID);
// 			printf("%s\n",custF.address);
// 			printf("%d\n", custF.pincode);
// 			fclose(fp);
// }

// void PrintEmpData()
// void WriteEmployeeData()
// void findData(){

// }
// void add_last(del **head,employee e,customer c){
// 	del *ptr=(del*)malloc(sizeof(del));
// 	ptr->priority=0;
// 	emp=e;
// 	cus=c;
// 	if(*head==NULL){
// 		*head=ptr;
// 		ptr->next=NULL;
// 	}
// 	else{
// 		node *crt=*head;
// 		while(crt->next!=NULL){
// 			crt=crt->next;

// 		}
// 		crt->next=ptr;
// 		ptr->next=NULL;
// 	}

// } 
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
	FILE *fp;
	customer custF;
	customer cus;
	employee empF;
	fp=fopen("employee.csv","r");
	char y[100];
	fgets(y,100,fp);
	empF=ReadEmployeeData(fp);
	//printf("%d %s %ld %s",empF.employee_id,empF.employee_name,empF.phno,empF.shift);
	WriteEmployeeData(empF);
	fgets(y,100,fp);
	empF=ReadEmployeeData(fp);
	WriteEmployeeData(empF);
	// printf("%d\n", custF.customer_id);
	// printf("%s\n",custF.cust_name);
	// printf("%s\n", custF.item);
	// printf("%f\n", custF.item_price);
	// printf("%d\n",custF.code);
	// printf("%s\n",custF.email_ID);
	// printf("%s\n",custF.address);
	// printf("%d\n", custF.pincode);
	// cus=ReadCustomerData(fp);
	// printf("%d\n", cus.customer_id);
	// printf("%s\n",cus.cust_name);
	// printf("%s\n", cus.item);
	// printf("%f\n", cus.item_price);
	// printf("%d\n",cus.code);
	// printf("%s\n",cus.email_ID);
	// printf("%s\n",cus.address);
	// printf("%d\n", cus.pincode);	
	fclose(fp);

	
	return 0;
}
