int minimumDistances(int a_count, int* a) {
    int min_dis = -1;
    for (int i = 0; i < a_count - 1; i++){
        for (int j = i + 1; j < a_count; j++){
            if (a[i] == a[j]){
                int new_dis = j - i;
                if (min_dis == -1 || new_dis < min_dis){
                    min_dis = new_dis;
                }
            }
        }
    }
    return min_dis;
}
