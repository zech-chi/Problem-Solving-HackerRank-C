char* gameOfThrones(char* s) {
    int count_alpha[26] = {0};
    int i = 0, c, count_odd = 0;
    while (s[i]){
        c = s[i] - 97;
        count_alpha[c]++;
        i++;
    }
    
    for (int j = 0; j < 26; j++){
        if (count_alpha[j] % 2){
            count_odd++;
        }
    }
    
    if (i % 2){
        if (count_odd == 1){
            return  "YES";
        } else {
            return "NO";
        }
    } else {
        if (count_odd == 0){
            return "YES";
        } else {
            return "NO";
        }
    }

}
