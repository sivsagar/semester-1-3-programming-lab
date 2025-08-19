/*4. Copy File with Case Conversion

Read contents of a file and copy them into another file.

While copying:

Convert all lowercase letters to uppercase.

Convert all uppercase letters to lowercase.
*/
#include <stdio.h>
#include <ctype.h>

void copyWithCaseConversion(const char *sourceFile, const char *targetFile) {
    FILE *src = fopen(sourceFile, "r");
    FILE *dest = fopen(targetFile, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char ch;

    while ((ch = fgetc(src)) != EOF) {
        if (islower(ch)) {
            fputc(toupper(ch), dest);
        } else if (isupper(ch)) {
            fputc(tolower(ch), dest);
        } else {
            fputc(ch, dest);
        }
    }

    printf("Contents copied with case conversion to '%s'.\n", targetFile);

    fclose(src);
    fclose(dest);
}

int main() {
    const char *source = "input.txt";
    const char *target = "output.txt";

    copyWithCaseConversion(source, target);

    return 0;
}


/*OUTPUT
📄 input.txt
Hello World!
This is A tEsT.

📄 Output: output.txt
hELLO wORLD!
tHIS IS a TeSt.*/