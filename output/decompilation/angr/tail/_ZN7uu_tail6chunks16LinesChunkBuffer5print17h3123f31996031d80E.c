long long uu_tail::chunks::LinesChunkBuffer::print(unsigned long long a0, unsigned long long a1)
{
    unsigned long long *v0;  // [bp-0x50], Other Possible Types: char
    unsigned long long *v1;  // [bp-0x48]
    unsigned long long *v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long *v5;  // rsi
    unsigned long long *v6;  // rcx
    unsigned long long *v7;  // rsi
    unsigned long long *v8;  // rsi
    unsigned long long *v9;  // rcx
    unsigned long long *v10;  // r15
    unsigned long long *v11;  // r13
    unsigned long long *v12;  // rbp
    unsigned long long v13;  // rax

    v0.iter(a0);
    v5 = *((long long *)&v3);
    while (true)
    {
        v6 = v2;
        v7 = v5;
        if (v0 != v1)
        {
            v8 = v7;
            v9 = v6;
            v10 = v0;
        }
        else
        {
            v8 = v0;
            v9 = v0;
            v1 = v7;
            v10 = v6;
            if (v10 == v1)
                return 0;
        }
        v11 = v9;
        v12 = v8;
        v0 = v10 + 1;
        v13 = *(v10).print_bytes(a1);
        v5 = v12;
        v2 = v11;
        if (v13)
            return v13;
    }
}
