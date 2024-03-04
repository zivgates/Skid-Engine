#include "headers/prompts.h"




char* prompt(char* question){
    // Prints The Question
    printf("%s: ", question);

    // This Gets The Handle Of the StdIn and Reads it
    char buffer[BUFSIZE];
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    ReadFile(hStdin, buffer, BUFSIZE, NULL, NULL);

    // This parses it and removes the \n (newline) character
    char* result = (char*)malloc(BUFSIZE + 1);
    strcpy(result, buffer);
    char* finish = strtok(result, "\n");
    return finish;
}

static char* promptWithoutQuestion(){
    // Prints The Question

    // This Gets The Handle Of the StdIn and Reads it
    char buffer[BUFSIZE];
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    ReadFile(hStdin, buffer, BUFSIZE, NULL, NULL);

    // This parses it and removes the \n (newline) character
    char* result = (char*)malloc(BUFSIZE + 1);
    strcpy(result, buffer);
    char* finish = strtok(result, "\n");
    return finish;
}

BOOL yesNoPrompt(char* question){
Start:
    printf("%s [y/n]: ", question);
    char* result = promptWithoutQuestion();
    toLowerCase(result);
    BOOL answer;
    switch(result[0]){
        case 'y':
            answer = TRUE; 
            break;
        case 'n':
            answer = FALSE;
            break;
        default:
            free(result);
            goto Start;
    }
    free(result);
    return answer;
}

int numberPrompt(char* question){
Start:
    printf("%s [number]: ", question);
    char* result = promptWithoutQuestion();
    int intResult = atoi(result);
    if(!intResult){
        free(result);
        goto Start;
    }
    free(result);
    return intResult;
}
