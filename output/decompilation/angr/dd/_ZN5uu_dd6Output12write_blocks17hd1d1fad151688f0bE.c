long long uu_dd::Output::write_blocks(struct_0 *a0, struct_2 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50], Other Possible Types: unsigned long long
    uint128_t v3;  // [bp-0x48]
    unsigned long long v5;  // rax
    void* v6;  // r12
    void* v7;  // r13
    void* v8;  // rbp
    unsigned long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx

    if (!a1->field_10->field_78)
    {
        v0 = &g_53d1a0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_53de08); /* do not return */
    }
    v0 = a2;
    v1 = a3;
    v2 = a1->field_10->field_78;
    v5 = v0.next();
    if (v5)
    {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        do
        {
            v10 = a1.write_block(v5, v9);
            if (((char)v10 & 1))
            {
                a0->field_8 = v11;
                a0->field_0 = 1;
                return v10;
            }
            v7 += a1->field_10->field_78 > v11;
            v6 += a1->field_10->field_78 <= v11;
            v8 += v11;
            v5 = v0.next();
        } while (v5);
    }
    else
    {
        v8 = 0;
        v7 = 0;
        v6 = 0;
    }
    a0->field_10 = v8;
    a0->field_18 = 0;
    a0->field_20 = v6;
    a0->field_28 = v7;
    a0->field_0 = 0;
    return v5;
}
