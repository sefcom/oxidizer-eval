char fish::ast::Populator::visit_token(struct_5 *a0, unsigned long long a1, struct_4 *a2)
{
    void* v0;  // [bp-0x138], Other Possible Types: char
    char v1;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x128]
    void* v3;  // [bp-0x118], Other Possible Types: char
    int v4;  // [bp-0x110], Other Possible Types: unsigned long long
    int v5;  // [bp-0x108], Other Possible Types: void*
    int v6;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xf0]
    void* v8;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v9;  // [bp-0xd8], Other Possible Types: char
    char v10;  // [bp-0xd0]
    void* v11;  // [bp-0xc8]
    int v12;  // [bp-0xb8], Other Possible Types: char
    char v13;  // [bp-0xb8]
    unsigned long v14;  // [bp-0xb0]
    char v15;  // [bp-0xaf]
    int v16;  // [bp-0xa8]
    char v17;  // [bp-0x98]
    int v18;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v19;  // [bp-0x88]
    void* v20;  // [bp-0x78]
    unsigned long long v21;  // [bp-0x70]
    void* v22;  // [bp-0x68]
    void* v23;  // [bp-0x60]
    unsigned long long v24;  // [bp-0x58]
    int v25;  // [bp-0x50]
    int v27;  // [bp-0x47]
    unsigned int *v31;  // rax
    struct_6 *v32;  // rax
    char *v33;  // rax
    unsigned int v34;  // eax
    unsigned int v35[3];  // rax
    unsigned int v36;  // edx
    char v37;  // al
    unsigned int v38;  // r12d
    unsigned long long v39;  // rax
    int v42;  // xmm0
    int v43;  // xmm2
    unsigned long long v44;  // rdx

    if (a0.unsource_leaves())
    {
        v31 = a2->field_a0(a1);
        *(v31) = 0;
        return (char)v31;
    }
    v32 = a0.peek_token(0);
    if ((char)a2->field_c8(a1, v32->field_9))
    {
        v12.consume_any_token(a0);
        v33 = a2->field_b8(a1);
        *(v33) = v15;
        v34 = v12.range();
        v35 = a2->field_a0(a1);
        v35[0] = 1;
        v35[1] = v34;
        v35[2] = v36;
        return (char)v35;
    }
    if ((a0->field_db & 8))
    {
        v37 = a0.peek_token(0) + 10.slice_contains();
        if (v37)
            return v37;
    }
    v38 = a0.peek_token(0).range();
    if (!a0->field_d0 || a0->field_d9)
    {
        v6 = 0x8000000000000000;
        a0->field_da = 1;
        if (!a0->field_d9)
            goto LABEL_132e0df;
    }
    else
    {
        v20 = 0;
        v21 = 4;
        v22 = 0;
        v7 = "E";
        v8 = 27;
        v6 = 0x8000000000000000;
        v39 = v6.localize();
        fish::ast::token_types_user_presentable_description(&v0, a2->field_c0(a1), a2);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v3 = 1;
        v9.user_presentable_description(a0.peek_token(0));
        v42 = *((int128_t *)&v10);
        v43 = (int128_t)v5;
        *((int128_t *)&v12) = *((int128_t *)&v3);
        v16 = v43;
        v17 = 1;
        v18 = v42;
        fish_printf::printf_impl::sprintf_locale(&v3, &v20, v39, v44, ".", &(char)v12, 2);
        v3.unwrap(&g_14c5770);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
        *((int128_t *)&v6) = *((int128_t *)&v20);
        v8 = 0;
        a0->field_da = 1;
        if (!a0->field_d9)
        {
LABEL_132e0df:
            a0->field_d9 = 1;
            if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v3.to_flog_str(&g_15a95b0);
                v13.into_iter(&v3);
                v0.spec_extend(&v13);
                v0.push(58, &g_14c5770);
                v0.push(32, &g_14c5770);
                v3 = 0;
                v4 = 4;
                v5 = 0;
                v13 = 4;
                v14 = a0.spaces();
                v17 = 0;
                v18 = 1;
                v19 = 0;
                fish_printf::printf_impl::sprintf_locale(&v9, &v3, "%*sparse error - begin unwindingp", 32, &v13, 2);
                v9.unwrap(&g_14c5770);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
                *((int128_t *)&v9) = *((int128_t *)&v3);
                v11 = 0;
                v3.to_flog_str(&v9);
                v13.into_iter(&v3);
                v0.spec_extend(&v13);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
                v0.push(10, &g_14c5770);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            if ((int)v38.start() != -1)
                a0->padding_0[24].push(v38, (unsigned int)v44, &g_14c5770);
            if (a0->field_d0)
            {
                v23 = 0;
                v24 = 4;
                *((uint128_t *)&v25) = 0;
                *((uint128_t *)&v27) = 0;
                core::option::unwrap_failed(&g_14c5770); /* do not return */
            }
        }
    }
    *((unsigned int *)a2->field_a0(a1)) = 0;
    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v6);
}
