#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
 
using namespace std;

// method sorts strings alphabetically
static void sortStrings(int argc, char** argv){
    for (int i = 1; i < argc; i++){
        for (int j = i + 1; j < argc; j++) {
            int compare = strcmp(argv[i], argv[j]);
            if (compare > 0) {
                char* holder = 0;
                holder = argv[i];
                argv[i] = argv[j];
                argv[j] = holder;
            }
        }
    }
}

// method prints strings
static void printStrings(int argc, char** argv) {
    for (int i = 0; i < argc; i++) {
        cout << i << "\t" << argv[i] << endl;
    }
}

int main(int argc, char** argv)
{
    // sort strings alphabetically from command line
    sortStrings(argc, argv);

    // print strings
    printStrings(argc, argv);

    return 0;
}