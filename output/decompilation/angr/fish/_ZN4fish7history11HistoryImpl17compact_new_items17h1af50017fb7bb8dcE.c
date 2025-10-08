void fish::history::HistoryImpl::compact_new_items(unsigned long long a0[23])
{
    unsigned long v0;  // [bp-0xd0]
    int v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0]
    int v4;  // [bp-0x80]
    char v5;  // [bp-0x70]
    unsigned long long v7;  // r14
    unsigned long v8;  // r14
    unsigned long long *v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // rax

    v3.default();
    v7 = a0[10];
    if (v7)
    {
        v0 = &a0[8];
        v8 = v7 - 1;
        v9 = v7 * 80 - 72;
        do
        {
            v10 = v8;
            if (v10 >= a0[10])
                core::panicking::panic_bounds_check(v10, a0[10], &g_14d9da8); /* do not return */
            v11 = a0[9];
            if (!*(64 + v11 + (char *)v9))
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v4, *((long long *)(v11 + (char *)v9)), *((long long *)(8 + v11 + (char *)v9)));
                v2 = *((long long *)&v5);
                v1 = v4;
                if ((char)v3.insert(&v1))
                {
                    v4.remove(v0, v10, &g_14d9dc0);
                    core::ptr::drop_in_place<fish::history::HistoryItem>(&v4);
                    if (v10 < a0[22])
                        a0[22] = a0[22] - 1;
                }
            }
            v9 += 10;
            v8 = v10 - 1;
        } while ((char)__CFADD__(v10, -1));
    }
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<widestring::utfstring::Utf32String>>(&v3);
    return;
}
