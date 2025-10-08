long long fish::ast::Populator::visit_job_continuation(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    void* v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    void* v5;  // [bp-0xf0]
    char v6;  // [bp-0xe8]
    void* v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xc8]
    int v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    void* v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xa8]
    void* v13;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v14;  // [bp-0x98], Other Possible Types: unsigned long long
    int v15;  // [bp-0x90]
    unsigned long v16;  // [bp-0x88]
    int v17;  // [bp-0x87]
    unsigned long long v18;  // [bp-0x80]
    char v19;  // [bp-0x78]
    char v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    char v22;  // [bp-0x50]
    unsigned long long v23;  // [bp-0x48]
    void* v24;  // [bp-0x40]
    unsigned long long v26;  // r14
    unsigned int v27;  // ebp
    unsigned int v28;  // eax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned int v31;  // r13d

    v26 = a1;
    v27 = *((char *)(a0.peek_token(1) + 8));
    if (v27 == 15 || v27 == 1)
    {
        v28 = a0.peek_token(1).range();
        if (!a0->field_d0 || a0->field_d9)
        {
            v8 = 0x8000000000000000;
            a0->field_da = 1;
            if (!a0->field_d9)
                goto LABEL_132dae8;
LABEL_132dd83:
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&(char)v9);
        }
        else
        {
            v12 = a1;
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v29 = g_14c5740[0].localize();
            v20.to_arg(v27);
            fish_printf::printf_impl::sprintf_locale(&v6, &v0, v29, v30, ".", &v20, 1);
            v6.unwrap(&g_14c5758);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v20);
            *((int128_t *)&v9) = *((int128_t *)&v0);
            v11 = 0;
            v26 = v12;
            a0->field_da = 1;
            if (a0->field_d9)
                goto LABEL_132dd83;
LABEL_132dae8:
            a0->field_d9 = 1;
            if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
            {
                v3 = 0;
                v4 = 1;
                v5 = 0;
                v0.to_flog_str(&g_15a95b0);
                v20.into_iter(&v0);
                v3.spec_extend(&v20);
                v3.push(58, &g_14c5758);
                v3.push(32, &g_14c5758);
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v20 = 4;
                v21 = a0.spaces();
                v22 = 0;
                v23 = 1;
                v24 = 0;
                fish_printf::printf_impl::sprintf_locale(&v6, &v0, "%*sparse error - begin unwindingp", 32, &v20, 2);
                v6.unwrap(&g_14c5758);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v20);
                memcpy(&v6, &v0, 16);
                v7 = 0;
                v0.to_flog_str(&v6);
                v20.into_iter(&v0);
                v3.spec_extend(&v20);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                v3.push(10, &g_14c5758);
                fish::flog::flog_impl(v4, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
            }
            if ((int)v28.start() != -1)
                a0->padding_0[24].push(v28, v31, &g_14c5758);
            if (!a0->field_d0)
                goto LABEL_132dd83;
            v13 = 0;
            v14 = 4;
            *((uint128_t *)&v15) = 0;
            *((uint128_t *)&v17) = 0;
            if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
                core::option::unwrap_failed(&g_14c5758); /* do not return */
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
            v13 = v8;
            *((int128_t *)&v14) = *((int128_t *)&v10);
            v19 = 14;
            v16 = v28.start();
            v18 = a0.length(v31);
            a0->field_d0.push(&v13, &g_14c5758);
        }
    }
    return v26.accept_mut(a0);
}
