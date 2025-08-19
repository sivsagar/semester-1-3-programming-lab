/*2. Word Frequency Counter

Read a text file and count the frequency of each word.

Save the results in another file in the format:

word1 → frequency
word2 → frequency
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50

struct Word {
    char word[MAX_WORD_LEN];
    int count;
};

// Convert word to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

// Remove punctuation from word
void cleanWord(char *word) {
    int i = 0, j = 0;
    char temp[MAX_WORD_LEN];

    while (word[i]) {
        if (isalpha(word[i]) || word[i] == '\'') {
            temp[j++] = word[i];
        }
        i++;
    }
    temp[j] = '\0';
    strcpy(word, temp);
}

int main() {
    FILE *inFile = fopen("input.txt", "r");
    FILE *outFile = fopen("output.txt", "w");

    if (inFile == NULL || outFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Word words[MAX_WORDS];
    int wordCount = 0;
    char temp[MAX_WORD_LEN];

    while (fscanf(inFile, "%s", temp) == 1) {
        cleanWord(temp);
        toLowerCase(temp);

        if (strlen(temp) == 0) continue;

        int found = 0;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i].word, temp) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }

        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount].word, temp);
            words[wordCount].count = 1;
            wordCount++;
        }
    }

    for (int i = 0; i < wordCount; i++) {
        fprintf(outFile, "%s → %d\n", words[i].word, words[i].count);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Word frequency counted and saved to output.txt\n");
    return 0;
}

/*OUTPUT
Hello world! This is a test. Hello again, world.
hello → 2
world → 2
this → 1
is → 1
a → 1
test → 1
again → 1

*/