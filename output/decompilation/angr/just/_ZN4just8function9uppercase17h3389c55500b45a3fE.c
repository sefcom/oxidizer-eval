long long just::function::uppercase(void* *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    alloc::str::<impl str>::to_uppercase(a0 + 1, a2, a3);
    *(a0) = 0;
    return a0;
}
