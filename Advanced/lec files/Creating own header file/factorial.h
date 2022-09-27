int factorial(int number)
{
int iteration, factorial = 1;
for(iteration=1; iteration <= number; iteration++)
{
factorial = factorial * iteration;
}
return factorial;
}
