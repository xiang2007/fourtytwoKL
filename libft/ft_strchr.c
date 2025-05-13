char    *strchr(const char *str, int search_str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == search_str)
        {
            return str;
        }
        i++;
    }
    return NULL;
}