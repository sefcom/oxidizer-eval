long long uu_unexpand::expand_shortcuts(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    void* v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb0]
    unsigned long long v7;  // [bp-0xa8]
    char v8;  // [bp-0x98], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    void* v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    int v15;  // [bp-0x68]
    unsigned short v16;  // [bp-0x38]
    unsigned long long v18;  // rdx
    unsigned long long v19[3];  // rax
    char *v20;  // rbp
    char *v21;  // r15
    char *v22;  // r13
    unsigned long long v23;  // rax
    char *v24;  // r15
    unsigned long v25;  // r13
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v2 = a2.with_capacity_in(8, 24, &g_57a9f0);
    v3 = v18;
    v4 = 0;
    v5 = a1;
    v6 = a1 + a2 * 24;
    if (v5.next())
    {
        v1 = 0;
        v20 = &v8;
        v21 = &v2;
        v22 = &v5;
        v0 = 0;
        do
        {
            v8 = 0;
            v23 = ::0x49e2b0::core::char::methods::encode_utf8_raw(45, v20);
            v8 = v9;
            if ((char)core::slice::<impl [T]>::starts_with(v19[1], v19[2], v23, v18))
            {
                v24 = v20;
                v25 = v19[2];
                v26 = v19[1].get(v25);
                if (!v26)
                    core::str::slice_error_fail(v19[1], v25, 1, v25, &g_57aa20); /* do not return */
                v10 = v26;
                v11 = v26 + v18;
                v20 = v24;
                v21 = &v2;
                v22 = &v5;
                v8 = v10;
                if (v24.try_fold().eq())
                {
                    v13 = 0;
                    v14 = v18;
                    v16 = 1;
                    v0 = (int)v15.into_searcher(v10, v18) & 0xffffff00 | 1;
                    v13.fold(&v2);
                    continue;
                }
            }
            v10 = v8;
            v20.clone(v19);
            v21.push(v20, &g_57aa38);
            v27 = v19[1].equal(v19[2], "--all-a--tabs=", 5);
            if (!(char)v27)
            {
                v27 = v19[1].equal(v19[2], "-a--tabs=", 2);
                if (!(v27 & 255))
                    continue;
            }
            v1 = (unsigned int)v27 & 0xffffff00 | 1;
            v19 = v22.next();
        } while (v19);
        if (!((~((char)v0) | (char)v1) & 1))
        {
            v10.to_vec("--first-only--all-a--tabs=", 12);
            v7 = v12;
            memcpy(&v5, &v10, 16);
            v2.push(&v5, &g_57aa08);
        }
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v2);
    return a0;
}
