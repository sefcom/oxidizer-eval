long long fish::parse_util::parse_util_locate_cmdsubst_range(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3, char a4, unsigned long long a5, unsigned long long a6)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    int v1;  // [bp-0x20], Other Possible Types: char

    if (*(a3) >= a2)
    {
        *((unsigned long long *)a0) = 1;
        return a0;
    }
    fish::parse_util::parse_util_locate_cmdsub(&v0, a1, a2, *(a3), a4, a5, a6);
    if (*((int *)&v0) >= 2)
        *(a3) = *((long long *)&v1);
    *((int128_t *)&a0[16]) = (int128_t)v1;
    *(a0) = v0;
    return a0;
}
