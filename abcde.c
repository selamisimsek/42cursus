#include "get_next_line.h"

char *get_line(char *str)
{
    char    *line;
    int     i;

    if (!str[0])
        return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
        i++;
    line = malloc(i + 2);
    if (!line)
        return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        line[i] = str[i];
        i++;
    }
    if (str[i] == '\n')
        line[i++] = '\n';
    line[i] = '\0';
    return (line);
}

char *update_str(char *str)
{
    char    *new_str;
    int     i;
    int     j;

    i = 0;
    while (str[i] && str[i] != '\n')
        i++;
    if (!str[i])
    {
        free(str);
        return (NULL);
    }
    new_str = malloc(ft_strlen(str) - i + 1);
    if (!new_str)
    {
        free(str);
        return (NULL);
    }
    i++;
    j = 0;
    while (str[i])
        new_str[j++] = str[i++];
    new_str[j] = '\0';
    free(str);
    return (new_str);
}

char *read_file(int fd, char *str)
{
    char    *buff;
    int     read_bytes;

    buff = malloc(BUFFER_SIZE + 1);
    if (!buff)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(str, '\n') && read_bytes != 0)
    {
        read_bytes = read(fd, buff, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(buff);
            free(str);
            return (NULL);
        }
        buff[read_bytes] = '\0';
        str = ft_strjoin(str, buff);
        if (!str)
        {
            free(buff);
            return (NULL);
        }
    }
    free(buff);
    return (str);
}

char *get_next_line(int fd)
{
    static char *str;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    if (!str)
    {
        str = malloc(1);
        if (!str)
            return (NULL);
        str[0] = '\0';
    }
    str = read_file(fd, str);
    if (!str)
        return (NULL);
    line = get_line(str);
    str = update_str(str);
    return (line);
}