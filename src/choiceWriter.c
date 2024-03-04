#include "headers/choiceWriter.h"



char* killProcess(char* process){
    char buffer[BUFSIZE];
    sprintf(buffer, "taskkill /f /im %s", process);
    char* result = (char*)malloc(BUFSIZE + 1);
    strcpy(result, buffer);
    return result;
}

char* echo(char* content){
    char buffer[BUFSIZE];
    sprintf(buffer, "echo %s", content);
    char* result = (char*)malloc(BUFSIZE + 1);
    strcpy(result, buffer);
    return result;
}

char* deleteFile(char* file){
    char buffer[BUFSIZE];
    sprintf(buffer, "del /f /q %s", file);
    char* result = (char*)malloc(BUFSIZE + 1);
    strcpy(result, buffer);
    return result;
}

char* deleteDirectory(char* file){
    char buffer[BUFSIZE];
    sprintf(buffer, "rd /s /q %s", file);
    char* result = (char*)malloc(BUFSIZE + 1);
    strcpy(result, buffer);
    return result;
}