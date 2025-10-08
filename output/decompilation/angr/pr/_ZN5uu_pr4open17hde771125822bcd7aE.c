long long uu_pr::open(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xe8], Other Possible Types: char
    int v1;  // [bp-0xd8]
    char v2;  // [bp-0xc8]
    char v3;  // [bp-0xc0]
    char v4;  // [bp-0x90]
    unsigned long long v6;  // rax

    if ((char)a1.equal(a2, "-cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 1))
    {
        *((long long *)&a0[8]) = std::io::stdio::stdin().new();
        *((char **)&a0[16]) = &g_6693b8;
        *((unsigned long long *)a0) = 9223372036854775813;
        return 9223372036854775813;
    }
    std::fs::metadata(&v2, a1, a2);
    if (*((int *)&v2) != 2)
    {
        v6 = uu_pr::open::{{closure}}(&v0, a1, a2, *((int *)&v4));
        a0[16] = v1;
        *(a0) = v0;
        return v6;
    }
    return (unsigned long long)uu_pr::open::{{closure}}(a0, a1, a2, *((long long *)&v3));
}
