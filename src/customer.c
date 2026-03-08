#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
void addCustomer()
{
    FILE *fp = fopen("data/customers.txt", "a");
    Customer c;
    printf("Enter Customer ID: ");
    scanf("%d", &c.id);
    printf("Enter Name: ");
    scanf("%s", c.name);
    printf("Enter Phone: ");
    scanf("%s", c.phone);
    fprintf(fp, "%d %s %s\n", c.id, c.name, c.phone);
    fclose(fp);
    printf("Customer Added Successfully\n");
}
void viewCustomers()
{
    FILE *fp = fopen("data/customers.txt", "r");
    Customer c;
    printf("\nCustomer List\n");
    while(fscanf(fp, "%d %s %s", &c.id, c.name, c.phone) != EOF)
    {
        printf("ID: %d Name: %s Phone: %s\n", c.id, c.name, c.phone);
    }
    fclose(fp);
}