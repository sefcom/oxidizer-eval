long long fish::builtins::argparse::parse_exclusive_args(struct_1 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x130]
    void* v2;  // [bp-0x128], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x120]
    unsigned long long v4;  // [bp-0x118]
    void* v5;  // [bp-0x110]
    char v6;  // [bp-0x108]
    unsigned int v7;  // [bp-0x108]
    int v8;  // [bp-0x108]
    int v9;  // [bp-0x100]
    void* v10;  // [bp-0xf8], Other Possible Types: unsigned int
    char v11;  // [bp-0xe8]
    int v12;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xd8]
    void* v14;  // [bp-0xb0]
    unsigned long long v15;  // [bp-0xa8]
    void* v16;  // [bp-0xa0]
    char v17;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x88]
    unsigned long long v20[3];  // [bp-0x80]
    unsigned long long v21;  // [bp-0x78]
    unsigned long long v22;  // [bp-0x70]
    unsigned long long v23;  // [bp-0x60]
    unsigned long v24;  // [bp-0x58]
    unsigned long v25;  // [bp-0x50]
    uint128_t *v26;  // [bp-0x48]
    char v27;  // [bp-0x40]
    uint128_t *v29;  // r15
    char *v30;  // r12
    unsigned long long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rbx
    unsigned long v35;  // rsi
    unsigned long long v36;  // rdx
    struct_0 *v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    int v40;  // xmm1

    if (!a0->field_20)
        return 0x100000000;
    v29 = a0->padding_18;
    v25 = &(&a0[2].padding_0)[1];
    v24 = &a0[1].field_20;
    v30 = &v17;
    *((char [8])&v23) = a0->field_20 * 16 + a0->padding_18;
    while (true)
    {
        v10 = 44;
        *((uint128_t *)&v8) = *(v29);
        v30.collect(&(unsigned int)v8);
        if (v19 < 2)
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v21 = "%";
            v22 = 46;
            *(v20) = 0x8000000000000000;
            v39 = v20.localize();
            v40 = *(v29);
            v6 = 1;
            *((int128_t *)&v9) = *((int128_t *)&(&a0->padding_0)[1]);
            v11 = 1;
            v12 = v40;
            fish_printf::printf_impl::sprintf_locale(&(char)v14, &v0, v39, v32, ".", &v6, 2);
            (char)v14.unwrap(&g_14c6998);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v20);
            memcpy(&v6, &v0, 16);
            v10 = 0;
            a1.append(&v6);
            core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v17, v18);
            return 4294967297;
        }
        v26 = v29;
        v3 = 0;
        v4 = 4;
        v5 = 0;
        v20.into_iter(v30);
        if (v20.next())
        {
            v33 = v32;
            do
            {
                v34 = v33;
                if (v34 == 1)
                {
                    v7 = v31.char_at(1, 0);
                    if (v25.get_inner(&v7))
                    {
                        v35 = (unsigned int)v31.char_at(1, 0);
                        v36 = &g_14c6950;
                        continue;
                    }
                }
                v37 = a0 + 3.get_inner(v31, v34);
                if (!v37)
                {
                    v14 = 0;
                    v15 = 4;
                    v16 = 0;
                    v1 = "%";
                    v2 = 39;
                    v0 = 0x8000000000000000;
                    v38 = v0.localize();
                    v6 = 1;
                    *((int128_t *)&v9) = *((int128_t *)&(&a0->padding_0)[1]);
                    v11 = 1;
                    v12 = v31;
                    v13 = v34;
                    fish_printf::printf_impl::sprintf_locale(&v27, &v14, v38, v32, ".", &v6, 2);
                    v27.unwrap(&g_14c6980);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    memcpy(&v6, &v14, 16);
                    v10 = 0;
                    a1.append(&v6);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v20);
                    core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v3, v4);
                    return 4294967297;
                }
                v35 = v37->field_18;
                v36 = &g_14c6968;
                v3.push(v35, v36);
                v31 = v20.next();
                v33 = v32;
            } while (v31);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v20);
        v7.to_vec(v4, 0);
        v24.push(&v7);
        v29 = v26 + 1;
        core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v3, v4);
        v30 = &v17;
        if (v29 == v23)
            return 0x100000000;
    }
}
