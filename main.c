#include <stdio.h>
#include <stdlib.h>

//This function doubles the size of the array
//copying all the elements, and dealocating
//the previous array, and setting the empty elements
//to -1;
long long	*resize_long_long_arr(int *arr, int length)
{
	int			iter;
	long long	*arr_new;

	iter = 0;
	arr_new = malloc(sizeof(long long) * length * 2);
	while (iter < length)
	{
		arr_new[iter] = arr[0];
		iter++;
	}
	while (iter < length * 2)
	{
		arr_new[iter] = -1;
		iter++;
	}
	free(arr);
	return (arr_new);
}

//This function doubles the size of the array
//copying all the elements, and dealocating
//the previous array, and setting the empty elements
//to '\0';
char	**resize_char_char_arr(char **arr, int length)
{
	int			iter;
	char		**arr_new;

	iter = 0;
	arr_new = malloc(sizeof(char **) * length * 2);
	while (iter < length)
	{
		arr_new[iter] = arr[0];
		iter++;
	}
	while (iter < length * 2)
	{
		arr_new[iter] = 0;
		iter++;
	}
	free(arr);
	return (arr_new);
}
int	main()
{
}
