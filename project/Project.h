
typedef struct employee
{
    int employee_id;
    char employee_name[20];
    long int  phno;
    char shift[10];
    int area_code;
}employee;

typedef struct customer
{   
    int customer_id;
    char cust_name[20];
    char item[25];
    float item_price;
    int code; //code represents whether the item is fragile or not 0 is fragile and 1 for not fragile
    //int phno;
    char email_ID[30];
    char address[20];
    int prime;
    int pincode;
}customer;

typedef struct emp_tree
{   
    employee e1;
    struct emp_tree *e1;
}empheap;

typedef struct cust_tree
{
    empheap e;
    customer c1;
    struct cust_tree *c1;
}cmheap;

    

//Basically we could have done with just a single structure but if we are linking a database we need multiple structures to access the databases

customer getcust(int); //to access the database customer and return a particular customer using customer_id

employee getemployee(customer); //so this function will return the employee assigned taking the customer address basically we'll make the list for each and every employee of the organization and the employee assigned will depend on the customer


void createpqueue();
void push();//insertion in the queue
del *pop();
void assign_priority();// Yet to be decided decide asap
void display_list(employee);
void print_customer(customer);
// So these functions will be in an loop which will be traversing through the employee database and we will have to make different queues for different employees

//These are functions for the  databases created mns inserting data and deleting data in them they will be an option in case ma'am wants to enter some details into our dtabses
void insert_employee();
void insert_customer();
void delete_employee();
void delete_customer();

void swap_data();
int Isempty();

//input output csv
void removeSpaces(char line[]);
void removeCommas(char line[]);
employee ReadEmployeeData(FILE *f);
customer ReadCustomerData(FILE *f);
void WriteEmployeeData(employee empF);
void WriteCustData(customer custF);
void assign_priority();

//input of customer
void input(customer* c);

customer* create();
int parent(int i);
int left(int i);
int right(int i);
void maxheapify(int arr[], int n, int i);
void get_cust_data();
