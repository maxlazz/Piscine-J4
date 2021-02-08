int my_strlen(char const *str)
{
  int nbcase = 0;

  while (str[nbcase] != '\0')
    {
       nbcase++;
    }
  return (nbcase);
}  
