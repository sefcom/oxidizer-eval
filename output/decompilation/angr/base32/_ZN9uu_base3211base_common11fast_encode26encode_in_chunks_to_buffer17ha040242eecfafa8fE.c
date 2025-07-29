long long uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(unsigned long long a0, struct_1 **a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long a6, struct_0 *a7)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    uint128_t v5;  // [bp-0x90]
    char v6;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    char v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rax
    unsigned long long v16;  // rax
    unsigned long v17;  // rdx
    unsigned long long v18;  // rax

    v13 = a5;
    v0 = a2;
    if (a3)
    {
        if (a3 <= a5)
        {
            ::0x4b5510::core::slice::<impl [T]>::split_at_unchecked(&v6, a4, a5, a3);
            a4 = v8;
            v13 = v9;
            a7.spec_extend(v6, v7 + v6, &g_5a2e10);
            v1 = a7->field_18;
            if (a7->field_18 != a2)
            {
                v2 = 0;
                core::panicking::assert_failed(0, &v1, &v0, &v2, &g_5a2e28); /* do not return */
            }
            v14 = a1(a0, a7.make_contiguous());
            if (v14)
                return v14;
            a7.truncate(0);
            a7->field_10 = 0;
        }
        else
        {
            v2 = &g_5a2de8;
            v3 = 1;
            v4 = 8;
            v5 = 0;
            core::panicking::panic_fmt(&v2, &g_5a2df8); /* do not return */
        }
    }
    ::0x4b5470::core::slice::<impl [T]>::chunks_exact(&v10, a4, v13, a2, &g_5a2e40);
    while (true)
    {
        v16 = v10.next();
        if (!v16)
        {
            a7.spec_extend(v11, *((long long *)&v12) + v11, &g_5a2e58);
            return 0;
        }
        v1 = v17;
        if (v17 != v0)
        {
            v2 = 0;
            v2 = 0;
            core::panicking::assert_failed(0, &v1, &v0, &v2, &g_5a2e70); /* do not return */
        }
        v18 = a1(a0, v16);
        if (v18)
            return v18;
    }
}
