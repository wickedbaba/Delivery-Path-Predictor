
void input(customer* c)
{
printf("\n\nEnter the Customer ID: ");
scanf("%d",&c->customer_id);
printf("Enter Customer Name: ");
scanf("%s",c->cust_name);
printf("Enter the item name: ");
scanf("%s",c->item);
printf("Enter the item price: ");
scanf("%f",&c->item_price);
printf("Enter whether item is fragile or not(0 for not 1 for yes): ");
scanf("%d",&c->code);
printf("Enter the Email ID of the customer: ");
scanf("%s",c->email_ID);
printf("Enter the address of the customer: ");
scanf("%s",&c->address);
printf("Enter the pincode of the customer: ");
scanf("%d",&c->pincode);
printf("Enter the whether the customer has prime membership or not(1 if he has and 0 if he doesn't): ")
scanf("%d",&c->prime);
}


