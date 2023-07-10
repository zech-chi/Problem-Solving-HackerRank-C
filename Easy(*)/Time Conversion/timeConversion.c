char* timeConversion(char* s) {
    /*
        00:00:00
        01234567
    */
    char* ans = (char*) malloc(8 * sizeof(char));

    for (int i = 0; i < 8; i++){
        ans[i] = s[i];
    }
    // if s (PM)
    if (s[8] == 'P'){
        if (!(s[0] == '1' && s[1] == '2')){
            int x = 12 + 10 * (s[0] - 48) + (s[1] - 48);
            ans[0] = 48 + x / 10;
            ans[1] = 48 + x % 10;  
        }
    } 
    // if s (AM)
    else {
        if (s[0] == '1' && s[1] == '2'){
            ans[0] = '0';
            ans[1] = '0';
        } 
    }
    return ans;
}
