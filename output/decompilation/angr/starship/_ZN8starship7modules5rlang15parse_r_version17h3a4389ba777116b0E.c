long long starship::modules::rlang::parse_r_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb0], Other Possible Types: char
    unsigned long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    char v4;  // [bp-0x88]
    unsigned short v5;  // [bp-0x60]
    void* v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    unsigned short v9;  // [bp-0x18]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v14;  // rax

    v8.into_searcher(10, a1, a2);
    v6 = 0;
    v7 = a2;
    v9 = 0;
    v11 = v6.next_inclusive();
    if (v11)
    {
        v4.into_searcher(v11.call(v12), a2);
        v2 = 0;
        v3 = v12;
        v5 = 1;
        if (!v2.advance_by(2))
        {
            v14 = v2.try_fold();
            if (v14)
            {
                v0.to_vec(v14, a2);
                *((unsigned long *)&a0[16]) = v1;
                *(a0) = v0;
                return v1;
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
