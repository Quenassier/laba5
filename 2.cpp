#include <iostream>
#include <math.h>
void inputArray();
int main(){
    inputArray();
}
void inputArray() { 
    const int arraySize = 10;
    int array[arraySize][arraySize];
    int up = 0;
    int right = 0;
    int dawn = 0;
    int left = 0;
    int value = 1;

    while (value <= pow(arraySize, 2)) {
        for (int i = up; i < arraySize - up; i++) {
            array[up][i] = value;                              
            value++;
        }
        up++;               
        for (int i = right + 1; i < arraySize - right; i++) {
            array[i][arraySize - right - 1] = value;           
            value++;
        }
        right++;                
        for (int i = arraySize - 1 - right; i >= left; i--) {
           array[arraySize - 1 - dawn][i] = value;
           value++;
        }
        dawn++;
        for (int i = arraySize - 1 - dawn; i >= up; i--) {
            array[i][left] = value;                              
            value++;
        }
        left++;          
    }
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize; j++) {
            std::cout << array[i][j] << ' ' << ' ';
        }
        std::cout << '\n';
    }
}
