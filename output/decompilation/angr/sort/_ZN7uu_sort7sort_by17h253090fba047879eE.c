long long uu_sort::sort_by(unsigned long long a0[3], char a1[133], unsigned long long a2)
{
    unsigned long long v1;  // rcx
    char v2[133];  // rdx

    v1 = a2;
    v2 = a1;
    if (!a1[131] && a1[132] != 1)
        return a0[1].par_sort_unstable_by(a0[2], a1, a2);
    return a0[1].par_sort_by(a0[2], a1, a2);
}
