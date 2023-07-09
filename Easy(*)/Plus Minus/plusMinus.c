void plusMinus(int arr_count, int* arr) {
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    
    for (int i = 0; i < arr_count; i++){
        if (arr[i] > 0) {
            positives++;
        } else if (arr[i] < 0) {
            negatives++;
        } else {
            zeros++;
        }
    }
    
    double proportion_positives = (double)positives / arr_count;
    double proportion_negatives = (double)negatives / arr_count;
    double proportion_zeros = (double)zeros / arr_count;
    
    printf("%f\n", proportion_positives);
    printf("%f\n", proportion_negatives);
    printf("%f", proportion_zeros);
}
