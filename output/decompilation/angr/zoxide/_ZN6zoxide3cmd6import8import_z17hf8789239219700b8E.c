long long zoxide::cmd::import::import_z(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x118]
    unsigned long long v1;  // [sp-0x110]
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    unsigned long long v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xe0]
    unsigned long long v9;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0xd0]
    void* v11;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    void* v12;  // [bp-0xc0]
    unsigned long long v13;  // [bp-0xb8]
    int v14;  // [bp-0xb0]
    unsigned short v15;  // [bp-0x80]
    void* v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    unsigned short v19;  // [bp-0x38]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rdx
    void* v25;  // rax
    void* v26;  // rax

    v18.into_searcher(10, a1, a2);
    v16 = 0;
    v17 = a2;
    v19 = 0;
    if (v16.next_inclusive())
    {
        do
        {
            v2 = v21.call(v22);
            v3 = v23;
            if (v23)
            {
                v14.into_searcher(124, v2, v23);
                v12 = 0;
                v13 = v23;
                v15 = 1;
                v11 = 2;
                v0.with_context(v12.next_back(a1, a2), a2, &v2);
                if (!v0)
                    return v1;
                v4 = v0;
                v5 = v1;
                ::0x47b630::core::num::<impl u64>::from_ascii_radix(&v0, v0, v1);
                if (((char)v0.with_context(&v4, a2) & 1))
                    return v23;
                if (v11)
                {
                    if (v11 == 1)
                    {
                        v11 = 0;
                        v25 = v12.get_end();
                    }
                    else
                    {
                        v11 -= 1;
                        v25 = v12.next_back(a1, a2);
                    }
                }
                else
                {
                    v25 = 0;
                }
                v0.with_context(v25, a2, &v2);
                v8 = v7;
                if (!v0)
                    return v8;
                v6 = v0;
                v7 = v1;
                v0.from_str(v0, v7);
                v9.with_context(&v0, &v6);
                v8 = v10;
                if (((char)v9 & 1))
                    return v8;
                if (v11)
                {
                    if (v11 == 1)
                    {
                        v11 = 0;
                        v26 = v12.get_end();
                    }
                    else
                    {
                        v11 -= 1;
                        v26 = v12.next_back(a1, a2);
                    }
                }
                else
                {
                    v26 = 0;
                }
                v0.with_context(v26, a2, &v2);
                if (!v0)
                {
                    v8 = v1;
                    return v8;
                }
                a0.add_unchecked(v0, v1, v23);
            }
            v21 = v16.next_inclusive();
        } while (v21);
    }
    if (a0->field_38 == 1)
        a0.dedup();
    return 0;
}
