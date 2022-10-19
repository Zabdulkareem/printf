/**
 * check_buff_overflow - if writing over buffer space,
 * print everything then revert length back to 0 to write at buffer start
 * @buff: buffer holding string to print
 * @len: position in buffer
 * Return: length position
 */
int check_buff_overflow(char *buff, int len)
{
	if (len > 1020)
	{
		write(1, buff, len);
		len = 0;
	}
	return (len);
}