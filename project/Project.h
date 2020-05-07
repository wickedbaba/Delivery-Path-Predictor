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
    long int phno;
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

void swap_data();
int Isempty();

//input output csv
void removeSpaces(char line[]);
void removeCommas(char line[]);
employee ReadEmployeeData(FILE *f);
customer ReadCustomerData(FILE *f);
void WriteEmployeeData(employee empF);
void WriteCustData(customer custF);

//Assign priority
void assign_priority();

//input/output of customer
void input(customer* c);
customer* create();
int parent(int i);
int left(int i);
int right(int i);
void maxheapify(int arr[], int n, int i);
void get_cust_data();
customer getcust(int); //to access the database customer and return a particular customer using customer_id

//input/output of employees
void input_employee(employee* e1);
employee getemployee(customer); //return the employee assigned taking the customer address
