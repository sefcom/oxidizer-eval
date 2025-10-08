long long fish::complete::compare_completions_by_tilde(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v1;  // al
    unsigned int v2;  // ebx

    if (a1 && a3)
    {
        v1 = a0.ends_with(a1, 126);
        v2 = v1 & 0xffffff00 | v1 - a2.ends_with(a3, 126);
        return v2;
    }
    return 0;
}
