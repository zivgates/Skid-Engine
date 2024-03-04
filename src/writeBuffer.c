#include "headers/writeBuffer.h"



BOOL editBuffer(data* data, char* stringToAdd){
    if(!stringToAdd) return FALSE;
    int lineNumber = strlen(stringToAdd);
    if(data->currentLine + lineNumber + 1 > BUFSIZE){
        printf("Buffer Limit Reached\n");
        return FALSE;
    }
    strcat(data->buffer, stringToAdd);
    if(data->buffer[data->currentLine - 1] != '\n'){
        strcat(data->buffer, "\n");
    }
    data->currentLine = strlen(data->buffer);

    return TRUE;
}

BOOL editBufferWithin(data* data){
    if(!data->lineToWrite) return FALSE;
    int lineNumber = strlen(data->lineToWrite);
    if(data->currentLine + lineNumber + 1 > BUFSIZE){
        printf("Buffer Limit Reached\n");
        return FALSE;
    }
    strcat(data->buffer, data->lineToWrite);
    if(data->buffer[data->currentLine - 1] != '\n'){
        strcat(data->buffer, "\n");
    }
    data->currentLine = strlen(data->buffer);

    return TRUE;
}