#include "headers/startEditor.h" 


int main(int argc, char* argv[]){
    data data;
    data.currentLine = 0;
    if (argc < 2) {
        printf("Enter File Name: ");
        char buffer[100];
        scanf("%s", buffer);
        data.fileName = (char*)malloc(sizeof(buffer) + 1);
        strcpy(data.fileName, buffer);
    }
    else{
        data.fileName = argv[1];
    }
    engineMain(&data);

    return 0;
}