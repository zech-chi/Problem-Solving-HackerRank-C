long aVeryBigSum(int ar_count, long* ar) {
    long int sum = 0;
    for (int i = 0; i < ar_count; i++){
        sum += ar[i];
    }
    return sum;
}
