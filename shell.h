#ifndef SHELL_H
#define SHELL_H

void lsh_loop(void);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
int lsh_launch(char **args);
int lsh_execute(char **args);
int lsh_num_builtins();
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);


#endif
