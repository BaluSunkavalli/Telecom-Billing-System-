#include <stdio.h>
#include "customer.h"
#include "billing.h"
int main()
{
    int choice;
    while(1)
    {
        printf("\n--- Telecom Billing System ---\n");
        printf("1. Add Customer\n");
        printf("2. View Customers\n");
        printf("3. Generate Bill\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            addCustomer();
        }
        else if(choice == 2)
        {
            viewCustomers();
        }
        else if(choice == 3)
        {
            int id, minutes, sms;
            float data;
            printf("Enter Customer ID: ");
            scanf("%d", &id);
            printf("Call Minutes: ");
            scanf("%d", &minutes);
            printf("SMS Count: ");
            scanf("%d", &sms);
            printf("Data Used (GB): ");
            scanf("%f", &data);
            generateBill(id, minutes, sms, data);
        }
        else if(choice == 4)
        {
            break;
        }
    }
    return 0;
}