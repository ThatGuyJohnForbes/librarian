//
// Created by John on 15/12/2021.
//
#include <cstdio>
#include <string>

#include "librarian.h"

//TODO(John): input validation and error handling
int main(int argc, char** argv){

    if(argc == 3){
        long PID = atol(argv[2]);
//        printf_s("Given PID: %i\nGiven DLL PATH: %s\n", PID, argv[1]);
        librarian::injectDLL(argv[1],PID);
        return 0;
    } else {
        printf_s("Usage: %s PATH_TO_DLL PID\n", argv[0]);
        return 1;
    }
//    int PID;
//
//    const char* dll_to_inject = "C://temp/demo.dll";
//
//    return
}

