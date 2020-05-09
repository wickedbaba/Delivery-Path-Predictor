#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Project.h"

void WriteEmployeeData(employee empF){
	FILE *f;;
	f=fopen("employee.csv","a");
		rewind(f);
		fseek(f, 0, SEEK_END);
		fprintf(f,"%d,%s,%ld,%s,%d\n",empF.employee_id,empF.employee_name,empF.phno,empF.shift,empF.area_code);
	
	fclose(f);
	
	
}
void WriteCustData(customer custF){
	FILE *f;
	
	f=fopen("customer.csv","a");
	rewind(f);
	fseek(f, 0, SEEK_END);
	fprintf(f,"%d,%s,%s,%f,%d,%s,%s,%d\n",custF.customer_id,custF.cust_name,custF.item,custF.item_price,custF.code,custF.email_ID,custF.address,custF.pincode);
	fclose(f);
}

int main(int argc, char const *argv[])
{	employee e[100];
	int len=0;
	ReadEmployeeData(e,&len);
	WriteEmployeeData(e[2]);
	// WriteEmployeeData(e[3]);
	
	
	/* code */
	return 0;
}


// void WriteCustData(customer custF){
// 	FILE *f;
	
// 	f=fopen("customer.csv","a");

// 	if(firstc==0){
// 	fprintf(f,"%d,%s,%s,%f,%d,%s,%s,%d",custF.customer_id,custF.cust_name,custF.item,custF.item_price,custF.code,custF.email_ID,custF.address,custF.pincode);
// 	firstc=1;
// 	}
// 	else{
// 		fprintf(f,"\n%d,%s,%s,%f,%d,%s,%s,%d,%d",custF.customer_id,custF.cust_name,custF.item,custF.item_price,custF.code,custF.email_ID,custF.address,custF.prime,custF.pincode);
// 	}
// 	fclose(f);
// }