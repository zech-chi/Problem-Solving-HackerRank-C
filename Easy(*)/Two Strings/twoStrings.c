char* twoStrings(char* s1, char* s2) {
    int is_exist_alpha_s1[26] = {0};
    int is_exist_alpha_s2[26] = {0};
    int i = 0;
    while (s1[i]){
        int c = s1[i] - 97;
        is_exist_alpha_s1[c] = 1;
        i++;
    }
    
    int j = 0;
    while (s2[j]){
        int c = s2[j] - 97;
        is_exist_alpha_s2[c] = 1;
        j++;
    }
    
    for (int k = 0; k < 26; k++){
        int v_s1 = is_exist_alpha_s1[k];
        int v_s2 = is_exist_alpha_s2[k];
        if (v_s1 == 1 && v_s2){
            return "YES";
        }
    }
    return "NO";
}
