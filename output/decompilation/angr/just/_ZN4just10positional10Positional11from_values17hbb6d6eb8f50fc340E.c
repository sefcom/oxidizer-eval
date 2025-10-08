long long just::positional::Positional::from_values(struct_0 *a0, unsigned long long *a1)
{
    int v0;  // [bp-0x138], Other Possible Types: char
    unsigned long long v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x118]
    unsigned long long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    unsigned long v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf8]
    int v8;  // [bp-0xf8]
    unsigned long long v9;  // [bp-0xe8]
    void* v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    void* v12;  // [bp-0xc8]
    void* v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    void* v15;  // [bp-0xb0]
    int v16;  // [bp-0xa0]
    char v17;  // [bp-0x70]
    unsigned long long v19;  // r15
    unsigned long long v20;  // rdx
    unsigned long v21;  // rbp

    v13 = 0;
    v14 = 8;
    v15 = 0;
    v7 = 0x8000000000000000;
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if (*(a1))
    {
        v17.into_iter(a1);
        while (true)
        {
            v19 = v17.next();
            if (!v19)
                break;
            if (v6 != 0x8000000000000000 || v12)
            {
                v2.to_vec(v19, v20);
                v1 = v4;
                memcpy(&v0, &v2, 16);
                v10.push(&v0, &g_830a98);
            }
            else
            {
                v16.override_from_value(v19, v20);
                if ((long long)v16 != 0x8000000000000000)
                {
                    v13.push(&v16);
                }
                else if ((char)v19.equal(v20, ".//rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs", 1) || (char)v19.equal(v20, "...//rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs", 2))
                {
                    v2.to_vec(v19, v20);
                    v1 = v4;
                    memcpy(&v0, &v2, 16);
                    core::ptr::drop_in_place<regex::error::Error>(&v8);
                    v9 = v1;
                    v8 = v0;
                }
                else if (((char)core::str::<impl str>::rfind(v19, v20) & 1))
                {
                    v21 = v20 + 1;
                    ::0x5f9850::core::str::<impl str>::split_at_checked(&v2, v19, v20, v21);
                    if (!v2)
                        core::str::slice_error_fail(v19, v20, 0, v21, &g_830a50); /* do not return */
                    v2.to_vec(v2, v3);
                    v1 = v4;
                    memcpy(&v0, &v2, 16);
                    core::ptr::drop_in_place<regex::error::Error>(&v8);
                    v9 = v1;
                    v8 = v0;
                    if (v5)
                    {
                        v2.to_vec(v4, v5);
                        v1 = v4;
                        memcpy(&v0, &v2, 16);
                        v10.push(&v0, &g_830a68);
                    }
                }
                else
                {
                    v2.to_vec(v19, v20);
                    v1 = v4;
                    memcpy(&v0, &v2, 16);
                    v10.push(&v0, &g_830a80);
                }
            }
        }
    }
    a0->field_10 = v12;
    a0->field_0 = v10;
    a0->field_8 = 8;
    a0->field_18 = v13;
    a0->field_20 = 8;
    a0->field_28 = 0;
    *((void*)&a0->field_30) = v8;
    a0->field_40 = v9;
    return v9;
}
