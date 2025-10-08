long long fish::ast::Populator::visit_keyword(void* a0, struct_1 *a1, unsigned long long a2, struct_6 *a3)
{
    unsigned int v0;  // [bp-0x14c]
    void* v1;  // [bp-0x148], Other Possible Types: char
    char v2;  // [bp-0x140], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x138]
    void* v4;  // [bp-0x130], Other Possible Types: char
    int v5;  // [bp-0x128], Other Possible Types: unsigned long long
    int v6;  // [bp-0x120], Other Possible Types: void*
    unsigned int v7;  // [bp-0x10c]
    int v8;  // [bp-0x108], Other Possible Types: char
    char v9;  // [bp-0x100]
    void* v10;  // [bp-0xf8]
    int v11;  // [bp-0xe8], Other Possible Types: char
    char v12;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v13;  // [bp-0xd8]
    char v14;  // [bp-0xc8]
    int v15;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v16;  // [bp-0xb8]
    int v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    void* v20;  // [bp-0x98]
    void* v21;  // [bp-0x90]
    unsigned long long v22;  // [bp-0x88]
    void* v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x78]
    unsigned long long v25;  // [bp-0x70]
    unsigned long long v26;  // [bp-0x68]
    void* v27;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x58]
    int v29;  // [bp-0x50]
    unsigned long v30;  // [bp-0x48]
    int v31;  // [bp-0x47]
    unsigned long long v32;  // [bp-0x40]
    char v33;  // [bp-0x38]
    struct_0 *v35;  // rax
    char *v36;  // rax
    unsigned int v37;  // eax
    unsigned int v38[3];  // rax
    unsigned int v39;  // edx
    char *v40;  // r13
    unsigned long long v41;  // rax
    unsigned long v42;  // rdx
    unsigned int v43;  // ebp
    unsigned long long v44;  // rax
    int v46;  // xmm0
    int v47;  // xmm2

    if (a1.unsource_leaves())
    {
        *((unsigned int *)a3->field_a0(a2)) = 0;
        *((char *)&a0[30]) = 2;
        return a0;
    }
    v35 = a1.peek_token(0);
    if ((char)a3->field_c8(a2, v35->field_8))
    {
        v11.consume_any_token(a1);
        v36 = a3->field_b8(a2);
        *(v36) = v12;
        v37 = v11.range();
        v38 = a3->field_a0(a2);
        v38[0] = 1;
        v38[1] = v37;
        v38[2] = v39;
        *((char *)&a0[30]) = 2;
        return a0;
    }
    *((unsigned int *)a3->field_a0(a2)) = 0;
    if ((a1->field_db & 8) && a1.peek_token(0) + 10.slice_contains())
    {
        *((char *)&a0[30]) = 2;
        return a0;
    }
    v40 = a3->field_c0(a2);
    v41 = a3->field_c0(a2);
    if (v42 == 1 && v41.equal())
    {
        *((int128_t *)&a0[16]) = *((int128_t *)a1.peek_token(0));
        *((char **)a0) = v40;
        *((unsigned long *)&a0[8]) = v42;
        return a0;
    }
    v0 = a1.peek_token(0).range();
    v43 = v42;
    if (!a1->field_d0 || a1->field_d9)
    {
        v18 = 0x8000000000000000;
        a1->field_da = 1;
        if (!a1->field_d9)
            goto LABEL_132e797;
    }
    else
    {
        v7 = v42;
        v21 = 0;
        v22 = 4;
        v23 = 0;
        v25 = "E";
        v26 = 27;
        v24 = 0x8000000000000000;
        v44 = v24.localize();
        fish::ast::keywords_user_presentable_description(&v1, v40, v42);
        *((int128_t *)&v5) = *((int128_t *)&v2);
        v4 = 1;
        v8.user_presentable_description(a1.peek_token(0));
        v46 = *((int128_t *)&v9);
        v47 = (int128_t)v6;
        *((int128_t *)&v11) = *((int128_t *)&v4);
        v13 = v47;
        v14 = 1;
        v15 = v46;
        fish_printf::printf_impl::sprintf_locale(&v4, &v21, v44, v42, ".", &(char)v11, 2);
        v4.unwrap(&g_14c5788);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v11);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v24);
        *((int128_t *)&v17) = *((int128_t *)&v21);
        v20 = 0;
        v43 = v7;
        a1->field_da = 1;
        if (!a1->field_d9)
        {
LABEL_132e797:
            a1->field_d9 = 1;
            if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
            {
                v1 = 0;
                v2 = 1;
                v3 = 0;
                v4.to_flog_str(&g_15a95b0);
                v11.into_iter(&v4);
                v1.spec_extend(&v11);
                v1.push(58, &g_14c5788);
                v1.push(32, &g_14c5788);
                v4 = 0;
                v5 = 4;
                v6 = 0;
                v11 = 4;
                v12 = a1.spaces();
                v14 = 0;
                v15 = 1;
                v16 = 0;
                fish_printf::printf_impl::sprintf_locale(&v8, &v4, "%*sparse error - begin unwindingp", 32, &v11, 2);
                v8.unwrap(&g_14c5788);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v11);
                *((int128_t *)&v8) = *((int128_t *)&v4);
                v10 = 0;
                v4.to_flog_str(&v8);
                v11.into_iter(&v4);
                v1.spec_extend(&v11);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
                v1.push(10, &g_14c5788);
                fish::flog::flog_impl(v2, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
            }
            if ((int)v0.start() != -1)
                a1->padding_0[24].push(v0, v43, &g_14c5788);
            if (a1->field_d0)
            {
                v27 = 0;
                v28 = 4;
                *((uint128_t *)&v29) = 0;
                *((uint128_t *)&v31) = 0;
                if (v18 == 0x8000000000000000)
                    core::option::unwrap_failed(&g_14c5788); /* do not return */
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v27);
                v27 = v18;
                memcpy(&v28, &v19, 16);
                v33 = 3;
                v30 = v0.start();
                v32 = a0.length(v43);
                a1->field_d0.push(&v27, &g_14c5788);
                *((char *)&a0[30]) = 2;
                return a0;
            }
        }
    }
    *((char *)&a0[30]) = 2;
    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&(char)v18);
    return a0;
}
