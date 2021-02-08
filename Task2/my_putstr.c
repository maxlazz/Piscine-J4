int my_putstr(char const *str)
{
  int nbc = 0;

  while (str[nbc] != '\0')
    {
      my_putchar(str[nbc]);
      nbc++;
    }
  return (0);
}
