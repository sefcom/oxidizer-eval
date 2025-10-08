long long just::function::replace(void* *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    alloc::str::<impl str>::replace(a0 + 1, a2, a3, a4, a5, a6, a7);
    *(a0) = 0;
    return a0;
}
