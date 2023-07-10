void bubble_sort(int length, int *arr){
    int temp;
    for (int i = 0; i < length - 1; i++){
        for (int j = 0; j < length - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
            }
        }
    }
}

void miniMaxSum(int arr_count, int* arr) {
    bubble_sort(arr_count, arr);
    long int Min, Max;
    int n = arr_count;
    Min = (long)arr[0] + (long)arr[1] + (long)arr[2] + (long)arr[3];
    Max = (long)arr[n - 4] + (long)arr[n - 3] + (long)arr[n - 2] + (long)arr[n - 1];
    printf("%ld %ld", Min, Max);
}
