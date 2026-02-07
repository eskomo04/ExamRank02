#include <stdlib.h>

int	delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		wc(char *s)
{
	int	inword = 0;
	int	count = 0;
	while (*s)
	{
		if (*s != ' ' && *s != '\t' && inword == 0)
		{
			inword = 1;
			count++;
		}
		else if (*s == ' ' || *s == '\t')
			inword = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int		wordcount = wc(str);
	char	**array = (char **)malloc((wordcount + 1) * sizeof(char *));
	int		i = 0;

	if (!array)
		return (NULL);

	while (*str)
	{
		//Skip leading whitespace
		while (delimiter(*str))
			str++;
		//Break if end of string
		if (*str == '\0')
			break ;
		//Account for the start of a word
		char *start = str;
		//Find the word length
		while (!delimiter(*str) && *str)
			str++;
		int len = str - start;
		//Allocate memory in array
		array[i] = (char *)malloc((len + 1) * sizeof(char));
		//Copy the current word from start to result[i]
		int word = 0;
		while (word < len)
		{
			array[i][word] = start[word];
			word++;
		}
		//Null terminate and move to next word/array
		array[i][word] = '\0';
		i++;
	}
	array[i] = NULL;
	return (array);
}


//IS NOT PART OF THE SUBJECT ***********************************
#include <stdio.h>

int	main(void)
{
	char *s = "There     should be an array of 8         words! ";
	char **array = ft_split(s);
	int i = 0;
	int count = wc(s);

	printf("wordcount: %d\n", count);
	while (i < count)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}