void print_pattern(int spaces, int stars){
    int spaces = 4, stars = 1, number_of_lines = 5;
    int i, j;
    for(i = 1; i <= spaces; i++)
        printf(" ");                //print spaces
    for(j = 1; j <= stars; j++)
        printf("*");                //print stars
    if(number_of_lines > 0){
        number_of_lines -= 1;
        //call recursively if all lines are not printed
        print_pattern(spaces - 1, stars + 1);
    }
}
