#include <stdio.h>

void nhapMaTran(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void tinhTich(int a[][100], int n, int m, int result[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += a[i][k] * a[j][k];
            }
        }
    }
}

void inMaTran(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int test = 1; test <= T; test++) {
        int n, m;
        int a[100][100], result[100][100];
        scanf("%d %d", &n, &m);

        nhapMaTran(a, n, m);
        tinhTich(a, n, m, result);

        printf("Test %d:\n", test);
        inMaTran(result, n, n);
    }

    return 0;
}
