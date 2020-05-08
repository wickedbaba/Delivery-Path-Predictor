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