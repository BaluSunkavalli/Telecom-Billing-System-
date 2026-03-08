#ifndef CUSTOMER_H
#define CUSTOMER_H
typedef struct
{
    int id;
    char name[50];
    char phone[15];
} Customer;
void addCustomer();
void viewCustomers();

#endif