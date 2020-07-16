void ft_putchar(char c);

void	rush(int x,int y)
{
	char x_fslash;
	char x_bslash;
	char x_aster;
	char y_aster;

	x_fslash = '/';
	x_bslash = 92;
	x_aster = '*';
	y_aster = '*';
	
	int i;

	i = 1;

	while(x >= i)
	{
		if( i == 1)
		{
			ft_putchar(x_fslash);
			i++;
		}
		else if(i == x)
		{
			ft_putchar(x_bslash);
			i++;
		}
		else
		{
			ft_putchar(y_aster);
			i++;
		}
	}
		
	ft_putchar('\n');
	
	i = 1;
	
	if(y > 2)
	{
		while(x >= i)
		{
			if( i == 1)
			{
			   ft_putchar(x_bslash);
			   i++;
			}

			if(i == x)
			{
				ft_putchar(x_fslash);
				i++;
			}
			else
			{
				ft_putchar(x_aster);
				i++;
			}
		}
		ft_putchar('\n');
	}



}
