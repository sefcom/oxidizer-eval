long long uu_sort::sort_by(unsigned long long a0, unsigned long long a1, char a2[133], unsigned long long a3)
{
    if (a2[131])
    {
        return a0.par_sort_by(a1, a2, a3);
    }
    else if (a2[132] == 1)
    {
        return a0.par_sort_by(a1, a2, a3);
    }
    else
    {
        return a0.par_sort_unstable_by(a1, a2, a3);
    }
}
