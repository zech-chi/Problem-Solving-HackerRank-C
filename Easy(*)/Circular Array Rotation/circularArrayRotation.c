int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {
    int* ans = (int*)malloc(queries_count * sizeof(int));
    *result_count = queries_count;
    int rotation = k % a_count;
    for (int i = 0; i < queries_count; i++){
        int index = ((queries[i] - rotation) + a_count) % a_count;
        ans[i] = a[index];
    }
    return ans;
}
