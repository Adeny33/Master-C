#include <stdio.h>
#include <stdlib.h>

void getMinMax(int array[7], int *min, int *max){
    int findmin = array[0];
    int findmax = array[0];
    for (int i = 1; i<7; i++){
        if (array[i] > findmax){
            findmax = array[i];
        }
        if (array[i] < findmin){
            findmin = array[i];
        }
    }
    *min = findmin;
    *max = findmax;
}
int main(){
    int min, max;
    int numbers[] = {4, 5, 3, 6, 8, 2, 3};
    getMinMax(numbers, &min, &max);
    printf("The minimum is %d and the maximum is %d", min, max);
    return 0;
}