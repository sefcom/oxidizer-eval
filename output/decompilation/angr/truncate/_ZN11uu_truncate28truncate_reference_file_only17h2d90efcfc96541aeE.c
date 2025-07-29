long long uu_truncate::truncate_reference_file_only(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, char a4)
{
    char v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd0]
    char v2;  // [bp-0x88]
    unsigned long long v4[3];  // rax
    unsigned long long v5;  // rax

    std::fs::metadata(&v0, a0, a1);
    if (*((int *)&v0) == 2)
        return uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v1);
    v0 = a2;
    v1 = a2 + a3 * 24;
    while (true)
    {
        v4 = v0.next();
        if (!v4)
            return 0;
        v5 = uu_truncate::file_truncate(v4[1], v4[2], a4, *((long long *)&v2));
        if (v5)
            return v5;
    }
}
