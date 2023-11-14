int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

/**
* add - sum
* @x: first
* @y: secon
* Return: the sum
*/

int add(int x, int y)
{
	return (x + y);
}

/**
* sub - subtract
* @x: first
* @y: second
* Return: subtract
*/

int sub(int x, int y)
{
	return (x - y);
}

/**
* mul - multiplies
* @x: first int
* @y: second int
* Return: multiple
*/

int mul(int x, int y)
{
	return (x * y);
}

/**
* div - divided
* @x: first int
* @y: second int
* Return: division
*/

int div(int x, int y)
{
	return (x / y);
}

/**
  mod - module
  @x: first int
  @y: second int
  Return: modulus
*/

int mod(int x, int y)
{
	return (x % y);
}
