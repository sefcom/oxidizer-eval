long long just::function::env(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    if (a4)
        just::function::env_var_or_default(a0, a1, a2, a3, a4, a5);
    else
        just::function::env_var(a0, a1, a2, a3);
    return a0;
}
