#include "get_next_line.h"
#include "memory/memory.h"
#include <stdio.h>

int	main(void)
{
	char	*join = ft_strjoin("Hello ", "World\n");
	char	*chr = ft_strchr("Bonjour le monde", 'o');
	printf("%s", join);
	printf("%s\n", chr);
	free_all_allocated(2, join, chr);
}
