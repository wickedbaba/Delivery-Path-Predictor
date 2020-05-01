// Basically different structures so that we can access the databases namely customer database and employee database
//edit
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
    int code; //so this code represents whether the item is fragile or not 0 is fragile and 1 for not fragile if you want we can change it to char
    //int phno;
    char email_ID[30];
    char address[20];
    int prime;
    int pincode;
}customer;

typedef struct delivery
{
    employee emp;//so this is to have all the employee fields inside
    customer cust;//""""" customer"""
    int priority;
    struct delivery *next;
}del;

//Basically we could have done with just a single structure but if we are linking a database we need multiple structures to access the databases

customer getcust(int); //to access the database customer and return a particular customer using customer_id

employee getemployee(customer); //so this function will return the employee assigned taking the customer address basically we'll make the list for each and every employee of the organization and the employee assigned will depend on the customer

//Queue functions so these functions for a particular employee will make the list of customers for that day we get one prob here that database has to be updated daily
void createpqueue();
void push();//insertion in the queue
del *pop();
void assign_priority();// Yet to be decided decide asap
void display_list(employee);
// So these functions will be in an loop which will be traversing through the employee database and we will have to make different queues for different employees

//These are functions for the databases created mns inserting data and deleting data in them they will be an option in case ma'am wants to enter some details into our dtabses
void insert_employee();
void insert_customer();
void delete_employee();
void delete_customer();

// Small functions in case we need it
void swap_data();
int Isempty();

// So basically we have 10 major functions in the program so we have to work accordingly these function we'll divide and then compile inside main
// Also think about how our main function should look All the printf should be used carefully because the output should look good



//input output csv
