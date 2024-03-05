#pragma once

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>


// Yes I Know
#define BUFSIZE 600000

#define VER 0.1

typedef struct _data{
    char buffer[BUFSIZE];
    char prevBuffer[BUFSIZE];
    int currentLine;
    char* fileName;
    char* lineToWrite;
} data;