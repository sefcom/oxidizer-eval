long long just::unindent::unindent(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5[2];  // [bp-0x68]
    void* v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long v8;  // [bp-0x50], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x38]
    void* v12;  // r13
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    unsigned int v15;  // edx
    unsigned long long v16;  // rcx
    void* v17;  // rbx
    unsigned long long v18;  // rax
    void* v19;  // rbx
    unsigned long long v20[2];  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // r14
    unsigned long v23;  // rbp
    unsigned long v24;  // r13
    unsigned long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v0 = a1;
    v7 = a1;
    v8 = a1 + a2;
    v9 = 0;
    v12 = 0;
    while (true)
    {
        v13 = v7.next();
        v14 = 1;
        if (v15 != 10)
        {
            if (v15 != 0x110000)
            {
                if (v15 >= 128)
                {
                    v16 = v15 < 0x10000 | 18446744073709551612;
                    if (v15 < 0x800)
                        v16 = 18446744073709551614;
                    if (v13 != v16 + a2)
                        continue;
                    v14 = 2;
                    if (v15 >= 0x800)
                        v14 = 4 - (v15 < 0x10000);
                }
                else if (!(v13 == a2 - 1))
                {
                    continue;
                }
            }
            else
            {
                if (!v2.fold(v3 * 16 + v2))
                {
                    v19 = 0;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        v17 = v14 + v13;
        v18 = v12.get(v17, v0, a2);
        if (!v18)
            core::str::slice_error_fail(v0, a2, v12, v17, &g_8318c8); /* do not return */
        v1.push(v18, a2, &g_8318e0);
        v12 = v17;
    }
    v0 = v19;
    v4 = v3.with_capacity_in(8, 16, &g_831880);
    v5[0] = v20;
    v6 = 0;
    v7 = v2;
    v8 = v3 * 16 + v2;
    v9 = 0;
    while (true)
    {
        v21 = v7.next();
        if (!v20)
        {
            v7.into_iter(&v4);
            v10.collect(&v7);
            core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(v1, v2);
            return a0;
        }
        v22 = v21;
        v23 = v20[0];
        v24 = v20[1];
        if (just::unindent::blank(v23, v24))
        {
            v25 = v3 - 1;
            v26 = ((v22 & v22 != v25) ? "\n" : 1);
            v27 = v22 & v22 != v25;
        }
        else
        {
            v26 = v0.get(v23, v24);
            if (!v26)
                core::str::slice_error_fail(v23, v24, v0, v24, &g_831898); /* do not return */
        }
        v4.push(v26, v27, &g_8318b0);
    }
}
