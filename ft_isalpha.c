int ft_isalpha(char c)
{
    if (c >= 65 && c <= 90)
        return (2);
    else if (c >= 97 && c <= 122)
        return (1);
    else
        return (0);
}
