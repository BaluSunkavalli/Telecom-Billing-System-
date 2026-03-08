# Telecom Billing System (C)

A simple telecom billing system implemented in C that manages customer accounts, billing cycles, and payment tracking.

## Features
- Add new customers
- View customer details
- Generate monthly bill
- Track payments
- Store records in file

## Technologies
- C Programming
- File Handling
- Structures
- Modular Programming

## Project Structure
src/
  main.c
  billing.c
  billing.h
  customer.c
  customer.h

data/
  customers.txt

## Compilation (Windows - VS Code)

gcc src/main.c src/customer.c src/billing.c -o telecom

Run:

./telecom

## Example Billing Formula

Bill = (Call Minutes × 0.5) + (SMS × 0.2) + (Data GB × 10)

## Author
Balu Sunkavalli