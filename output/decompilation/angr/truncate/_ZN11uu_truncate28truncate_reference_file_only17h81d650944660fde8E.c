long long uu_truncate::truncate_reference_file_only(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, char a4)
{
    char v0;  // [bp-0xd8]
    char v1;  // [bp-0xd0]
    char v2;  // [bp-0x88]
    void* v4;  // r12
    unsigned long long v5;  // rax

    std::fs::metadata(&v0, a0, a1);
    if (*((int *)&v0) == 2)
    {
        return uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, *((long long *)&v1));
    }
    else if (a3)
    {
        v4 = 0;
        while (true)
        {
            v5 = uu_truncate::file_truncate(*((long long *)(8 + a2 + (char *)v4)), *((long long *)(16 + a2 + (char *)v4)), a4, *((long long *)&v2));
            if (v5)
                return v5;
            v4 += 24;
            if (a3 * 24 == v4)
                return 0;
        }
    }
    else
    {
        return 0;
    }
}
