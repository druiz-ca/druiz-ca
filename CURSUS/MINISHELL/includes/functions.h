/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druiz-ca <druiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:47:37 by sternero          #+#    #+#             */
/*   Updated: 2024/10/27 13:59:10 by druiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

// ------- Execution Functions ---------------------------------------------- //



// ------- Parser Functions ------------------------------------------------- //

// ------- ft_action.c

char    *ft_break_down(char *str, int *i);
// The ft_break_down() function breaks down the command into tokens. It takes
// two arguments: a string and a pointer to an index. It returns a pointer to
// the word extracted from the string. The function uses the ft_redirection_1(),
// ft_redirection_2(), ft_process_pipe(), and ft_break_down() functions to break
// down the command into tokens.

void    ft_parse_input(t_minishell *minishell);
// The ft_parse_input() function reads the input from the user, parses it into
// tokens, and prints the tokens to the screen. It takes a pointer to a
// t_minishell structure as an argument.

void    ft_action_parse(t_minishell *minishell, char *line);
// The ft_action_parse() function processes the input from the user. It takes
// two arguments: a pointer to a t_minishell structure and a string. It calls
// the ft_spc_remove() function to remove the spaces from the input, the
// ft_check_cmd() function to check if the command is valid, the ft_parse_
// input() function to parse the input, the ft_copy_mtx() function to copy the
// matrix of strings, and the ft_free_vector() function to free the memory
// allocated for the matrix of strings.

void    ft_spc_remove(char *spaces);
// The ft_spc_remove() function removes the spaces from the input. It takes one
// argument: a string. It returns void.

// ------- ft_checkers.c

int     ft_check_cmd(t_minishell *minishell);
// The ft_check_cmd() function checks if a command is valid. It takes a pointer
// to a t_minishell structure as an argument. It returns 1 if the command is
// valid, and 0 if the command is not valid.

int     ft_chek_first_pipe(char *str);
// The ft_chek_first_pipe() function checks if a string contains pipe character
// at the beginning. It takes one argument: a string. It returns 1 if the string
// contains a pipe character at the beginning, and 0 if the string does not
// contain a pipe character at the beginning.

int     ft_check_last_pipe(char *str);
// The ft_check_last_pipe() function checks if a string contains a pipe character
// at the end. It takes one argument: a string. It returns 1 if the string
// contains a pipe character at the end, and 0 if the string does not contain a
// pipe character at the end.

int     ft_check_mixes(char *str, int *i);
// The ft_chek_mixes() function checks if a string contains a mix of pipe and
// redirection characters. It takes two arguments: a string and an index. It
// returns 1 if the string contains a mix of pipe and redirection characters, 0
// if the string does not contain a mix of pipe and redirection characters, and
// -1 if the string contains invalid characters.

int     ft_validating_pipes(char *str);
// The ft_validating_pipes() function checks if a string contains valid pipe
// characters. It takes one argument: a string. It returns 1 if the string
// contains valid pipe characters, and 0 if the string does not contain valid
// pipe characters.

// ------- ft_elements.c

int     ft_chck_pipe(char *str);
// The ft_chck_pipe() function checks if a string contains a pipe character. It
// takes one argument: a string. It returns 1 if the string contains a pipe
// character, and 0 if the string does not contain a pipe character.

int     ft_check_redirection(char *str, int i);
// The ft_check_redirection() function checks if a character is a redirection
// character. It takes two arguments: a string and an index. It returns 1 if
// the character is a '>', 2 if the character is a '<', and 0 if the character
// is not a redirection character.

int     ft_num_pipe(char *str);
// The ft_num_pipe() function counts the number of pipe characters in a string.
// It takes one argument: a string. It returns the number of pipe characters in
// the string.

// ------- ft_env_tools.c

void    ft_breaking_lines(t_minishell *minishell);
// The ft_breaking_lines() function breaks the command into lines. It takes a
// pointer to a t_minishell structure as an argument. It allocates memory for
// the commands and calls the ft_parse_command() function to parse the command.

char    *ft_find_var(char *str, int i);
// The ft_find_var() function finds the variable in the command. It takes two
// arguments: a string and an index. It returns a pointer to the variable.

char    *ft_get_var(t_var **list_var, char *str);
// The ft_get_var() function gets the value of the variable. It takes two
// arguments: a pointer to a t_var structure and a pointer to a string. It
// returns a pointer to the value of the variable.

char    *ft_insert_str(char *str, char *ins, size_t pos);
// The ft_insert_str() function inserts a string into another string. It takes
// three arguments: two strings and a position. It returns a pointer to the new
// string.

// ------- ft_environment.c

//static void	ft_replace_vars(char **str, int *i, char *status, t_var **list_var);
// The ft_replace_vars() function replaces the environment variables in the 
// command with their values. It takes three arguments: a pointer to a char
// array, a pointer to an index, a pointer to a char array, and a pointer to a
// t_var structure.

//static void	ft_do_cmd(char **str, t_var **list_var, char *status);
// The ft_do_cmd() function processes the command. It takes three arguments: a
// pointer to a char array, a pointer to a t_var structure, and a pointer to a
// char array.

void	ft_restore_dolar(char **dolar);
// The ft_restore_dolar() function restores the dollar signs in the command. It
// takes a pointer to a char array as an argument.

// ------- ft_envp.c

t_var	**ft_env(char **envp);
// The ft_env() function creates a list of environment variables. It takes one
// argument: an array of strings. It returns a pointer to a list of environment
// variables. The function allocates memory for the list of environment 
// variables and copies the environment variables from the array of strings to
// the list of environment variables.

char	**ft_add_env(char *new);
// The ft_add_new() function adds a new environment variable to the list of
// environment variables. It takes one argument: a string. It returns a pointer
// to an array of strings.

// ------- ft_free_utils.c

void    ft_free_cmd(t_cmd *cmd);
// The ft_free_cmd() function frees the memory allocated for a t_cmd structure.

void    ft_free_vector(char **str);
// The ft_free_vector() function frees the memory allocated for an array of
// strings.

// ------- ft_handling.c 

int     ft_end_word(char *str, int i);
// The ft_end_word() function calculates the end of a word in a string. It takes
// two arguments: a string and an index. It returns the index of the next space
// or redirection character in the string.

int     ft_len_word(char *str, int i);
// The ft_len_word() function calculates the length of a word in a string. It
// takes two arguments: a string and an index. It returns the length of the word
// in the string.

char    *ft_process_word(char *str, int *i);
// The ft_process_char() function extracts a word from a string. It takes two
// arguments: a string and a pointer to an index. It returns a pointer to the
// word extracted from the string.

void    ft_handling_inside(char **elements, int *i, t_cmd *cmds, int *inside);
// The ft_handling_inside() function processes the input redirection command. It
// takes four arguments: an array of elements, a pointer to an index, a pointer
// to a t_cmd structure, and a pointer to a variable.

void    ft_handling_outside(char **elements, int *i, t_cmd *cmds, int *outside);
// The ft_handling_outside() function processes the output redirection command. 
// It takes four arguments: an array of elements, a pointer to an index, a
// pointer to a t_cmd structure, and a pointer to a variable.

// ------- ft_mem_utils.c

void    ft_mem_alloc(t_cmd **cmds, char **split_cmd);
// The ft_mem_alloc() function allocates memory for the commands. It takes two
// arguments: an array of t_cmd structures and an array of strings.

void    ft_mem_args(t_cmd *cmd, char **split_cmd);
// The ft_mem_args() function allocates memory for the arguments of the command.
// It takes two arguments: a pointer to a t_cmd structure and an array of 
// strings.

void    ft_mem_out(t_cmd *cmd, char **split_cmd);
// The ft_mem_out() function allocates memory for the output redirection 
// command. It takes two arguments: a pointer to a t_cmd structure and an array
// of strings.

void    ft_mem_in(t_cmd *cmd, char **split_cmd);
// The ft_mem_in() function allocates memory for the input redirection command.
// It takes two arguments: a pointer to a t_cmd structure and an array of 
// strings. 

// ------- ft_quotes.c

int     ft_check_quotes(char *str, int i);
// The ft_check_quotes() function checks if a character is a quote. It takes two
// arguments: a string and an index. It returns DQ_OPEN if the character is a
// double quote, SQ_OPEN if the character is a single quote, and NO_QUOTE if the
// character is not a quote.

int     ft_using_single(char *str);
// The ft_using_single() function checks if a character is a single quote. It
// takes one argument: a string. It returns SQ_OPEN if the character is a single
// quote, NO_QUOTE if the character is not a quote, and the character if the
// character is a double quote.

int     ft_using_double(char *str);
// The ft_using_double() function checks if a character is a double quote. It
// takes one argument: a string. It returns DQ_OPEN if the character is a double
// quote, NO_QUOTE if the character is not a quote, and the character if the
// character is a single quote.

// ------- ft_remove.c

char    **ft_remove_last(char **vector);
// The ft_remove_last() function removes the last element from an array of
// strings. It takes one argument: an array of strings. It returns a new array
// of strings.

void    ft_remove_quotes(char *str);
// The ft_remove_quotes() function removes the single and double quotes from a
// string. It takes one argument: a string and returns void.

char    *ft_delete_str(char *str, size_t init, size_t end);
// The ft_delete_str() function deletes a substring from a string. It takes 
// three arguments: a string, an initial position, and an end position. It
// returns a pointer to the modified string.

void    ft_remove_matrix(char **matrix);
// The ft_remove_matrix() function frees the memory allocated for a matrix of
// strings. It takes one argument: a matrix of strings. 

// ------- ft_struct_len.c

int     ft_len_double(char *str, int i);
// The ft_len_double() function calculates the length of a word in a string. It
// takes two arguments: a string and an index. It returns the length of the word
// in the string. The " character is used to calculate the length of the word.

int     ft_len_single(char *str, int i);
// The ft_len_single() function calculates the length of a word in a string. It
// takes two arguments: a string and an index. It returns the length of the word
// in the string. The ' character is used to calculate the length of the word.

int     ft_len_pipe(char *str, int i);
// The ft_len_pipe() function calculates the length of a word in a string. It
// takes two arguments: a string and an index. It returns the length of the word
// in the string. The | character is used to calculate the length of the word.

int     ft_len_redirection_1(char *str, int i);
// The ft_len_redirection_1() function calculates the length of a word in a
// string. It takes two arguments: a string and an index. It returns the length
// of the word in the string. The > character is used to calculate the length of
// the word.

int     ft_len_redirection_2(char *str, int i);
// The ft_len_redirection_2() function calculates the length of a word in a
// string. It takes two arguments: a string and an index. It returns the length
// of the word in the string. The < character is used to calculate the length of
// the word.

// ------- ft_struct_parse.c

void    ft_parse_input(t_minishell *minishell);
// The ft_parse_input() function reads the input from the user, parses it into
// tokens, and prints the tokens to the screen. It takes a pointer to a
// t_minishell structure as an argument.

void    ft_parse_command(char **cmd_break, int *i, t_cmd *struct_command);
// The ft_parse_command() function parses the command into tokens. It takes
// three arguments: an array of strings, a pointer to an index, and a pointer
// to a t_cmd structure. It used to parse the command, the arguments, the input
// redirection command, and the output redirection command.

// ------- ft_struct_process.c

char    *ft_process_double(char *str, int *i);
// The ft_process_word() function extracts a word from a string. It takes two
// arguments: a string and a pointer to an index. It returns a pointer to the
// word extracted from the string. The " character is used to extract the word.

char    *ft_process_singel(char *str, int *i);
// The ft_process_word_next() function extracts a word from a string. It takes
// two arguments: a string and a pointer to an index. It returns a pointer to
// the word extracted from the string. The ' character is used to extract the   
// word.

char    *ft_process_pipe(char *str, int *i);
// The ft_process_pipe() function extracts a word from a string. It takes two
// arguments: a string and a pointer to an index. It returns a pointer to the
// word extracted from the string. The | character is used to extract the word.

char    *ft_redirection_1(char *str, int *i);
// The ft_process_redirection_1() function extracts a word from a string. It
// takes two arguments: a string and a pointer to an index. It returns a pointer
// to the word extracted from the string. The > character is used to extract the
// word.

char    *ft_redirection_2(char *str, int *i);
// The ft_process_redirection_2() function extracts a word from a string. It
// takes two arguments: a string and a pointer to an index. It returns a pointer
// to the word extracted from the string. The < character is used to extract the
// word.

// ------- ft_struct_start.c

void    ft_pipe_direction(t_pipe_red *direction, int i);
// The ft_pipe_direction() function initializes the pipe and redirection flags.
// It takes two arguments: a pointer to a t_pipe_red structure and an integer.
// It is used to gestionate the pipe and redirection flags. And does permit
// config diferent pipe combinations and redirections. Flexibility is the key.

void    ft_struct_start(t_pipe_red *pipe_red);
// The ft_struct_start() function initializes the pipe and redirection flags. It
// takes one argument: a pointer to a t_pipe_red structure. It initializes the
// pipe and redirection flags to 0. This is necessary to avoid undefined behavior
// when the flags are used in the program.

// ------- ft_token.c

char    **ft_top_split(char *str);
// The ft_top_split() function splits a string into an array of strings. It 
// takes one argument: a string. It returns an array of strings.

char    *ft_process_tokens(char *str, int *i);
// The process_tokens() function extracts a word from a string. It takes two
// arguments: a string and a pointer to an index. It returns a pointer to the
// word extracted from the string.

char    *ft_tokenize_vector(char *vector, int *pos);
// The ft_tokenize_vector() function processes the tokens in the vector. It
// takes two arguments: a string and a pointer to an index. In the while loop,
// it checks if the character in the string is a space, a redirection character,
// or a pipe character. If the character is a single quote or a double quote,
// it calls the ft_process_single() or ft_process_double() function to extract
// the tokens.

void    ft_env_var(t_minishell *minishell, char **var);
// The ft_env_var() function substitutes the environment variables in the 
// command. It takes two arguments: a pointer to a t_minishell structure and an
// array of strings. It is used to substitute and process the environment
// variables in the command.

// ------- ft_tools.c

int     ft_check_invalid_pipe(char *str);
// The ft_check_invalid_pipe() function checks if a string contains a pipe
// character at the end. It takes one argument: a string. It returns 1 if the
// string does not contain a pipe character at the end, and 0 if the string
// contains a pipe character at the end.

int     ft_vector_len(char **vector);
// The ft_vector_len() function takes one argument: an array of strings. It
// returns the number of strings in the array.

char    **ft_copy_mtx(char **mtx);
// The ft_copy_mtx() function copies a matrix of strings. It takes one argument:
// a matrix of strings. It returns a copy of the matrix of strings. 

char    **ft_shell_split(char *vector);
// The ft_shell_split() function splits a string into an array of strings. It
// takes one argument: a string. It returns an array of strings.

char    *ft_extract_token(const char *str, unsigned int ini, size_t len);
// The ft_extract_token() functionº extracts a token from a string. It is used
// to extract the tokens from the string. It does not modify the original string,
// but creates a new string with the extracted token. It takes three arguments:
// a string, an index, and a length. It returns a pointer to the new string.

// ------- Signals ---------------------------------------------------------- //

void	ft_signal_ctrl_c_child(void);
// The signal_ctrl_c_child() function initializes the ctrl_c sigaction structure
// for this the SIG_DFL handler is assigned, which causes the signal to be 
// handled in the default way by the system. Then, the SA_RESTART flag is
// assigned, which means that if a system call is interrupted by a signal, the
// system call will be restarted. Subsequently, the signal set is cleared and
// the sigaction() function is called, with the parameters: SIGINT, which is
// the interrupt signal (Ctrl+C); &ctrl_c, which is the sigaction structure that
// has been initialized; and NULL, which is a pointer to the sigaction structure
// that is used to store the previous action for the signal. In summary: this
// function is responsible for handling the SIGINT (Ctrl+C) signal in the child
// process.

void	ft_signal_ctrl_backslash_child(void);
// The signal_ctrl_backslash_child() function initializes the ctrl_back_slash
// sigaction structure for this the SIG_DFL handler is assigned, which causes
// the signal to be handled in the default way by the system. Then, the
// SA_RESTART flag is assigned, which means that if a system call is interrupted
// by a signal, the system call will be restarted. Subsequently, the signal set
// is cleared and the sigaction() function is called, with the parameters: 
// SIGQUIT, which is the quit signal (Ctrl+\); &ctrl_back_slash, which is the
// sigaction structure that has been initialized; and NULL, which is a pointer
// to the sigaction structure that is used to store the previous action for the
// signal. In summary: this function is responsible for handling the SIGQUIT
// (Ctrl+\) signal in the child process.

void	ft_signals_child(struct termios *mirror_termios);
// The signals_child() function calls the signal_ctrl_c_child() and
// signal_ctrl_backslash_child() functions to handle the SIGINT (Ctrl+C) and
// SIGQUIT (Ctrl+\) signals in the child process. This way, the signal handlers
// are set for the child process. signal_ctrl_c_child() handles the SIGINT
// (Ctrl+C) signal and signal_ctrl_backslash_child() handles the SIGQUIT 
// (Ctrl+\) signal.

void	ft_signal_ctrl_c_parent(void);
// The signal_ctrl_c_parent() function initializes the ctrl_c 
// sigaction structure by assigning the handle_sigint_parent handler to it,
// setting the SA_RESTART flag, which means that if a system call is interrupted
// by a signal, the system call will be restarted. Then the signal set is 
// cleared and the sigaction() function is called to set the action for the 
// SIGINT signal. In summary: this function is responsible for handling the
// SIGINT (Ctrl+C) signal in the parent process.

void	ft_handle_sigint_parent(int sig_num);
// The handle_sigint_parent() function handles the SIGINT (Ctrl+C) signal in the
// parent process. If the received signal is SIGINT, "^C\n" is written to the
// standard output, rl_on_new_line() function is called to place the cursor on
// a new line, and rl_replace_line() function is called to replace the current
// line with an empty string.

void	ft_signals_parent(void);
// The signals_parent() function calls the signal_ctrl_c_parent() and
// signal_ctrl_backslash() functions to handle the SIGINT (Ctrl+C) and SIGQUIT
// (Ctrl+\) signals in the parent process. This way, the signal handlers are
// set for the parent process. signal_ctrl_c_parent() handles the SIGINT 
// (Ctrl+C) signal and signal_ctrl_backslash() handles the SIGQUIT (Ctrl+\)
// signal.

void	ft_signal_ctrl_c_parent(void);
// The signal_ctrl_c_parent() function initializes the ctrl_c sigaction structure
// by assigning the handle_sigint_parent handler to it, setting the SA_RESTART
// flag, which means that if a system call is interrupted by a signal, the
// system call will be restarted. Then the signal set is cleared and the
// sigaction() function is called to set the action for the SIGINT signal. In
// summary: this function is responsible for handling the SIGINT (Ctrl+C) signal
// in the parent process.

void	ft_handle_sigint_parent(int sig_num);
// The handle_sigint_parent() function handles the SIGINT (Ctrl+C) signal in the
// parent process. If the received signal is SIGINT, "^C\n" is written to the
// standard output, rl_on_new_line() function is called to place the cursor on
// a new line, and rl_replace_line() function is called to replace the current
// line with an empty string.

void	ft_signals_parent(void);
// The signals_parent() function calls the signal_ctrl_c_parent() and
// signal_ctrl_backslash() functions to handle the SIGINT (Ctrl+C) and SIGQUIT
// (Ctrl+\) signals in the parent process. This way, the signal handlers are
// set for the parent process. signal_ctrl_c_parent() handles the SIGINT (Ctrl+C)
// signal and signal_ctrl_backslash() handles the SIGQUIT (Ctrl+\) signal.



// -------------------------------- Execution --------------------------------//

//---------------------------------  builtins  -------------------------------//

// cd_errors

void    write_oldpwd_error(t_minishell *shell);
void    write_too_many_args(t_minishell *shell);
void    write_cdhome_error(char *home_path, t_minishell *shell);
void    write_backpwd_err(char *back_path, t_minishell *shell);
void    write_cd_err(t_minishell *shell);

// cd

void	ft_cd(char **full_command, t_minishell *shell); // el mio 
char	*ft_get_environment(char *str_pwd, char **env_paths);
void	exec_cd_home(t_minishell *shell);
void	back_pwd(t_minishell *shell);
void	renew_path(t_minishell *shell);

// delete_env_unset

void    ft_delete_env_unset(char **name_var, t_minishell *shell);

// echo

void    ft_echo(char **full_command, t_minishell *shell);

//  exit

void    ft_exit(char **full_command, t_minishell *shell);

// env

void    ft_print_env(t_minishell *shell);
int     ft_check_path(t_minishell *shell, char **paths);
void    ft_print_env_err(t_minishell *shell, char *path);

//  pwd

void    ft_pwd(t_minishell *shell);

//  some _errors

void    write_pwd_err(t_minishell *shell);
void    write_numeric_err(t_minishell *shell, char **command);
void    write_exit_toomany_err(t_minishell *shell);

// update_env_errors

void    env_err0(char *command, int i);
void    env_err1(char *command, int i);
void    env_err2(char *command, int i);
void    env_err3(char *command);


// export

void    ft_update_env_export(t_minishell *shell, char **commands);
int     check_env(char *env);
void    ft_print_env(t_minishell *shell);
void    ft_print_env_err(t_minishell *shell, char *path);

// env2

void    ft_free_env(char **env);
char    *ft_new_env(char *name, char *value);
void    ft_create_env(char *name, char *value, t_minishell *shell);
int     ft_check_update_env(char *name, char *value, t_minishell *shell);
void    ft_update_env(char *command, t_minishell *shell);

//----------------------------  executor fts  -------------------------------//

// execute_bin

void    execute_bin_cmd_main(t_minishell *shell, t_cmd **commands, int i);
char    **get_bin_paths(t_minishell *shell);
int     write_bin_error(char *cmd, t_minishell *shell);
char    *join_binpath_and_cmd(char *cmd, char *bin_path);

// execute_bin2

void    execute_bin_cmd(char *cmd_path, char **commands, t_minishell *shell, int i);
char    **create_matrix_cmd_and_args(t_cmd **commands, int i);
void    execute_child_proces(char *path, char **exc, t_minishell *shell);

// execute_builtins

void    execute(t_cmd **commands, t_minishell *shell);
void    config_pipe(t_minishell *shell);
void    check_if_bultin(t_cmd **commands, t_minishell *shell, int i);
void    reset_oldpwd_and_lastcmd(t_minishell *shell, t_cmd **commands);
void    reset_oldpwd(t_minishell *shell, int i);

// heredoc

void    apply_heredoc(char *delimiter, t_minishell *shell);
void    error_pipe(t_minishell *shell);

// redirections

void    choose_redirections(char **cmd, t_minishell *shell);
void    save_fds(t_minishell *shell);
void    redir_outfile(char *cmd, t_minishell *shell, int i);
void    redir_infile(char *cmd, t_minishell *shell, int i);
void    reset_redirections(t_minishell *shell);

// check_and_exec_builtins

void    choose_builtin(t_minishell *shell, t_cmd **commands, int i);
int     check_if_is_builtin(char *command);

#endif
