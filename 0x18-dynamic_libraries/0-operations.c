int add(int op1, int op2);
int sub(int op1, int op2);
int mul(int op1, int op2);
int div(int op1, int op2);
int mod(int op1, int op2);

/**
* add - adds two integers
* @op1: first integer to add
* @op2: second integer to add
* Return: the sum
*/

int add(int op1, int op2)
{
	return (op1 + op2);
}

/**
* sub - subtracts two integers
* @op1: first integer to subtract
* @op2: second integer to subtract
* Return: the subtract
*/

int sub(int op1, int op2)
{
	return (op1 - op2);
}

/**
* mul - multiplies two integers
* @op1: first integer to multiply
* @op2: second integer to multiply
* Return: the product
*/

int mul(int op1, int op2)
{
	return (op1 * op2);
}

/**
* div - divideds two integers
* @op1: first integer to divide
* @op2: second integer to divide
* Return: the dividend integer
*/

int div(int op1, int op2)
{
	return (op1 / op2);
}

/**
 * mod - finds the modulus of two integers
 * @op1: first integer to get the module
 * @op2: second integer to get the module
 * Return: the modulus
*/

int mod(int op1, int op2)
{
	return (op1 % op2);
}
