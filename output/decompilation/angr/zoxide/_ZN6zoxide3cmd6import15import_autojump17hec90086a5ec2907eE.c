long long zoxide::cmd::import::import_autojump(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    void* v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    char v10;  // [bp-0x88]
    unsigned short v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx

    v10.into_searcher(10, a1, a2);
    v8 = 0;
    v9 = a2;
    v11 = 0;
    if (v8.next_inclusive())
    {
        do
        {
            v4 = v14.call(v15);
            v5 = v16;
            if (v16)
            {
                core::str::<impl str>::split_once(&v12, v4, a2);
                v0.with_context(&v12, &v4);
                if (!v0)
                {
                    return v1;
                }
                v6 = v0;
                v7 = v1;
                v12.from_str(v0, v1);
                v0.with_context(&v12, &v6);
                if ((int)v0 == 1)
                    return v1;
                zoxide::cmd::import::sigmoid();
                a0.add_unchecked(v2, v3, 0);
            }
            v14 = v8.next_inclusive();
        } while (v14);
    }
    if (a0->field_38 == 1)
        a0.dedup();
    return 0;
}
