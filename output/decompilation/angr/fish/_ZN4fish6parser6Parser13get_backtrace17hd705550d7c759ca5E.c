long long fish::parser::Parser::get_backtrace(void* a0, struct_2 *a1, unsigned int *a2, unsigned long long a3, struct_1 *a4)
{
    char v0;  // [bp-0xf8]
    char v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    void* v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd8]
    void* v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    struct_0 *v6;  // [bp-0xc8]
    unsigned int v7;  // [bp-0xbc]
    int v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    void* v11;  // [bp-0xa8]
    unsigned long long v12[5];  // [bp-0xa0]
    void* v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    void* v15;  // [bp-0x88]
    char v16;  // [bp-0x80]
    int v17;  // [bp-0x78]
    int v18;  // [bp-0x70]
    char v19;  // [bp-0x60]
    unsigned long v20;  // [bp-0x58]
    unsigned int *v21;  // [bp-0x40]
    unsigned long long v22;  // [bp-0x38]
    unsigned long long v24;  // r15
    unsigned int *v25;  // r12
    struct_0 *v26;  // r13
    unsigned long long v27;  // rax
    unsigned long long v28;  // rbp
    unsigned long v29;  // rbp
    unsigned long v30;  // cc_ndep
    unsigned int v31;  // eax
    unsigned long long v32[5];  // rax
    unsigned long long v33[5];  // r13
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    struct_0 *v36;  // r13

    if (!a4->field_10)
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
        return a0;
    }
    v24 = a3;
    v25 = a2;
    v26 = a4->field_8;
    v27 = v26->field_18;
    if ((v27 <= a3 & v27 != -1))
    {
        v28 = a2.fold(&a2[v27]);
        v29 = v28 + 1;
        if ((char)_ccall(4, 24, v28 + 1, 0, _ccall(17, (unsigned long long)((char)(v27 <= a3) & (char)(v27 != -1)), 0, v30)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14de9e8); /* do not return */
        v31 = 0;
        if (v29 == 1 && a1->field_5a)
        {
            v31 = !v26->field_18;
            v29 = 1;
        }
    }
    else
    {
        v31 = (unsigned int)v27 & 0xffffff00 | 1;
        v29 = 0;
    }
    v7 = v31;
    v6 = v26;
    v32 = a1.current_filename();
    if (v32)
    {
        v33 = v32;
        v12[0] = v32;
        if (v29)
        {
            v21 = a2;
            v22 = a3;
            v13 = 0;
            v14 = 4;
            v15 = 0;
            v4 = "%";
            v5 = 16;
            v3 = 0x8000000000000000;
            v34 = v3.localize();
            fish::parser::user_presentable_path(&v0, v33[3], v33[4], &a1[5].padding_0[17]);
            v16 = 1;
            *((int128_t *)&v17) = *((int128_t *)&v1);
            v19 = 4;
            v20 = v29;
            fish_printf::printf_impl::sprintf_locale(&(char)v9, &v13, v34, v35, ".", &v16, 2);
            (char)v9.unwrap(&g_14dea18);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v16);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
            *((int128_t *)&v9) = *((int128_t *)&v13);
            v11 = 0;
            v24 = v22;
            v25 = v21;
            v36 = v6;
        }
        else
        {
            v3 = 0;
            v4 = 4;
            v5 = 0;
            fish::parser::user_presentable_path(&v0, v33[3], v33[4], &a1[5].padding_0[17]);
            v16 = 1;
            *((int128_t *)&v17) = *((int128_t *)&v1);
            fish_printf::printf_impl::sprintf_locale(&(char)v13, &v3, "%ls: ", 5, &v16, 1);
            v36 = v6;
            (char)v13.unwrap(&g_14dea00);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v16);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            *((int128_t *)&v9) = *((int128_t *)&v3);
            v11 = 0;
        }
        core::ptr::drop_in_place<alloc::sync::Arc<widestring::utfstring::Utf32String>>(&v12);
    }
    else
    {
        (char)v9.to_vec("f", 6);
        v36 = v6;
    }
    v0.describe_with_prefix(v36, v25, v24, v10, v11, a1->field_5a, v7);
    if (v2)
        v0.push(10);
    v16.stack_trace(a1);
    v0.spec_extend((long long)v17, (long long)v17 + (long long)v18 * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
    *((unsigned long long *)&a0[16]) = v2;
    *((int128_t *)a0) = *((int128_t *)&v0);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v9);
    return a0;
}
