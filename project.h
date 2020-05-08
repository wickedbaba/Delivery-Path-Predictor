typedef struct customer
{
    int customer_id;
    char cust_name[20];
    char item[25];
    float item_price;
    int code;
    long int phno;
    char email_ID[30];
    char address[20];
    int prime;
    int pincode;
}customer;

typedef struct employee
{
    int employee_id;
    char employee_name[20];
    long int  phno;
    char shift[10];
    int area_code;
    customer c[100];
}employee;

void swap_data();
int Isempty();

void ReadEmployeeData(employee *,int *);
void ReadCustomerData(customer *,int *);
void WriteEmployeeData(employee);
void WriteCustData(customer);

void removeSpaces(char *);
void assign_priority();
void removeCommas(char *);

void input(customer *);
customer* create();
void buildmaxheap(int *,int);
int parent(int);
int left(int);
int right(int);
void maxheapify(int *,int,int);
void get_cust_data();

void input_employee(employee *);
employee getemployee(customer);
void asscustemp(employee *,customer *,int,int);
