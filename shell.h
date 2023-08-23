#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/*The Size Definition*/
#define PERUSE_BUF_SIZE 1024
#define NOT_BUF_SIZE 1024
#define BUF_CLEANSE -1
/* This are the logical Functions*/
#define NAME_NORM 0
#define NAME_OR 1
#define NAME_AND 2
#define NAME_CHAIN 3

/*This header File converts integers*/
#define IN_LOWER 1
#define UNSIGNED 2
/*System*/
#define MY_NEW_MACRO 0
#define STRING_TOKEN 0
#define HISTORY ".simple_shell"
#define HIST_MAX 4096
extern char **environ;

/**
 *@my_Number: Integer member.
 * @name_string: string member.
 * @head: pointer.
 */
typedef struct string_Name
{
	int my_Number;
	char *name_string;
	struct string_Name *head;
} string;

/**
 *struct phoeni - This is a structure that pass uniform prototype.
 * @argument: generates string.
 * @argumentvector: inherits strings from argument.
 * @url: The string for the command.
 * @arg_counter: It counts the number of arguments.
 * @Num_of_counts: Counts the number of Errors.
 * @first_Name:The name of the file.
 *@viro: Copies environment.
 *@hst_toll: This is the modified environment.
 *@all: All nodes.
 *@environment:The  environment node.
 *@changed: Takes  cares of environment that was changed.
 *@station:Return station of command.
 *@command:Address of pointer.
 *@command_type: The command  line type.
 *@analyse: The variable reads inputs.
 *@Num_history:The number of counting lines.
 */
typedef struct phoenix
{
	char *argument;
	char **argumentvector;
	char *url;
	int arg_counter;
	unsigned int Num_of_counts;
	int error;
	int Number_of_flag;
	string *viro;
	string *all;
	string *hist_toll;
	char *first_Name;
	char **environ;
	int changed;
	int station;
	char **command;
	int command_type;
	int analyse;
	int Num_history;
} phoe_x;

#define CODE                                                                    \
	{                                                                           \
		NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
			0, 0, 0                                                             \
	}

/**
 *struct mood - The structure.
 *@char: char data types.
 *@int: integer data type.
 */
typedef struct mood
{
	char *name;
	int (*mole)(phoe_x *);
} mo_dat;

/* The converter shell Files  */
int receive(phoe_x *m);
int deliver(char c, char *deliv);
int alph(int b);
int aturu(char *z);

/*The Built-in  shell Files */
int exit_terminal(phoe_x *run);
int mybuiltincd(phoe_x *run);
int mybuiltinhelp(phoe_x *run);
int builtin_hist(phoe_x *run);
int remove_alias(phoe_x *run, char *str);
int start_set_alias(phoe_x *run, char *str);
int print_the_at_alias(string *nat);
int the_no_alias(phoe_x *run);

/* The shell environment*/
int the_envi_at(phoe_x *run);
char *the_environ_dat(phoe_x *run, const char *lin);
int all_set_the_environo(phoe_x *run);
int remove_the_set_env(phoe_x *run);
int add_the_environ(phoe_x *run);

/* The error-shell  Files */
void _dos(char *name_string);
int _print_line(char y);
int the_puts_error(char y, int m);
int error_handler(char *name_string, int m);
int Num_error(char *z);
void print(phoe_x *run, char *toddle);
int print_func(int input, int m);
char *convert_error_no(long int my_Number, int boseline, int flags);
void remove_com_error(char *buffer);

/* The exists-shell Files*/
char *_strncpy(char *move, char *own, int w);
char *strn_cat(char *move, char *own, int w);
char *string_locate(char *z, char y);

/* The get-environment  files.*/
char **no_environ(phoe_x *run);
int un_getenv(phoe_x *run, char *var);
int set_env(phoe_x *run, char *var, char *value);

/* The information Files*/
void clear_info_at(phoe_x *run);
void set_info_now(phoe_x *run, char * * not );
void info_free_on(phoe_x *run, int mo);
ssize_t input_buf_all(phoe_x *run, char **buffer, size_t *len);

/*The geting-lines  of  files*/
ssize_t get_input_all_func(phoe_x *run);
ssize_t buff_read(phoe_x *run, char *buffer, size_t *i);
int get_line_nov(phoe_x *run, char **pointer_link, size_t *length);
void sig_handler(__attribute__((unused)) int sig_num);

/* The history -shell Files*/
char *get_history(phoe_x *run);
int history_write(phoe_x *run);
int history_read_1(phoe_x *run);
int history_build_all(phoe_x *run, char *buffer, int linecount);
int make_number(phoe_x *run);

/* The initial Lists  Files*/
size_t name_list1(const string *f);
char **string_list2(string *link);
size_t print_name(const string *f);
string *node_starts(string *nat, char *prefix, char y);
ssize_t get_node(string *link, string *nat);

/* The  Lists-shell Files*/
string *node_add_beg(string **link, const char *name_string, int my_Number);
string *add_node_at_end(string **link, const char *name_string, int my_Number);
size_t print_environ(const string *f);
int delete_node(string **link, unsigned int index);
void list_free(string **head_ptr);

/* The Main Running Files*/
int main(int ac, char * * not );

/* The Memory-shell File*/
int alfree(void **pointer_link);

/* The Pasersrin-shell  Files*/
int cmd_execute(phoe_x *run, char *url);
char *duplicator(char *pathstr, int start, int stop);
char *path_find(phoe_x *run, char *pathstr, char *cmd);

/* The set-shell Files*/
char *set_the(char *z, char q, unsigned int w);
void froze(char **j);
void *size_realloc(void *pointer_link, unsigned int old, unsigned int new);

/* The shs-shell  Files*/
int hsh(phoe_x *run, char * * not );
void locate_cmd(phoe_x *run);
void fork_cmd(phoe_x *run);
int find_builtin(phoe_x *run);

/* The string -format File*/
int _strlen(char *z);
int _strcmp(char *z1, char *z2);
char *starts_env(const char *stack, const char *need);
char *string_catenation(char *move, char *own);

/* The string-shell Files*/
char *copy_the_string(char *move, char *own);
char *_strdup(const char *name_string);
void _eputs(char *name_string);
int _eputchar(char y);

/* The tokenizer-of-shell  Files*/
char **strtype(char *name_string, char *d);
char **strtype2(char *name_string, char d);

/* The Chaininig of the shell Files*/
int The_chain(phoe_x *run, char *buffer, size_t *h);
void confirm_chain(phoe_x *run, char *buffer, size_t *h, size_t i, size_t len);
int replace(phoe_x *run);
int replace_string(char **old_then, char *new_now);
int replace_now(phoe_x *run);

#endif
