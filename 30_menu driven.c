//Write, read, append and display data to a text file

#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

void write_data(char file_name[], FILE* file)
{
    rewind(file);
    char data[DATA_SIZE];
    printf("\nEnter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, file);
    printf("File created and saved successfully\n");
}

void display_data(char file_name[], FILE* file)
{   
    rewind(file);
    char ch;
    ch = fgetc(file);
    printf("\nThe contents of the file are: \n");
    while (ch != EOF) 
    {
        putchar(ch);
        ch = fgetc(file);
    } 
}

void append_data(char file_name[], FILE* file)
{
    char data[DATA_SIZE];
    printf("\nEnter data to append : \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, file);
    printf("Successfully appended data to file\n");
}

void main()
{
    FILE * file;
    char file_name[100];
    int choice;
    char ch;
    
    printf("Enter the file name\n"); 
    gets(file_name);

    remove(file_name); //delete file and start afresh

    file = fopen(file_name, "a+");
    if(file == NULL)
    {
        printf("Unable to create file.\n");
        exit(0);
    }

    do
    {
        printf("\nFILE MENU\n_________\n\n");
        printf("1. Write\n2. Append\n3. Read\n");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1: write_data(file_name, file);
                    break;
            case 2: append_data(file_name, file);
                    break;
            case 3: display_data(file_name, file);
                    break;
            default:printf("Invalid  choice\n");
                    exit(0);
        }
        printf("\nDo you want to continue?[y/n]\n");
        scanf("%c", &ch);
    }
    while(ch=='Y'||ch=='y');

    fclose(file);
}



