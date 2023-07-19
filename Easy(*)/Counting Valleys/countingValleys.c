int countingValleys(int steps, char* path) {
    int count_valley = 0;
    int h = 0;
    int prev_h = 0;
    for (int i = 0; i < steps; i++){
        prev_h = h;
        if (path[i] == 'U'){
            h++;
        }
        else{
            h--;
        }
        
        if (h == 0 && prev_h < 0){
            count_valley++;
        }
    }
    return count_valley;
}
