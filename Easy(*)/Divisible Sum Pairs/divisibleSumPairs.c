int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int ans = 0, i, j;
    for (i = 0; i < ar_count - 1; i++){
        for (j = i + 1; j < ar_count; j++){
            if ((ar[i] + ar[j]) % k == 0){
                ans++;
            }
        }
    }
    return ans;
}
