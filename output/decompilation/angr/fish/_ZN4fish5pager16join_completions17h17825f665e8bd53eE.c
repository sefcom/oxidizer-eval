void fish::pager::join_completions(unsigned long long a0[3])
{
    int v0;  // [bp-0x118]
    int v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    unsigned long long v4;  // [bp-0xe8]
    void* v5;  // [bp-0xe0], Other Possible Types: unsigned long
    void* v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    void* v8;  // [bp-0xd0]
    void* v9;  // [bp-0xd0]
    int v10;  // [bp-0xc8]
    int v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0x80]
    int v13;  // [bp-0x78]
    char v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x48]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long v19;  // r14
    unsigned long v20;  // r15
    void* v21;  // r12
    unsigned long long v22;  // rax
    unsigned long v23;  // rbp

    v17 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v1) = g_14bd820;
    *((uint128_t *)&v0) = g_14bd810;
    v2 = v17;
    v3 = v18;
    v19 = a0[2];
    if (a0[2])
    {
        v20 = a0[1];
        v21 = 0;
        do
        {
            v22 = v21 * 144;
            if (!*((long long *)(v20 + v22 + 40)))
            {
                v21 += 1;
            }
            else
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v4, *((long long *)(v20 + v22 + 32)), *((long long *)(v20 + v22 + 40)));
                v15 = v7;
                memcpy(&v14, &v4, 16);
                v4.rustc_entry(&v0, &v14);
                if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
                {
                    v4.remove(a0, v21);
                    v23 = (long long)v6[8] - 1;
                    if ((long long)v6[8] < 1)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14dc7a0); /* do not return */
                    v19 = a0[2];
                    if (v23 >= a0[2])
                        core::panicking::panic_bounds_check(v23, v19, &g_14dc7b8); /* do not return */
                    v20 = a0[1];
                    v14.into_iter(&v4);
                    v23 * 144 + a0[1].spec_extend(&v14);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
                    core::ptr::drop_in_place<fish::complete::Completion>(&v11);
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v12, (long long)v13);
                    v5 = v5;
                    v9 = v9;
                }
                else
                {
                    v21 += 1;
                    v6 = v5;
                    v8 = v21;
                    v9.insert_no_grow((long long)v10, &v4);
                    v5 = v6;
                    v9 = v8;
                }
            }
        } while (v21 < v19);
    }
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<widestring::utfstring::Utf32String,usize>>(&v0);
    return;
}
