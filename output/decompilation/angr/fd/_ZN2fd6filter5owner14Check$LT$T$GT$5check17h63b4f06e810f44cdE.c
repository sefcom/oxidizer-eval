char fd::filter::owner::Check<T>::check(unsigned int a0, unsigned long long a1, unsigned int a2)
{
    if (!a0)
    {
        return a2.eq(a1);
    }
    else if (a0 == 1)
    {
        return a2.ne(a1);
    }
    else
    {
        return 1;
    }
}
