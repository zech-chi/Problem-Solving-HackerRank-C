int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int* ans = (int*)malloc(2 * sizeof(int));
    *result_count = 2;
    ans[0] = 0;
    ans[1] = 0;
    
    int min = scores[0], max = scores[0];
    for (int i = 1; i < scores_count; i++){
        if (scores[i] > max){
            ans[0]++;
            max = scores[i];
        }
        else if (scores[i] < min) {
            ans[1]++;
            min = scores[i];
        }
    }
    return ans;
}
