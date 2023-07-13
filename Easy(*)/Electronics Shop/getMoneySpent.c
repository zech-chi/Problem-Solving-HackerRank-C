int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {

    int i, j, max = -1;
    for (i = 0; i < keyboards_count; i++){
        for (j = 0; j < drives_count; j++){
            int x = keyboards[i] + drives[j];
            if (x <= b && x > max){
                max = x;
            }
        }
    }
    return max;
}
