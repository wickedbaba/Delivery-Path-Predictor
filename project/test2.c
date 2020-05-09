#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Project.h"
#include<string.h>
int main(int argc, char const *argv[])
{
	customer cus[100];
	int len=0;
	//pass len as a parameter, it will tell the number of rows
	ReadCustomerData(cus,&len);
	for(int j=0;j<=len;j++){
		printf("\n%d,%s,%s,%f,%d,%s,%s,%d,%d",cus[j].customer_id,cus[j].cust_name,cus[j].item,cus[j].item_price,cus[j].code,cus[j].email_ID,cus[j].address,cus[j].prime,cus[j].pincode);
	}
	employee e[100];
	ReadEmployeeData(e,&len);
	employee temp=e[2];
	WriteEmployeeData(temp);

	return 0;
}