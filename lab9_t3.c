#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    lab9_t3();
}
void lab9_t3() {
    char text[MAX_LENGTH];
    
    printf("Введите текст: ");
    fgets(text, MAX_LENGTH, stdin);
    
 
    text[strcspn(text, "\n")] = '\0';
    
    printf("Результат: ");
    
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
          
            char upper_char = toupper(text[i]);
          
            int position = upper_char - 'A' + 1;
            printf("%d", position);
            
        
            if (text[i + 1] != '\0' && isalpha(text[i + 1])) {
                printf(" ");
            }
        } else {
        
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;
}
