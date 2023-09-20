// Files are used to persist the data 
// file = container in a storage device to store the data.

// Operation on files :
/*
Create a file. 
Open a file.
Close a file.
Read from a file.
Write in a file.
*/

// Types of files 
/*

Text files                  Binary files
Textual data                Binary data
.txt, .c                    .exe, .mp3, .jpg
*/

// File Pointer
// File is a (hidden) structure that needs to be created for opening a file.
// A file ptr that points to this structure & is used to access the file.

// FILE *fptr;

#include <stdio.h>

int main() {
    // Opening a file.
    FILE *fptr;
    // fptr = fopen("filename", mode);         //mode = read or write
    fptr = fopen("Test.txt", "r"); 

    // Reading from a file
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);

    // printf("%c\n", fgetc(fptr));         // in r mode  in Newtext.txt
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    // Closing a file 
    fclose(fptr);

    return 0;
}

// File opening modes
/*
"r" = Open to raed.                 // If the file doesn't exist, null gets stored in the pointer.
"rb" = Open to raed in binary.
"w" = Open to write             // If the file doesn't exist, a new file will get created. and if it exists, the data will get overwrite.
"wb" = Open to write in binary      
"a" = Open to append.       // If you don't want to change the existing data in a file.
*/


