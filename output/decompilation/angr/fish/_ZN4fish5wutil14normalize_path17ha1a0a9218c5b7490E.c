long long fish::wutil::normalize_path(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    void* v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned int v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x58]
    unsigned int v7;  // [bp-0x54]
    struct_0 *v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    unsigned int v11;  // eax
    void* v12;  // r13
    unsigned int v13;  // edx
    unsigned int v14;  // ebp
    unsigned int v15;  // ebp
    void* v16;  // r13
    void* v17;  // r13
    unsigned long long v18;  // rax
    unsigned long long v19;  // r15
    unsigned long long v20;  // rdx
    unsigned long long v21;  // r14
    unsigned long long v22;  // r14
    unsigned long long v23;  // rbp
    void* v24;  // r14
    void* v25;  // rax
    unsigned long long v26;  // r14
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rcx
    void* v29;  // rbx
    void* v30;  // rax
    unsigned int v32;  // ebp
    unsigned int v33;  // ebp
    unsigned int v34;  // ebp

    v6 = a3;
    v3 = a1;
    v4 = a1 + a2 * 4;
    if ((int)v3.next() == 2)
    {
        v12 = 0;
    }
    else
    {
        v12 = 0;
        while (true)
        {
            v15 = v14;
            v11.unwrap(v15, &g_14bd1b0);
            if (v15 != 47)
                break;
            v16 = v12 + 1;
            if ((char)_ccall(4, 24, v12 + 1, 0, (unsigned long long)(char)(v15 < 47)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c15f0); /* do not return */
            v11 = v3.next();
            v12 = v16;
            v14 = v13;
            if (v11 == 2)
                break;
        }
    }
    v17 = v12;
    v5 = 47;
    v3 = a1;
    v4 = a2;
    v9.collect(&v3);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3.into_iter(&v9);
    v18 = v3.next();
    if (v18)
    {
        v19 = v18;
        if (v17)
        {
            do
            {
                v22 = v21;
                if (!v22)
                    continue;
                v23 = v19 + v22 * 4;
                if (v19.eq_by(v23, "...", ".."))
                    continue;
                if (!v19.eq_by(v23, "..", &g_9f9ac9))
                {
                    v0.push(v19, v22, &g_14c1638);
                    continue;
                }
                else
                {
                    v24 = v2;
                    if (!v24)
                        continue;
                    v25 = v24 * 16 + v1;
                    if (v25 == 16)
                        goto LABEL_0x12ee179;
                    if (!(long long)v25[16].eq_by((long long)v25[16] + (long long)v25[8] * 4, "..", &g_9f9ac9))
                        v2 = v24 - 1;
                }
                v19 = v3.next();
                v20 = v20;
            } while (v19);
        }
        else
        {
            do
            {
                v26 = v21;
                if (!v26)
                    continue;
                v27 = v19 + v26 * 4;
                if (v19.eq_by(v27, "...", ".."))
                    continue;
                v28 = &g_14c1638;
                if (!v19.eq_by(v27, "..", &g_9f9ac9))
                {
LABEL_12edfe6:
                    v0.push(v19, v26, v28);
                }
                else
                {
                    v29 = v2;
                    v26 = 2;
                    if (!v29)
                    {
                        v19 = ".";
                        v28 = &g_14c1620;
                        goto LABEL_12edfe6;
                    }
                    v30 = v29 * 16 + v1;
                    if (v30 == 16)
                        goto LABEL_0x12ee179;
                    v19 = ".";
                    v28 = &g_14c1620;
                    if ((long long)v30[16].eq_by((long long)v30[16] + (long long)v30[8] * 4, "..", &g_9f9ac9))
                        goto LABEL_12edfe6;
                    v2 = v29 - 1;
                }
                v19 = v3.next();
                v21 = v13;
            } while (v19);
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v3);
    fish::wcstringutil::join_strings(&v3, v1, v2, 47);
    if (v17)
    {
        v32 = (v17 == 2 & (char)v6) + 1;
        do
        {
            v33 = v32;
            v7 = 47;
            v3.insert_slice(0, &v7, 1);
            v34 = v33 - 1;
            v32 = v34;
        } while (v33 != 1);
    }
    if (!*((long long *)&v5))
        v3.push(46);
    v8->field_10 = *((long long *)&v5);
    v8->field_0 = *((int128_t *)&v3);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v0, v1);
    return v8;
}
