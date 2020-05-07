FILE *fp;
customer c1;
employee e1;

//Customer input

printf("Welcome\n");
printf("Enter customer ID : ");
scanf("%d",&c1.employee_id);
printf("Enter customer name : ");
scanf("%s",&c1.cust_name);
printf("Enter item name : ");
scanf("%s",&c1.item);
printf("Enter item price : ");
scannf("%d",c1.item_price);
printf("Is the item fragile?(for fragile press 1 for not fragile press 0) : ");
scanf("%d",&c1.code);
printf("Enter email id : ");
scanf("%s",&c1.email_ID);
printf("Enter address : ");
scanf("%s",&c1.address);
printf("Is the customer having prime membership? : ");
scanf("%d",&c1.prime);
printf("Pincode : ");
scanf("&d",&c1.pincode);

//Employee Input

printf("Enter employee ID : ");
scanf("%d",&e1.employee_id);
printf("Enter employee name : ");
scanf("%s",&employee_name);
printf("Enter phone number : ");
scanf("%ll",&e1.phno);
printf("Enter shift : ");
scanf("%s",&e1.shift);
printf("Enter area code : ");
scanf("%d",&e1.area_code);


//output for delivery priority

//a for loop so that details of all customers are printed in the same format
{
printf("---------------------\n");
printf("1. Customer's Name-%s\n",c1.cust_name);

printf("2. Customer's Address-%s\n ");
//customer ka address kaise input karna hai 
printf("3. Pincode :%d ",c1.pincode);

if(c1.code==0)
printf("4. Item is  Fragile \n");
}
