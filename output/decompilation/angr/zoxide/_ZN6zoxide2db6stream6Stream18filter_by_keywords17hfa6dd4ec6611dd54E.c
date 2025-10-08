long long zoxide::db::stream::Stream::filter_by_keywords(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    unsigned long long v6;  // r12
    unsigned long v7;  // rbp
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rdx
    void* v11;  // r12
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // r8
    unsigned long long v17;  // rdx
    unsigned long v18;  // r13

    if (a1)
    {
        v6 = a1 * 3;
        v7 = a0 + v6 * 8 - 24;
        zoxide::util::to_lowercase(&v0, a2, a3);
        v8 = v1;
        v9 = v2;
        if (((char)core::str::<impl str>::rfind(v8, v9, v7) & 1))
        {
            v11 = *((long long *)(v6 * 8 + a0 - 8)) + v10;
            v12 = v11.get(v8, v9);
            if (v12)
            {
                if ((char)v12.is_contained_in(v10))
                    goto LABEL_49154b;
                if (v10.get(v8, v9))
                {
                    v3 = a0;
                    v4 = v7;
                    v11 = 0;
                    do
                    {
                        v9 = v14;
                        v8 = v13;
                        v15 = v3.next_back();
                        a0 = a0 & 0xffffffffffffff00 | !v15;
                        if (!v15 || !((char)core::str::<impl str>::rfind(v8, v9, v15) & 1))
                            goto LABEL_49154e;
                        v13 = v10.get(v8, v9);
                    } while (v13);
                    v16 = &g_534a10;
                    v17 = v10;
                }
                else
                {
                    v16 = &g_5349f8;
                    v11 = 0;
                    v17 = v10;
                }
            }
            else
            {
                v16 = &g_5349e0;
                v17 = v9;
            }
            core::str::slice_error_fail(v8, v9, v11, v17, v16); /* do not return */
        }
LABEL_49154b:
        a0 = 0;
LABEL_49154e:
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else
    {
        a0 = v18 & 0xffffffffffffff00 | 1;
    }
    return a0 & 4294967295;
}
