#include <unistd.h>

void epur_str(char *str)
{
	int i = 0;
	int flag;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
				flag = 1;
			if (!(str[i] == ' ' || str[i] == '\t'))
			{
				if (flag)
					write(1, " ", 1);
				write(1, &str[i], 1);
				flag = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	else
		write(1, "\n", 1);
}