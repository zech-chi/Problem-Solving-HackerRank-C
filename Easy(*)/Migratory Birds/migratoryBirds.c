int migratoryBirds(int arr_count, int* arr) {
    int types_of_birds[5] = {0};
    for (int i = 0; i < arr_count; i++){
        types_of_birds[arr[i] - 1]++;
    }
    int max = types_of_birds[0];
    int ans = 1;
    for (int j = 1; j < 5; j++){
        if (max < types_of_birds[j]){
            max = types_of_birds[j];
            ans = j + 1;
        }
    }
    return ans;
}
