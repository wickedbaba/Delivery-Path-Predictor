void print(customer* c)
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
printf("The pincode of the customer: %d",c->pincode);
printf("The customer has prime membership or not(1 if he has and 0 if he doesn't): %d",c->prime);
}
