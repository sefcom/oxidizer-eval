long long ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(unsigned long long a0[5], unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    void* v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xa0], Other Possible Types: char, unsigned long
    char v4;  // [bp-0x9f]
    unsigned long v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x60]
    unsigned long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    char v13;  // [bp-0x37]
    unsigned long long v15;  // rdx
    unsigned long v16;  // rax
    unsigned long long v17;  // rsi
    char *v18;  // rax
    unsigned long long v19;  // r15
    unsigned long long v20;  // r15

    smallvec::infallible(a8.try_reserve(a0[4] * 2 + 1), v15);
    v1 = a0[0];
    v2 = a1;
    v3 = a2;
    v0 = 0;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
    v16 = a0[4];
    v7 = v16;
    v8 = a0[2];
    if (v16 != a0[2])
    {
        v0 = &g_97d4a8;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        core::panicking::assert_failed(0, &v7, &v8, &v0, &g_97d4b8); /* do not return */
    }
    else if (v16)
    {
        v17 = a0[1];
        v6 = (v16 - 1) * 80 + a0[3];
        v5 = v16 + v17 - 1;
        v0.zip(v17, v16 + v17 - 1, a0[3], v16 - 1);
        if (v0.next())
        {
            do
            {
                v20 = v19;
                v10 = 4;
                v11 = 0;
                v12 = 1;
                v13 = *(v18);
                v9 = 3;
                a8.push(&v9);
                v10 = v20;
                v9 = 1;
                ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v9, a5, a6, a7, a8);
                v18 = v0.next();
                v19 = v15;
            } while (v18);
        }
        v1 = 4;
        v2 = 0;
        v3 = 1;
        v4 = *((char *)v5);
        v0 = 3;
        a8.push(&v0);
        v1 = v6;
        v2 = a3;
        v3 = a4;
        v0 = 2;
        return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
    }
    else
    {
        return v16;
    }
}
