#include "headers/choiceWriter.h"


// Uses the taskkill cmd with /f (force) and /im (image name)
char* killProcess(char* process){
    char buffer[BUFSIZE];
    sprintf(buffer, "taskkill /f /im %s", process);
    char* result = strdup(buffer);
    return result;
}

// Uses the echo cmd
char* echo(char* content){
    char buffer[BUFSIZE];
    sprintf(buffer, "echo %s", content);
    char* result = strdup(buffer);
    return result;
}

// uses the del cmd with /f (force) and /q (quiet)
char* deleteFile(char* file){
    char buffer[BUFSIZE];
    sprintf(buffer, "del /f /q %s", file);
    char* result = strdup(buffer);
    return result;
}

// uses the rd cmd with /s (removes subdirectories) and /q (quiet)
char* deleteDirectory(char* file){
    char buffer[BUFSIZE];
    sprintf(buffer, "rd /s /q %s", file);
    char* result = strdup(buffer);
    return result;
}

char* createDirectory(char* file){
    char buffer[BUFSIZE];
    sprintf(buffer, "md %s", file);
    char* result = strdup(buffer);
    return result;
}


char* createFile(char* file){
    char buffer[BUFSIZE];
    sprintf(buffer, "echo Empty File > %s", file);
    char* result = strdup(buffer);
    return result;
}