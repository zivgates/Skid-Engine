#include "headers/startEditor.h"



static void printStarting(){
    puts("---------------------------------------------------");
    printf("| Skid-Engine Version %0.1f                         |\n", VER);
    printf("| Copyright ZivGates LLC, All Rights Reserved     |\n");
    puts("---------------------------------------------------");


    puts("!!! I AM NOT RESPONSIBLE FOR ANY DAMAGE CAUSED BY THE RESULTS OF THIS TOOL | USE CAUTIOUSLY !!!\n");

}


static void printPrompts(){

    puts("--------------------------");
    puts("(1): Kill A Process");
    puts("(2): Print Something");
    puts("(3): Delete A File");
    puts("(4): Delete A Directory");
    puts("(5): Write Batch File");
    puts("(6): Exit Engine");
    puts("(7): Print Current File");
    puts("---------------------------");

}



void engineMain(data* data){
    clrscr();
    printStarting();
    int i = 0;
    while(1){
restartLoop:
        switch(i){
            case 0:
                editBuffer(data, "rem Skid-Engine Batch Malware File\n\n");
                i++;
                goto restartLoop;
            case 1:
                editBuffer(data, "@echo off\n");
                i++;
                goto restartLoop;
            case 2:
                editBuffer(data, "echo This Batch Malware Was Written In Skid-Engine, Are you sure you want to run this?\n");
                i++;
                goto restartLoop;
            case 3:
                editBuffer(data, "pause\n");
                i++;
                goto restartLoop;
            
        }
        printPrompts();
        int result = numberPrompt("Whats Your Choice?");
        choice(result, data);
    }
}