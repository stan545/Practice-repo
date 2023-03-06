void segf(void)
{
	char *str;

	str = "Hobberton";
	str[0] = 's';
}

int main(void)
{
	segf();
	return (0);
}
