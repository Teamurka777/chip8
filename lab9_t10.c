#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50
#define MAX_INPUT_LENGTH 1000

int main() {
    lab9_t10();
}
void lab9_t10() {
    char input[MAX_INPUT_LENGTH];
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int word_count = 0;
    
    char target_char;
    int k;
    int result_count = 0;


    printf("Введите текст (не более %d символов):\n", MAX_INPUT_LENGTH - 1);
    fgets(input, MAX_INPUT_LENGTH, stdin);

   
    input[strcspn(input, "\n")] = '\0';

   
    printf("Введите искомый символ: ");
    scanf("%c", &target_char);
    getchar();

  
    printf("Введите количество повторений символа (k): ");
    scanf("%d", &k);

   
    char *token = strtok(input, " \t\n.,;:!?\"()[]{}");
    while (token != NULL && word_count < MAX_WORDS) {
        strncpy(words[word_count], token, MAX_WORD_LENGTH - 1);
        words[word_count][MAX_WORD_LENGTH - 1] = '\0'; 
        word_count++;
        token = strtok(NULL, " \t\n.,;:!?\"()[]{}");
    }

   
    for (int i = 0; i < word_count; i++) {
        int char_count = 0;
        
       
        for (int j = 0; words[i][j] != '\0'; j++) {
            if (words[i][j] == target_char) {
                char_count++;
            }
        }
        
       
        if (char_count == k) {
            result_count++;
        }
    }

    // Вывод результата
    printf("\nРезультат:\n");
    printf("Символ '%c' встречается ровно %d раз в %d словах.\n", target_char, k, result_count);

    if (result_count > 0) {
        printf("Слова, удовлетворяющие условию:\n");
        for (int i = 0; i < word_count; i++) {
            int char_count = 0;
            for (int j = 0; words[i][j] != '\0'; j++) {
                if (words[i][j] == target_char) {
                    char_count++;
                }
            }
            if (char_count == k) {
                printf("  - %s\n", words[i]);
            }
        }
    }

    return 0;
}


