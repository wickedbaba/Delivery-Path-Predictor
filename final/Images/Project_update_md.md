
# Prioritised Delivery Management System

--- 
 **Prioritised Delivery Management System** is used to **sort the list of customers** assigned to every employee and **create a sequence**. This sequence is the delivery pattern which is to be followed by the employee.



## Usage

You are greeted by a Main Menu asking the following options - 

  ![](https://raw.githubusercontent.com/shivang-madhwal/DS_Project_2020/master/final/Images/Img1.png)

### 1. **Admin**-
   He is allowed to access the **data of Employees and Customers**.  

The access includes- 

![](https://raw.githubusercontent.com/shivang-madhwal/DS_Project_2020/master/final/Images/Img2.png)

**1.1** Create a new entry of the employees.
			
**1.2** View existing entry of the employees.
				
**1.3** Create a new entry of the customer.
			
**1.4** View existing entry of the employees.

Therefore, on choosing admin you can select  any of the four options and use their desired function.
___
---
### 2. **Employee**- 		
He is allowed the access of-

**2.1** The **list of customers** assigned to him(the people he/she has to deliver the package to).

**2.2** The **details of customer**;
like-  Name, Phone Number , Address, If the item is fragile.

  **NOTE**-*(In 2.1)*
  
-  The customers are preassigned to a designated employee.
 	
- The priority algorithm sorts the customers according to their priority*(Priority Crieteria listed below)* and then prints them on the screen.
	
- The sequence of customers printed , is to be followed by the employee while delivering the products.

**Priority crieteria**- 
		
 1.Prime Membership.
	
2.Whether the product is fragile or not.  
___
___


#### 3. **Exit the program**.
___

## Installation

The Zip file contains-

- test_project.c

- project.h

- project.c

- ReadMe

- PDF 
___

## Contributions

 - **Ridham Bhagat**: ReadEmployeeData(),ReadCustomerData(),WriteEmployeeData(),WriteCustData(), getemployee().
 
 - **Arinjay Srivastava**: assign_priority(), create(), project.h .
 
 - **Aryaman Rana**: Readme(using Markdown), get_cust_data(), employee structure,int main().
  
 - **Shivang Madhwal**: Pdf, getcust(), customer structure.
  
 - **Prabhat Singh Gaur**: maxheapify(), input_employee(),printemployee().
___
