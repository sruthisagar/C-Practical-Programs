//Write, read, append and display data to a text file

#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

FILE * open_file(char file_name[], char mode[])
{
    FILE * file;
    file = fopen(file_name, mode);

    if(file == NULL)
    {
        printf("Unable to create file.\n");
        exit(0);
    }

    return file;
}

void write_data(char file_name[])
{
    FILE * file;
    file = open_file(file_name, "w");
    char data[DATA_SIZE];
    printf("\nEnter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, file);
    fclose(file);
    printf("File created and saved successfully\n\n");
}

void display_data(char file_name[])
{
    FILE * file;
    char ch;
    file = open_file(file_name, "r");
    ch = fgetc(file);
    printf("The contents of the file are: \n");
    while (ch != EOF) 
    {
        putchar(ch);
        ch = fgetc(file);
    } 
    fclose(file);
}

void append_data(char file_name[])
{
    FILE * file;
    file = open_file(file_name, "a");
    char data[DATA_SIZE];
    printf("\nEnter data to append : \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, file);
    fclose(file);
    printf("Successfully appended data to file\n\n");
}

void main()
{
    char file_name[100];
    printf("Enter the file name\n"); 
    gets(file_name);
    write_data(file_name);
    display_data(file_name);
    append_data(file_name);
    display_data(file_name);
}



