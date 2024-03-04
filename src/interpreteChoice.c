#include "headers/interpreteChoice.h"



void choice(int choice, data* data){
    char* input;
    switch(choice){
        case 1:
            input = prompt("Enter Process Name");
            editBuffer(data, killProcess(input));
            //Sleep(3000);
            free(input);
            clrscr();

            break;
        case 2:
            input = prompt("Enter What You Want To Print");
            editBuffer(data, echo(input));
            //Sleep(3000);
            free(input);
            clrscr();
            break;
        case 3:
            input = prompt("Enter FileName");
            editBuffer(data, echo(input));
            //Sleep(3000);
            free(input);
            clrscr();

            break;
        case 4:
            input = prompt("Enter Directory Name");
            editBuffer(data, echo(input));
            
            //Sleep(3000);
            free(input);
            clrscr();
            break;
        case 5:
            writeToFile(data);
            break;
        case 6:
            ExitProcess(0);
            break;
        case 7:
            clrscr();
            puts(data->buffer);
            puts("\n\n");
            break;
        default:
            printf("Incorrect Choice\n");
            break;
    }


    
}