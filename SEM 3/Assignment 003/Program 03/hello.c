/*3. Merge Two Files

Take two text files as input and merge their contents into a third file.

Add line numbers while writing into the new file.
*/
#include <stdio.h>
#include <stdlib.h>

void mergeFilesWithLineNumbers(const char *file1, const char *file2, const char *outputFile) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *out = fopen(outputFile, "w");

    if (fp1 == NULL || fp2 == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char line[1024];
    int lineNumber = 1;

    // Read from first file
    while (fgets(line, sizeof(line), fp1)) {
        fprintf(out, "%d: %s", lineNumber++, line);
        if (line[strlen(line)-1] != '\n')  // Add newline if missing
            fprintf(out, "\n");
    }

    // Read from second file
    while (fgets(line, sizeof(line), fp2)) {
        fprintf(out, "%d: %s", lineNumber++, line);
        if (line[strlen(line)-1] != '\n')  // Add newline if missing
            fprintf(out, "\n");
    }

    printf("Files merged successfully into '%s'.\n", outputFile);

    fclose(fp1);
    fclose(fp2);
    fclose(out);
}

int main() {
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *outputFile = "merged.txt";

    mergeFilesWithLineNumbers(file1, file2, outputFile);

    return 0;
}
/*OUTPUT
Example: file1.txt
This is file one.
It has a few lines.

Example: file2.txt
This is file two.
Another few lines here.

Output: merged.txt
1: This is file one.
2: It has a few lines.
3: This is file two.
4: Another few lines here.

*/