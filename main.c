#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static int n_words(char const *s, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	if (*s)
	{
		if (s[i] != c)
			word++;
		i++;
		while (s[i] != '\0')
		{
			if (s[i] != c && s[i - 1] == c)
				word++;
			i++;
		}
	}
	return (word);
}

static char *mem_fill(char const *s, char c, int word)
{
	int size;
	int j;
	// int orig_index;
	char *str_res;
	// int blanks = 0;
	int n_words = 0;
	int i = 0;
	int index = 0;
	
	if (s[i] != c)
		n_words++;
	i++;
	while (s[i] != '\0' && n_words < word)
	{
		if (s[i] != c && s[i - 1] == c){
			n_words++;
			index = i;
		}
		i++;
	}
	// orig_index = i;
	j = -1;
	// while (s[index++] == c)
	// 	blanks++;
	// orig_index = index;

	while (s[i] != c && s[i] != '\0')
		i++;
	size = i - index + 1;
	i = index;
	str_res = (char *)malloc(sizeof(char) * size);
	if (str_res == NULL)
		return (NULL);
	// while (s[index] == c)
	// 	index++;
	while (s[i] != c && s[i] != '\0')
		str_res[++j] = s[i++];
	str_res[++j] = '\0';
	return (str_res);
}
int ft_strlen(const char *str)
{
	int caracter;

	caracter = 0;
	while (str[caracter] != '\0')
	{
		caracter++;
	}
	return (caracter);
}

char **ft_split(char const *s, char c)
{
	size_t double_array_size;
	char **arr_of_strings;
	size_t i;
	// int index = 0;
	// int blanks = 0;
	int words = 1;
	double_array_size = n_words(s, c);
	arr_of_strings = (char **)malloc(sizeof(char *) * (double_array_size + 1));

	i = -1;
	while (++i < double_array_size)
	{
		arr_of_strings[i] = mem_fill(s, c, words++);
		// if (i == 0)
		// 	index += ft_strlen(arr_of_strings[i]) + 1 + blanks;
		// else
		// 	index += ft_strlen(arr_of_strings[i]) + 1;
	}
	arr_of_strings[i] = NULL;
	return (arr_of_strings);
}

int main()
{

	char **string;
	string = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	int i = -1;
	while (++i < 13)
		printf("%s\n", string[i]);
}
