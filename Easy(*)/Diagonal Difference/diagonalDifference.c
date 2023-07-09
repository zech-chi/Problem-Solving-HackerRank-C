int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primary_diagonal = 0;
    int secondory_diagonal = 0;
    for (int i = 0; i < arr_rows; i++){
        primary_diagonal += arr[i][i];
        secondory_diagonal += arr[i][arr_columns - 1 - i];
    }
    
    int diff = primary_diagonal - secondory_diagonal;
    if (diff < 0){
        diff *= -1;
    }
    
    return diff;
}
