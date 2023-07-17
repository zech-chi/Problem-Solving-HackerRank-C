char* catAndMouse(int x, int y, int z) {
    int cat_a_distance = abs(x - z);
    int cat_b_distance = abs(y - z);
    
    if (cat_a_distance < cat_b_distance){
        return "Cat A";
    }
    else if (cat_a_distance > cat_b_distance){
        return "Cat B";
    }
    return "Mouse C";
}
