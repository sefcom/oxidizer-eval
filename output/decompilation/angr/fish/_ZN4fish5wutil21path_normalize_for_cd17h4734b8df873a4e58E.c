long long fish::wutil::path_normalize_for_cd(struct_0 *a0, unsigned int *a1, unsigned long long a2, unsigned int *a3, unsigned long long a4)
{
    struct_0 *v0;  // [bp-0x128]
    char *v1;  // [bp-0x120]
    void* v2;  // [bp-0x118], Other Possible Types: unsigned int *, char, unsigned long long
    void* v3;  // [bp-0x118]
    void* v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x110]
    unsigned int v6;  // [bp-0x108], Other Possible Types: unsigned long long
    int v7;  // [bp-0x100], Other Possible Types: unsigned int *
    unsigned long long v8;  // [bp-0xf8]
    unsigned int v9;  // [bp-0xf0]
    char v10;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xe0]
    void* v12;  // [bp-0xd8]
    int v13;  // [bp-0xc8]
    int v14;  // [bp-0xb8]
    unsigned long v15;  // [bp-0xb0]
    unsigned long long v16[2];  // [bp-0xa8], Other Possible Types: char
    unsigned long long v17[2];  // [bp-0xa0]
    unsigned long v18;  // [bp-0x90]
    int v19;  // [bp-0x88], Other Possible Types: char
    int v20;  // [bp-0x78]
    char v21;  // [bp-0x68]
    char v22;  // [bp-0x58]
    char v23;  // [bp-0x48]
    void* v25;  // rax
    struct_0 *v26;  // rbx
    struct_0 *v27;  // rbx
    unsigned int *v28;  // 4096
    unsigned long long v29;  // 4096
    struct_0 *v30;  // rbp
    unsigned long long v31[2];  // r14
    unsigned long v32;  // rdi
    unsigned long long v33;  // cc_op
    char v34;  // al
    unsigned long v35;  // cc_ndep
    unsigned long long v36;  // rdx
    struct_0 *v37;  // 4096
    unsigned long long v38[2];  // r13
    unsigned long long v41[2];  // r14

    if (a2 && *(a1) == 47)
    {
        v25 = &a1[a2];
        if (v25 != 4 && (int)v25[4] == 47)
        {
            if (a4)
            {
                if (*(a3) != 46)
                {
                    if (*(a3) == 47)
                    {
                        v26 = a0;
                        v27 = v26;
                        v26.to_vec(a3, a4);
                        return v27;
                    }
                    v2.to_vec(a1, a2);
                    v30 = a0;
                    a0.add(&v2, a3, a4);
                }
                else
                {
                    v2 = a1;
                    v5 = a2;
                    v6 = 47;
                    v1 = &v19;
                    v19.collect(&v2);
                    v7 = a3;
                    v8 = a4;
                    v9 = 47;
                    v2 = 0;
                    while (true)
                    {
                        v3 = v2;
                        v31 = v3.get_or_insert_with(&v7);
                        v32 = v31[0];
                        v33 = 20;
                        if (!v32)
                            break;
                        if (v31[1] && !v32.eq_by(v32 + v31[1] * 4, "...", ".."))
                        {
                            v34 = v31[0].eq_by(v31[0] + v31[1] * 4, "..", &g_9f9ac9);
                            v33 = 17;
                            v32 = v34;
                            if (!v34)
                                break;
                            v33 = 20;
                            if (!v19.pop_back())
                                break;
                        }
                        v4 = 0;
                        v2 = v4;
                        if (((char)v2 & 1))
                            continue;
                        v7.next();
                        v2 = v4;
                    }
                    v14 = v20;
                    v13 = v19;
                    memcpy(&v21, &v3, 16);
                    memcpy(&v22, &v6, 16);
                    memcpy(&v23, &v8, 16);
                    v1 = &v13;
                    v13.spec_extend(&v21);
                    v10.iter(&v13);
                    if ((char)_ccall(4, 24, v15 + 1, 0, _ccall(v33, v32, 0, v35)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c1690); /* do not return */
                    v10 = v10.fold(v15 + 1).with_capacity_in(4, 4, &g_14bd1e0);
                    v11 = v36;
                    v12 = 0;
                    v1 = &v13;
                    v16.iter(&v13);
                    v37 = a0;
                    while (true)
                    {
                        v30 = v37;
                        if (v16 != v17)
                        {
                            v38 = v16;
                            v16 = v18;
                        }
                        else
                        {
                            v38 = v41;
                            v17 = v18;
                            v41 = v16;
                            if (v41 == v18)
                                break;
                        }
                        v10.push(47);
                        v10.spec_extend(v38[0], v38[0] + v38[1] * 4);
                        v18 = v16;
                        v16 = v38 + 1;
                        v37 = v0;
                    }
                    if (!v12)
                        v10.push(47);
                    v30->field_10 = v12;
                    v30->field_0 = *((int128_t *)&v10);
                    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&widestring::utfstr::Utf32Str>>(&v13);
                }
                return v30;
            }
            else
            {
                v26 = a0;
                v27 = v26;
                v28 = a1;
                v29 = a2;
                v26.to_vec(v28, v29);
                return v27;
            }
        }
    }
    v2 = &g_14c1650;
    v5 = 1;
    v6 = 8;
    *((uint128_t *)&v7) = 0;
    core::panicking::panic_fmt(&v2, &g_14c1660); /* do not return */
}
