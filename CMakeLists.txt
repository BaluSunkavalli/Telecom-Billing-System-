cmake_minimum_required(VERSION 3.10)

project(TelecomBillingSystem C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)

# Source files
set(SOURCES
    src/main.c
    src/customer.c
    src/billing.c
)

add_executable(telecom ${SOURCES})