long long uu_pr::file_last_modified_time(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    char v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0]

    std::fs::metadata(&v2, a1, a2);
    if (*((int *)&v2) == 2)
    {
        v1 = *((long long *)&v3);
        v0 = 0x8000000000000000;
    }
    else
    {
        uu_pr::file_last_modified_time::{{closure}}(&(char)v0, &v2);
    }
    return a0.unwrap_or_default(&v0);
}
