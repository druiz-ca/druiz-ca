/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_exec_builtins.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druiz-ca <druiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:07:50 by druiz-ca          #+#    #+#             */
/*   Updated: 2024/10/12 18:08:21 by druiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

/* Función que elige el builtin a ejecutar */
void choose_builtin(t_shell *shell, t_cmd **commands, int i)
{
    char *builtin;

    builtin = commands[i]->cmd;
    if (!ft_strcmp(builtin, "echo"))
        ft_echo(commands[i]->args, shell);
    else if (!ft_strcmp(builtin, "cd"))
        ft_cd(commands[i]->args, shell);
    else if (!ft_strcmp(builtin, "print_env"))
        ft_env(shell, commands[i]->args);
    else if (!ft_strcmp(builtin, "exit"))
        ft_exit(commands[i]->args, shell);
    else if (!ft_strcmp(builtin, "update_env"))
        ft_export(commands[i]->args, shell);
    else if (!ft_strcmp(builtin, "delete_env"))
        ft_unset(commands[i]->args, shell);
    else if (!ft_strcmp(builtin, "pwd"))
        ft_pwd(shell);
}

/* Función que comprueba si es un builtin */
int check_if_is_builtin(char *command)
{
    if (!ft_strcmp(command, "echo") || !ft_strcmp(command, "cd") || !ft_strcmp(command,
            "env") || !ft_strcmp(command, "exit") || !ft_strcmp(command, "export")
        || !ft_strcmp(command, "unset") || !ft_strcmp(command, "pwd"))
        return (1);
    return (0);
}