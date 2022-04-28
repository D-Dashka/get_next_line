
#include "../get_next_line.h"
# include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int i;

	(void) argc;
	i = 0;
	if (argc >= 2) 
	{
		if (argv[1][0] == '1')
		{
			printf("Read valid file:\n");
			fd = open("tests/test_valid", O_RDONLY);
			while (i < 36)
			{
				line  = get_next_line(fd);
				printf("%s", line);
				free(line);
				i++;
			}
			close(fd);
		}
		if (argv[1][0] == '2')
		{
			printf("Read long line:\n");
			fd = open("tests/long_line", O_RDONLY);
			line  = get_next_line(fd);
			printf("%s", line);
			free(line);
			close(fd);
		}
		if (argv[1][0] == '3')
		{
			printf("Read from stdin:\n");
			fd = 0;
			line = get_next_line(fd);
			printf("%s", line);
			free(line);
			close(fd);
		}
		if (argv[1][0] == '4')
		{
			printf("\nRead from empty:\n");
			fd = open("tests/empty_file", O_RDONLY);
			line = get_next_line(fd);
			printf("%s", line);
			close(fd);
		}
		if (argv[1][0] == '5')
		{
			printf("Read from file with only new line:\n");
			fd = open("tests/only_nl", O_RDONLY);
			printf("%s", get_next_line(fd));
			free(line);
			printf("%s", get_next_line(fd));
			close(fd);
		}
		if (argv[1][0] == '6')
		{
			i = 0;
			printf("Read from file with nl:\n");
			fd = open("tests/two_lines", O_RDONLY);
			while (i < 1)
			{
				line = get_next_line(fd);
				printf("%s\n", line);
				free(line);
				i++;
			}
			close(fd);
		}
		if (argv[1][0] == '7')
		{
			i = 0;
			printf("Read from file with no nl:\n");
			fd = open("tests/big_no_nl", O_RDONLY);
			while (i < 10)
			{
				line = get_next_line(fd);
				printf("%s\n",line);
				free(line);
				i++;
			}
			close(fd);
		}
		if (argv[1][0] == '8')
		{
			i = 0;
			printf("Read from big file:\n");
			fd = open("tests/dict", O_RDONLY);
			while (i < 100)
			{
				line = get_next_line(fd);
				printf("%s", line);
				free(line);
				i++;
			}
			close(fd);
		}
	}
	
	return (0);
}