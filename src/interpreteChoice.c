#include "headers/interpreteChoice.h"



void choice(int choice, data* data){
    char* input;
    switch(choice){
        case 1:
            // Asks for the process name then puts the cmd into the buffer with the taskkill cmd (check killProcess() in choiceWriter.c)
            input = prompt("Enter Process Name");
            editBuffer(data, killProcess(input));
            //Sleep(3000);
            free(input);
            clrscr();
            break;
        case 2:
            // Asks for the what to print then puts the cmd into the buffer with the echo cmd (check echo() in choiceWriter.c)
            input = prompt("Enter What You Want To Print");
            editBuffer(data, echo(input));
            //Sleep(3000);
            free(input);
            clrscr();
            break;
        case 3:
            // Asks for the filename then puts the cmd into the buffer with the del cmd (check deleteFile() in choiceWriter.c)
            input = prompt("Enter FileName");
            editBuffer(data, deleteFile(input));
            //Sleep(3000);
            free(input);
            clrscr();

            break;
        case 4:
            // Asks for the directory name then puts the cmd into the buffer with the rd cmd (check deleteDirectory() in choiceWriter.c)
            input = prompt("Enter Directory Name");
            editBuffer(data, deleteDirectory(input));
            //Sleep(3000);
            free(input);
            clrscr();
            break;
        case 5:
            // Writes the entire buffer into the file
            writeToFile(data);
            clrscr();
            puts("Written File");
            break;
        case 6:
            // Exits The Process with status code 0
            ExitProcess(0);
            break;
        case 7:
            // Clears the screen and prints the entire buffer
            clrscr();
            puts(data->buffer);
            puts("\n\n");
            break;
        case 8:
            // Creates A file
            input = prompt("Enter FileName");
            editBuffer(data, createFile(input));
            //Sleep(3000);
            free(input);
            clrscr();
            break;
        case 9:
            // Creates A directory
            input = prompt("Enter Directory");
            editBuffer(data, createDirectory(input));
            //Sleep(3000);
            free(input);
            clrscr();
            break;
        case 10:
            // pauses the "malware"
            editBuffer(data, "pause");
            //Sleep(3000);
            clrscr();
            break;
        case 11:
            input = prompt("Enter Custom Commands");
            editBuffer(data, input);
            //Sleep(3000);
            free(input);
            clrscr();
        default:
            // when incorrect
            clrscr();
            printf("Incorrect Choice\n");
            break;
    }
    // adds a new line to the buffer since its bugs out for some reason without this
    editBuffer(data, "\n");
}