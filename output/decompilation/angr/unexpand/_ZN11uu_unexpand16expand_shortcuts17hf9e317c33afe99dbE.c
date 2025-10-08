long long uu_unexpand::expand_shortcuts(struct_0 *a0, unsigned long long a1[3], unsigned long long a2)
{
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    unsigned long long v2;  // [bp-0xd0]
    void* v3;  // [bp-0xc0]
    char v4;  // [bp-0xb8], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x88]
    void* v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    int v13;  // [bp-0x68]
    unsigned short v14;  // [bp-0x38]
    unsigned long long v16;  // r12
    char *v17;  // r13
    unsigned long long v18;  // r12
    unsigned long v19;  // r15
    unsigned long v20;  // rbx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long v24;  // r12

    v2 = a2.with_capacity_in(8, 24, &g_4e8118);
    v3 = 0;
    if (a2)
    {
        v16 = a2 * 24;
        v1 = 0;
        v17 = &v4;
        v0 = 0;
        do
        {
            v18 = v16;
            v19 = a1[1];
            v20 = a1[2];
            v4 = 0;
            v6 = v5;
            if ((char)core::slice::<impl [T]>::starts_with(v19, v20, ::0x459cd0::core::char::methods::encode_utf8_raw(45, v17)))
            {
                v21 = v19.get(v20);
                if (!v21)
                    core::str::slice_error_fail(v19, v20, 1, v20, &g_4e8130); /* do not return */
                v4 = v21;
                v7 = v21 + v22;
                v6 = v4;
                if (v6.try_fold().eq())
                {
                    v11 = 0;
                    v12 = v22;
                    v14 = 1;
                    v0 = (int)v13.into_searcher(v4, v22) & 0xffffff00 | 1;
                    v11.fold(&v2);
                    v17 = &v4;
                    continue;
                }
            }
            v4 = v6;
            v17 = &v4;
            v4.clone(a1);
            v2.push(&v4, &g_4e8148);
            v23 = v19.equal(v20, "--all-a--tabs=", 5);
            if (!(char)v23)
            {
                v23 = v19.equal(v20, "-a--tabs=", 2);
                if (!(v23 & 255))
                    continue;
            }
            v1 = (unsigned int)v23 & 0xffffff00 | 1;
            a1 += 1;
            v24 = v18 - 24;
            v16 = v24;
        } while (v18 != 24);
        if (!((~((char)v0) | (char)v1) & 1))
        {
            v4.to_vec("--first-only--all-a--tabs=", 12);
            v10 = v8;
            memcpy(&v9, &v4, 16);
            v2.push(&v9, &g_4e8160);
        }
    }
    a0->field_10 = 0;
    a0->field_0 = v2;
    a0->field_8 = v22;
    return a0;
}
