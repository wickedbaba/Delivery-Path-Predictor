#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Project.h"
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
int isEmpty(const char *str)
{
    char ch;

    do
    {
        ch = *(str++);
        if(ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\0')
            return 0;
    } while (ch != '\0');
    return 1;
}
void removeEmptyLines(char name[])
{	FILE *srcFile;
    FILE *tempFile;
    srcFile  = fopen(name, "r");
    tempFile = fopen("remove-blanks.csv", "w");
    rewind(srcFile);
    char buffer[1000];

    while ((fgets(buffer, 1000, srcFile)) != NULL)
    {
        if(!isEmpty(buffer))
            fputs(buffer, tempFile);
    }
    fclose(srcFile);
    fclose(tempFile);
    remove("employee.csv");
    rename("remove-blanks.csv", name);
    
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
	FILE *f;;
	f=fopen("employee.csv","a");
		rewind(f);
		fseek(f, 0, SEEK_END);
		fprintf(f,"\n%d,%s,%ld,%s,%d\r\n",empF.employee_id,empF.employee_name,empF.phno,empF.shift,empF.area_code);
	fclose(f);
	removeEmptyLines("employee.csv");
}
void WriteCustData(customer custF)
{
	FILE *f;
	
	f=fopen("customer.csv","a");	
	rewind(f);
	fseek(f, 0, SEEK_END);
	fprintf(f,"\n%d,%s,%s,%f,%d,%s,%s,%d\n",custF.customer_id,custF.cust_name,custF.item,custF.item_price,custF.code,custF.email_ID,custF.address,custF.pincode);
	fclose(f);
	removeEmptyLines("customer.csv");
}
