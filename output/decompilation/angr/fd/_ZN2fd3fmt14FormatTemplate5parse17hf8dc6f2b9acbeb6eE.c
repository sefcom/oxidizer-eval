long long fd::fmt::FormatTemplate::parse(unsigned long a0, unsigned long long a1, void* a2)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8]
    void* v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    void* v6;  // [bp-0x90]
    unsigned int v7;  // [bp-0x84]
    unsigned long long v8;  // [bp-0x80]
    int v9;  // [bp-0x78]
    unsigned int v10;  // [bp-0x78]
    int v11;  // [bp-0x78]
    int v12;  // [bp-0x78]
    struct_0 *v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    void* v16;  // [bp-0x48]
    void* v17;  // [bp-0x40]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // rax
    void* v22;  // r15
    void* v23;  // r14
    unsigned long long v24;  // rax
    unsigned long v25;  // r14
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    void* v29;  // r14
    unsigned long long v30;  // rax
    void* v32;  // r12

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v20 = std::sync::once_lock::OnceLock<T>::get_or_try_init();
    while (true)
    {
        v9.try_find(v20, a1, a2);
        v15.expect(&v9);
        if ((int)v15 != 1)
            break;
        v22 = v16;
        v23 = v17;
        if (*((int *)&v18) < 2)
        {
            v22 += 1;
            v24 = v22.get(a1, a2);
            if (!v24)
                core::str::slice_error_fail(a1, a2, 0, v22, &g_802398); /* do not return */
            v0.spec_extend(v24, v27 + v24);
            a1 = v23.get(a1, a2);
            v9 = v9;
            if (!a1)
                core::str::slice_error_fail(a1, a2, v23, a2, &g_8023b0); /* do not return */
        }
        else
        {
            v7 = *((int *)&v18);
            v3 = v23;
            v8 = a1;
            v25 = a2;
            v26 = v23.get(a1, a2);
            if (!v26)
            {
                a1 = v8;
                v29 = v3;
                core::str::slice_error_fail(a1, v25, v29, v25, &g_8023c8); /* do not return */
            }
            v10 = 0;
            a1 = v8;
            a2 = v25;
            if ((char)core::slice::<impl [T]>::starts_with(v26, v27, ::0x5ccc90::core::char::methods::encode_utf8_raw(125, &v10), v27))
            {
                v22 = v3;
                v28 = v22.get(a1, a2);
                if (!v28)
                    core::str::slice_error_fail(a1, a2, 0, v22, &g_802440); /* do not return */
                v0.spec_extend(v28, v27 + v28);
                v29 = v3 + 1;
                a1 = v29.get(a1, a2);
                v9 = v11;
                if (!a1)
                {
                    v32 = a2;
                    core::str::slice_error_fail(a1, a2, v29, v32, &g_802458); /* do not return */
                }
            }
            else
            {
                v30 = v22.get(a1, a2);
                if (!v30)
                    core::str::slice_error_fail(a1, a2, 0, v22, &g_8023e0); /* do not return */
                v0.spec_extend(v30, v27 + v30);
                v12 = v11;
                v9 = v12;
                fd::fmt::token_from_pattern_id(&v9, v7);
                v4.push(&v9, &g_802410);
                v29 = v3;
                a1 = v29.get(a1, a2);
                v9 = v9;
                if (!a1)
                {
                    v32 = a2;
                    core::str::slice_error_fail(a1, a2, v29, v32, &g_802428); /* do not return */
                }
            }
        }
    }
    if (a2)
        v0.spec_extend(a1, a2 + a1);
    if (!v6)
    {
        *((long long *)((char *)&v14->field_8 + 8)) = 0;
        *((int128_t *)&(&v14->field_0)[1]) = *((int128_t *)&v0);
        v14->field_0 = 1;
        return core::ptr::drop_in_place<alloc::vec::Vec<fd::fmt::Token>>(&v4);
    }
    *((void* *)((char *)&v14->field_8 + 8)) = v6;
    *((int128_t *)&(&v14->field_0)[1]) = *((int128_t *)&v4);
    v14->field_0 = 0;
    return core::ptr::drop_in_place<alloc::string::String>(&v0);
}
