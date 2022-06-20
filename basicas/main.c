#include "libft.h"

int main()
{
    int n1 = ft_atoi("000074");

    int n2 = ft_atoi("+-54");


	n1 = 	ft_atoi("0");
    printf("%d\n", n1);
	n1 = 	ft_atoi("546:5");
    printf("%d\n", n1);
	n1 = 	ft_atoi("-4886");
    printf("%d\n", n1);
	n1 = 	ft_atoi("+548");
    printf("%d\n", n1);
	n1 = 	ft_atoi("054854");
    printf("%d\n", n1);
	n1 = 	ft_atoi("000074");
    printf("%d\n", n1);
	n1 = 	ft_atoi("+-54");
    printf("%d\n", n1);
	n1 = 	ft_atoi("-+48");
    printf("%d\n", n1);
	n1 = 	ft_atoi("--47");
    printf("%d\n", n1);
	n1 = 	ft_atoi("++47");
    printf("%d\n", n1);
	n1 = 	ft_atoi("+47+5");
    printf("%d\n", n1);
	n1 = 	ft_atoi("-47-5");
    printf("%d\n", n1);
	n1 = 	ft_atoi("\e475");
    printf("%d\n", n1);
	n1 = 	ft_atoi("\t\n\r\v\f  469 \n");
    printf("%d\n", n1);
	n1 = 	ft_atoi("-2147483648");
    printf("%d\n", n1);
	n1 = 	ft_atoi("2147483647");
    printf("%d\n", n1);
	n1 = 	ft_atoi("\t\n\r\v\fd469 \n");
    printf("%d\n", n1);
	n1 = 	ft_atoi("\n\n\n  -46\b9 \n5d6");
    printf("%d\n", n1);
	n1 = 	ft_atoi("");
    printf("%d\n", n1);
 
    return 0;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	y;
	int	z;

	i = 0;
	y = 1;
	z = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			y *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		z = (str[i] - '0') + (z * 10);
		i++;
	}
	return (z * y);
}
