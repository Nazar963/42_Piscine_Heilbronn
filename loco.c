// swap 
int main() 
{
	int a = 2;
	int b = 4;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
}
// rev int tab 
int main()
{
	int tab = 12345;


	ft_rev_int_tab(&tab, size);
	printf("%d %d", tab, size);
}
// c02 ex00 
int main(void)
{
    char str1[] = "Hallo";
    char str2[] = "38388";

    printf("%s\n", str1);
    ft_strcpy(str1, str2);
    printf("%s\n", str1); 
    return (0);
}
int main()
{
  char src[] = "hello";
  char dest[5] = ""; 
  *ft_strcpy(dest, src);
  printf("%s\n%s\n", src, dest);
}

// to upper
int main()
{
  char letter[] = "hello";
  ft_strupcase(letter);
  printf("%s ", letter);
}

// rev
int main()
{
  int i;
	int tab[5] = {1,2,3,4,5};
  	i = 0;
  ft_rev_int_tab(tab, 5);
	while (i < 5)
	{
    printf("%d ", tab[i]);
    i++;
	}
}

// ft_strcapitalize
// int main(void)
// {
//     char str1[] = " salut, comMent tu vas ? 42Mots quarante-deux; cinquante+et+un";

//     //printf("%s\n", str1);
//     //printf("%s\n", str2);
//     ft_strcapitalize(str1);
//     //ft_strupcase(str2);
//     printf("%s\n", str1);
//     //printf("%s\n", str2); 
//     return (0);
// }

// c03 ex00
// int main()
// {char *a = "abbbc";
//  char 	*c = "abc";
//  printf("%d\n", ft_strcmp(a, c, ));}