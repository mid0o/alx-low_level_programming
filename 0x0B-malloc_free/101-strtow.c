#include "main.h"
#include <stdlib.h>
#include <stdbool.h>



bool is_space(char c) 
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int count = 0;
	bool in_word = false;
	
	while (*str) 
	{
		if (is_space(*str)) 
		{
			in_word = false;
		}
		else if (!in_word)
		{
			in_word = true;
			count++;
		}

		str++;
	}
	return (count);
}

char **strtow(char *str) 
{
	int num_words = count_words(str);
	char **words = malloc((num_words + 1) * sizeof(char *));
	bool in_word = false;
	int word_start = 0;
	int word_count = 0;
	int i;
	int word_length;

	if (str == NULL || *str == '\0') 
	{
		return (NULL);
	}
	
	if (words == NULL) 
	{
		return NULL;
	}

	for (i = 0; str[i] != '\0'; i++) 
	{
		if (!is_space(str[i]) && !in_word)
		{
			in_word = true;
			word_start = i;
		}
		else if (is_space(str[i]) && in_word)
		{
			in_word = false;
			word_length = i - word_start;
            words[word_count] = malloc((word_length + 1) * sizeof(char));
	    if (words[word_count] == NULL)
	    {
		    for (j = 0; j < word_count; j++)
		    {
			    free(words[j]);
		    }
		    free(words);
		    return (NULL);
	    }
	    for (j = 0; j < word_length; j++)
	    {
                words[word_count][j] = str[word_start + j];
            }
	    words[word_count][word_length] = '\0';
	    word_count++;
		}
    }
	if (in_word) 
	{
		int word_length = strlen(str) - word_start;
		words[word_count] = malloc((word_length + 1) * sizeof(char));
		if (words[word_count] == NULL)
		{
			for (j = 0; j < word_count; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_length; j++)
		{
			words[word_count][j] = str[word_start + j];
		}
		words[word_count][word_length] = '\0';
		word_count++;
	}
	words[word_count] = NULL;
	return (words);
}
