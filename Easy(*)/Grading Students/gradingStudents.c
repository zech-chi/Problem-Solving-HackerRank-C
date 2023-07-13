int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int* ans = (int*)malloc(grades_count * sizeof(int));
    *result_count = grades_count;

    for (int i = 0; i < grades_count; i++) {
        int r = grades[i] % 10;

        if (grades[i] < 38) {
            ans[i] = grades[i];
        }
        else if (r == 3 || r == 4) {
            ans[i] = grades[i] - r + 5;
        }
        else if (r == 8 || r == 9) {
            ans[i] = grades[i] - r + 10;
        }
        else {
            ans[i] = grades[i];
        }
    }

    return ans;
}
