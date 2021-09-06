/*
** EPITECH PROJECT, 2019
** fire tree
** File description:
** okay
*/

void tree(int size)
{
    int x = 0;
    int tree;
    int tree_counter;
    int stars;
    
    if (special_cases(size) != 1) {
        for (int line = 1; line <= get_lines(size); line++) {
            print_line(line, size, x);
        }
        print_trunk(size);
    }
}

int special_cases(int size)
{
    if (size < 0) {
        //write(2, "Invalid size\n", 14);
        return (1);
    }
    else if (size == 0)
        return (1);
    else
        return (0); 
}

void print_line(int line, int size)
{
    int last_line = get_lines(size);
    int tree = count_tree(line);
    int stars = get_stars_line(line, tree);
    int stars_last_line = get_stars_line(last_line, size - 1);
    
    for (int i = 0; i < (stars_last_line - stars)/2; i++) {
        my_putchar(' ');        
    }
    for (int i = 0; i < stars; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

int get_lines(int size)
{
    int tree_lines = 4;

    for (int i = tree_lines; i < size+3; i++)
        tree_lines += i+1;
    return(tree_lines);
}

int get_stars_line(int line, int tree)
{
    int x = 0;
    int tree_counter = ( (tree) );
    int stars;
    while (tree_counter > 0) {
        tree_counter--;
        x += 2;
        x += tree_counter/2;
    }
    stars = line * 2 - 1 - (x*2);
    return (stars);
}

int count_tree(int line)
{
    int tree = 0;
    while (line > 4 ) {
        line = line - (4 + tree + 1);
        tree++;
    }
    return (tree);
}

int print_trunk(int size)
{
    int trunk_pipes = size;
    int free = ((get_stars_line( get_lines(size), size-1) - trunk_pipes ) / 2);
    
    if (size%2 == 0) {
        trunk_pipes = size+1;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < free; j++)
            my_putchar(' ');
        for (int j = 0; j < trunk_pipes; j++)
            my_putchar('|');
        my_putchar('\n');
    }
}
