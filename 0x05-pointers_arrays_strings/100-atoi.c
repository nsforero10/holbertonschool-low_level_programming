/**
 *_strcpy - retrun the length of a string
 *@dest: the destiny
 *@src: the string to be copied
 *Return: the char array copied
 */

int _atoi( char *s)
{
        int i, rta, crrtval, sign;

        i = 0;
        rta = 0;
        sign = 1;
        while (s[i] != '\0')
        {
                crrtval = s[i];
                if (crrtval >= 48 && crrtval <= 57)
                {
                        rta = (rta != 0) ?
                                (rta*10 + crrtval - 48) : (crrtval-48);
                }
                else if (crrtval == 45)
                {
                        sign *= -1;
                }
                else if (crrtval > 0 && rta > 0)
                {
                        break;
                }
                i++;
        }
        return (rta * sign);
}
