long long starship::modules::dart::parse_dart_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    unsigned long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    unsigned short v5;  // [bp-0x18]
    unsigned long long v7;  // rax

    v4.into_searcher(a1, a2);
    v2 = 0;
    v3 = a2;
    v5 = 1;
    if (!v2.advance_by(3))
    {
        v7 = v2.try_fold();
        if (v7)
        {
            v0.to_vec(v7, a2);
            *((unsigned long *)&a0[16]) = v1;
            *(a0) = v0;
            return v1;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
