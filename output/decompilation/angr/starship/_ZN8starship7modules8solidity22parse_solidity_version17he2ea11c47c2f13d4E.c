long long starship::modules::solidity::parse_solidity_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    char v2;  // [bp-0xb0]
    unsigned short v3;  // [bp-0x80]
    int v4;  // [bp-0x78], Other Possible Types: char
    unsigned long v5;  // [bp-0x68]
    void* v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x50]
    unsigned short v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax

    v8.into_searcher(a1, a2);
    v6 = 0;
    v7 = a2;
    v9 = 1;
    if (v6.advance_by(7))
    {
LABEL_bbcd3d:
        v2.into_searcher(43, a1, a2);
        v0 = 0;
        v1 = a2;
    }
    else
    {
        v11 = v6.try_fold();
        if (!v11)
            goto LABEL_bbcd3d;
        v2.into_searcher(43, v11, v12);
        v0 = 0;
        v1 = v12;
    }
    v3 = 0;
    v13 = v0.next();
    if (!v13)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v4.to_vec(v13, a2);
    *((unsigned long *)&a0[16]) = v5;
    *(a0) = v4;
    return v5;
}
