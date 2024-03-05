#include "headers/startEditor.h" 


int main(int argc, char* argv[]){
    data data;
    data.currentLine = 0;
    // If the cmdline is empty, asks for a file
    if (argc < 2) {
        printf("Enter File Name: ");
        char buffer[100];
        scanf("%s", buffer);
        data.fileName = (char*)malloc(sizeof(buffer) + 1);
        strcpy(data.fileName, buffer);
    }
    // If it has a file name in the cmdline, it uses that
    else{
        data.fileName = argv[1];
    }
    // Enters engineMain and starts the malware-engine
    engineMain(&data);

    return 0;
}