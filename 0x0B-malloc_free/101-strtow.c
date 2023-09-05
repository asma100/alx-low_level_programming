#include <stdlib.h>
#include <string.h>

int count_words(char *str);
char **split_string(char *str, int num_words);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return:words, or NULL on failure
 */
char **strtow(char *str)
{
int num_words;
char **words;

if (str == NULL || *str == '\0')
return (NULL);
num_words = count_words(str);
if (num_words == 0)
return (NULL);
words = split_string(str, num_words);
if (words == NULL)
return (NULL);
return (words);
}
/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return:count
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;
while (*str != '\0')
{
if (*str == ' ')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}
/**
 * split_string - Splits a string into an array of words
 * @str: The string to split
 * @num_words: The number of words in the string
 *
 * Return:words, or NULL on failure
 */
char **split_string(char *str, int num_words)
{
char **words;
char *word_start;
int word_len;
int i;
words = malloc(sizeof(char *) * (num_words + 1));
if (words == NULL)
return (NULL);
i = 0;
while (*str != '\0')
{
if (*str == ' ')
{
str++;
}
else
{
word_start = str;
word_len = 0;
while (*str != ' ' && *str != '\0')
{
word_len++;
str++;
}
words[i] = malloc(sizeof(char) * (word_len + 1));
if (words[i] == NULL)
{
while (i > 0)
{
i--;
free(words[i]);
}
free(words);
return (NULL);
}
strncpy(words[i], word_start, word_len);
words[i][word_len] = '\0';
i++;
}
}
words[num_words] = NULL;
return (words);
}
