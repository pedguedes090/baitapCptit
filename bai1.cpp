#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanHoaTen(char str[]) {
    int len = strlen(str);
    int i = 0, j = 0;
    char result[81];
    int isNewWord = 1;

    while (i < len) {
        if (str[i] != ' ') {
            if (isNewWord) {
                result[j++] = toupper(str[i]);
                isNewWord = 0;
            } else {
                result[j++] = tolower(str[i]);
            }
        } else if (j > 0 && result[j - 1] != ' ') {
            result[j++] = ' ';
            isNewWord = 1;
        }
        i++;
    }

    if (j > 0 && result[j - 1] == ' ') {
        j--;
    }

    result[j] = '\0';
    strcpy(str, result);
}

int main() {
    int n;
    char str[81];

    printf("nhap so dong: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("nhap ten  %d: ", i + 1);
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        chuanHoaTen(str);
        printf("ket qua: %s\n", str);
    }

    return 0;
}
