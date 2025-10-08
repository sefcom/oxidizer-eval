long long fish::builtins::commandline::strip_dollar_prefixes(void* a0, char a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x128]
    char v1;  // [bp-0x120]
    unsigned int *v2;  // [bp-0x118]
    unsigned long long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    void* v5;  // [bp-0x100]
    unsigned long long v6;  // [bp-0xf8]
    void* v7;  // [bp-0xf0]
    unsigned int *v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    int v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xc8]
    int v12;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    int v15;  // [bp-0xa0]
    char v16;  // [bp-0x90]
    char v17;  // [bp-0x48]
    unsigned long long v19;  // rax
    struct_1 *v20;  // rdx
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    if (a1 == 2 && ((char)a4.find(a5, "$", 2) & 1))
    {
        v16.to_vec(a2, a3);
        v1.add(&v16, a4, a5);
        fish::ast::parse(&v16, v2, v3, 12, 0);
        v5 = 0;
        v6 = 4;
        v7 = 0;
        v12.new(&v17, &g_14c2660);
        v11 = v13;
        v10 = v12;
        v4 = &g_14c8058;
        v0 = a3;
        while (true)
        {
            do
            {
                while (true)
                {
                    do
                    {
                        do
                        {
                            do
                            {
                                v19 = v10.next();
                                if (!v19)
                                {
                                    core::ptr::drop_in_place<fish::ast::Traversal>(&v10);
                                    v25 = v2.index(v3, v0, &g_14c8028);
                                    v5.spec_extend(v25, v25 + v20 * 4);
                                    *((unsigned long long *)&a0[16]) = 0;
                                    *((int128_t *)a0) = *((int128_t *)&v5);
                                    core::ptr::drop_in_place<fish::ast::Ast>(&v16);
                                    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
                                }
                                v20->field_40(&v14, v19);
                            } while ((int)v14 != 24);
                        } while (!(*((char *)(long long)v15) & 1));
                        v21 = *((int *)((long long)v15 + 4)).start();
                    } while (v21 < a3);
                    if (v21)
                    {
                        v22 = v21 - 1;
                        if (v22 >= v3)
                        {
                            v4 = &g_14c8040;
                            v23 = v22;
                            core::panicking::panic_bounds_check(v23, v3, 0x14c8040); /* do not return */
                        }
                        if (v2[1 + v21] != 10)
                            continue;
                    }
                    v23 = v21;
                    if (v23 >= v3)
                    {
                        v4 = &g_14c8058;
                        core::panicking::panic_bounds_check(v23, v3, &g_14c8058); /* do not return */
                    }
                    if (v2[v21] == 36)
                        break;
                }
                v8 = v2;
                v9 = v3;
            } while ((int)v2.char_at(v3, v21 + 1) != 32);
            v24 = v8.index(v9, v0, v21, &g_14c8070);
            v5.spec_extend(v24, v24 + v20 * 4);
            v0 = v21 + 2;
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
