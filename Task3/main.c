void my_putchar(char c)
{
  write (1, &c, 1);
}

int my_strlen(char const *str);

int main ()
{
  char chainedeNombre [] = "Bonjour";
    
  my_strlen(chainedeNombre);
  return (0);
}
