#include <stdio.h>
#include "lexical.h"

int main() {
   FILE* file = fopen("filename.txt", "r");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // Print the read line
    }
    return 0;
}