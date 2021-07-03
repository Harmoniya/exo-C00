#include <unistd.h>

void	test(char x)

{
	write(1, &x, 1);
}

int	main(void)

{
	test('x');
	return (0);
}
