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

## Build Instructions

### Prerequisites

Make sure the following tools are installed:

* GCC (MinGW for Windows)
* CMake (version 3.10 or higher)

Check installation:

```
gcc --version
cmake --version
```

---

## Build Using CMake

### Step 1: Clone the Repository

git clone https://github.com/yourusername/Telecom-Billing-System.git
cd Telecom-Billing-System

### Step 2: Create Build Directory
mkdir build
cd build

### Step 3: Generate Build Files
For MinGW (Windows):
cmake -G "MinGW Makefiles" ..

### Step 4: Compile the Project
mingw32-make
This will generate the executable:
telecom.exe

### Step 5: Run the Program
./telecom.exe
Run the program:
./telecom.exe


## Author
Balu Sunkavalli