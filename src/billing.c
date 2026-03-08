#include <stdio.h>
#include "billing.h"
#define CALL_RATE 0.5
#define SMS_RATE 0.2
#define DATA_RATE 10
void generateBill(int id, int minutes, int sms, float data)
{
    float callCost = minutes * CALL_RATE;
    float smsCost = sms * SMS_RATE;
    float dataCost = data * DATA_RATE;
    float total = callCost + smsCost + dataCost;
    printf("\n----- BILL -----\n");
    printf("Customer ID: %d\n", id);
    printf("Call Charges: %.2f\n", callCost);
    printf("SMS Charges: %.2f\n", smsCost);
    printf("Data Charges: %.2f\n", dataCost);
    printf("Total Bill: %.2f\n", total);
}