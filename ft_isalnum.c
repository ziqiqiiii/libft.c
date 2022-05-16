int ft_isalnum(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    else if (c >= 97 && c <= 122)
        return (1);
    else if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}