#include <iostream>
#define N 3
int main() {

    int cases = 1;
    int j = 1;
    int i = 0;
    int arr[N][N];

    for (i; i < N; i++) {
        arr[0][i] = cases;
        cases++;
    }
    for (j; j < N; j++) {
        arr[j][i - 1] = cases;
        cases++;
    }
    for (int i = N - 2; i >= 0; i--) {
        arr[j - 1][i] = cases;
        cases++;
    }
    for (int i = 0; i <= N - 2; i++) {
        arr[1][i] = cases;
        cases++;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << arr[i][j];

        }
        std::cout << '\n';
    }
}
