
customer* create(/*int customer_id, char cust_name[], char item[], float item_price, int code, char email_ID[], char address[], int prime, int pincode*/)
{
    customer* temp = (customer*)malloc(sizeof(customer));
    temp->customer_id = 0;
    strcpy(temp->cust_name,"");
    strcpy(temp->item,"");
    temp->item_price = 0.0;
    temp->code = 0;
    strcpy(temp->email_ID,"");
    strcpy(temp->address,"");
    temp->prime=0;
    temp->pincode=0;
    return temp;
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
    int l, r,largest,temp;
    l = left(i);
    r = right(i);
    if(l<n && arr[l] > arr[i])
        largest = l;
    else
        largest = i;
    if(r<n && arr[r] > arr[largest])
        largest = r;
    if(largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        maxheapify(arr,n,largest);
    }
}


void get_cust_data()
{
    customer* c = create();
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
    printf("Enter the whether the customer has prime membership or not(1 if he has and 0 if he doesn't): ");
    scanf("%d",&c->prime);
}
