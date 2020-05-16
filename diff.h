#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void version(void);
void todo_list(void);
void loadfiles(const char* filename1, const char* filename2);
void print_option(const char* name, int value);
void diff_output_conflict_error(void);
void setoption(const char* arg, const char* s, const char* t, int* value);
void showoptions(const char* file1, const char* file2);
void show_unfied(void);
void supress_common(void);
void left_column(void);
void show_context(void);
void init_options_files(int argc, const char* argv[]);
