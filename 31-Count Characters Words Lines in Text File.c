//Count no of characters, words and lines in a text file

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

void display_data(char file_name[])
{
    FILE * file;
    char ch;
    file = open_file(file_name, "r");
    ch = fgetc(file);
    printf("The contents of the file - %s : \n",file_name);
    while (ch != EOF) 
    {
        putchar(ch);
        ch = fgetc(file);
    } 
    fclose(file);
}


void main()
{
    FILE * input_file, * output_file;
    char file_name[100];
    char data[DATA_SIZE], ch;
    int characters, words, lines;

    puts("Enter the file name:");
    fgets(file_name, 100, stdin);

    input_file = open_file(file_name, "w+");

    printf("\nEnter contents to store in file and press $ in the next line to stop \n");
    ch=getchar();
    while(ch!='$')
    {
        fputc(ch, input_file);
        ch=getchar();
    }

    characters = words = lines = 0;
    rewind(input_file);
    ch=fgetc(input_file);
    while (ch != EOF)
    {
        characters++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;

        ch = fgetc(input_file);
    }

    output_file = open_file("count.txt", "w");

    fprintf(output_file, "Total characters = %d\n", characters);
    fprintf(output_file, "Total words = %d\n", words);
    fprintf(output_file, "Total lines = %d\n", lines);

    fclose(input_file);
    fclose(output_file);

    display_data("count.txt");
  
}
