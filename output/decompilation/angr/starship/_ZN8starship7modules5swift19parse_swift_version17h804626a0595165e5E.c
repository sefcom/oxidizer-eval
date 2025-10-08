long long starship::modules::swift::parse_swift_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x70]
    int v1;  // [bp-0x68], Other Possible Types: char
    unsigned long v2;  // [bp-0x58]
    void* v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    unsigned short v6;  // [bp-0x18]
    unsigned long long v8;  // rax

    v5.into_searcher(a1, a2);
    v3 = 0;
    v4 = a2;
    v6 = 1;
    v0 = 0;
    if (((char)v3.try_fold(&v0) & 1))
    {
        v8 = v3.try_fold();
        if (v8)
        {
            v1.to_vec(v8, a2);
            *((unsigned long *)&a0[16]) = v2;
            *(a0) = v1;
            return v2;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
