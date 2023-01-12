#include <stdio.h>
// input: sorted array of int, num target
// output: index start and end
int* array_target(int* arr, int target,int arr_size){
    int arr_r[2] = {-1,-1};
    int flag = 0;
    for (int i = 0 ; i < arr_size; i++) {
        if (arr[i] == target) {
            if (!flag) {
                flag = 1;
                arr_r[0] = i;
            }
        } else if (flag) {
            arr_r[1] = i - 1;
            flag = 0;
            break;
        }
    }
    if(flag)
        arr_r[1] = arr_size - 1;
    printf("[%d,%d]",arr_r[0],arr_r[1]);

    return arr_r;

}
int main() {
   int arr[11] = {1,1,3,4,4,4,4,4,4,5,5};
    array_target(arr,5,11);
    return 0;
}
