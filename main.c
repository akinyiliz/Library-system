/*
   Project:  County Library System
   Author:   Elizabeth Akinyi Odhiambo
   Compiler: GNC GCC
   Language: C 99
   License:  MIT

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable Declaration
    char student_name, student_id, student_email, book_borrowed, date, time;

    printf("\tCounty Library System\n");

    printf("Enter Student Name: ");
    scanf("%d", &student_name);
    printf("Student Id: ");
    scanf("%d", &student_id);
    printf("Student Email: ");
    scanf("%d", &student_email);
    printf("Book Borrowed: ");
    scanf("%d", &book_borrowed);
    printf("Date: ");
    scanf("%d", &date);
    printf("Time: ");
    scanf("%d", &time);

    //Outputs
    printf("Student Name:     %d\n", student_name);
    printf("Student Id:       %s\n", student_id);
    printf("Student Email:    %s\n", student_email);
    printf("Book    Borrowed: %d\n", book_borrowed);
    printf("Date: %d\n", date);
    printf("Time: %d\n", time);
}

