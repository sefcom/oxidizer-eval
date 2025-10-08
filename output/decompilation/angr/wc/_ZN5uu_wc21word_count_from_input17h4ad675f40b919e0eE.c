long long uu_wc::word_count_from_input(void* a0, unsigned long long *a1, char a2[29])
{
    unsigned long v0;  // [bp-0x78]
    unsigned int v1;  // [bp-0x74]
    unsigned long v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: char
    int v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x48]
    unsigned long v6;  // [bp-0x40]
    int v7;  // [bp-0x38]
    int v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x18]
    char v12;  // dl
    unsigned long long v13;  // rax

    if (*(a1) == 9223372036854775809)
    {
        v0 = std::io::stdio::stdin();
        uu_wc::word_count_from_reader(&v3, (char)v0.lock(), v12 & 1, a2);
    }
    else
    {
        (char)v0.open(a1);
        if ((int)v0 == 1)
        {
            *((unsigned long *)&a0[8]) = v2;
            *((unsigned long long *)a0) = 2;
            return v2;
        }
        uu_wc::word_count_from_reader(&v3, v1, a2);
    }
    v9 = v5;
    v8 = v4;
    v7 = v3;
    *((unsigned long long *)&a0[40]) = v5;
    a0[24] = v4;
    a0[8] = v3;
    if (v6)
    {
        *((unsigned long *)&a0[48]) = v6;
        v13 = 1;
    }
    else
    {
        v13 = 0;
    }
    *((unsigned long long *)a0) = v13;
    return v13;
}
