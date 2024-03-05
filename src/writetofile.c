#include "headers/writetofile.h"




// This writes to the file by checking if it doesn't end by .bat, if it doesn't it adds it and creates a file and writes to it.
BOOL writeToFile(data* data){
    int i = strlen(data->fileName);
    char buffer[BUFSIZE];
    if(data->fileName[i] != 't' && data->fileName[i = 1] != 'a' && data->fileName[i = 2] != 'b' && data->fileName[i = 3] != '.') sprintf(buffer, "%s.bat", data->fileName);
    else sprintf(buffer, "%s", data->fileName);
    HANDLE file = CreateFile(buffer, GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if(file == INVALID_HANDLE_VALUE){
        printf("Failed Creating File, Error Code %lu\n", GetLastError());
        return FALSE;
    }
    BOOL result = WriteFile(file, data->buffer, strlen(data->buffer), NULL, NULL);
    CloseHandle(file);
    return result;
}