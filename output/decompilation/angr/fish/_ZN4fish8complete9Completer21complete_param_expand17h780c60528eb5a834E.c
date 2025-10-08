long long fish::complete::Completer::complete_param_expand(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    void* v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0]
    int v3;  // [bp-0xb8], Other Possible Types: void*, char
    void* v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    void* v6;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v7;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xa0]
    char v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x90]
    unsigned int v13;  // [bp-0x80], Other Possible Types: unsigned long long
    char v14;  // [bp-0x78]
    void* v15;  // [bp-0x68]
    unsigned long v16;  // [bp-0x58]
    void* v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    void* v19;  // [bp-0x40]
    unsigned long v20;  // [bp-0x38]
    unsigned long long v22;  // r12
    unsigned long long v23;  // rax
    unsigned int v24;  // ebp
    unsigned int v25;  // eax
    unsigned int v26;  // eax
    unsigned int v28;  // ebp
    unsigned int v29;  // eax
    unsigned int v30;  // ebp
    unsigned int v31;  // ebp
    unsigned int v32;  // eax
    unsigned int v33;  // eax
    unsigned int v34;  // eax
    unsigned int v35;  // ebp
    unsigned int v36;  // eax
    unsigned long long v37;  // 4096
    unsigned long long v38;  // r13
    unsigned long long v39;  // rdx
    char v40;  // al
    unsigned long v41;  // rbx
    char v42;  // r13b
    unsigned long long v43;  // 4096
    struct_0 *v44;  // 4096
    unsigned int v45;  // ebp
    unsigned int v47;  // ebx
    unsigned long v48;  // rsi
    unsigned long long v49;  // rax
    unsigned long long v50;  // r14
    unsigned long long v51;  // rax
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rax
    unsigned long v54;  // r12
    char v55;  // cl
    unsigned long long v56;  // rax
    unsigned long long v57;  // rdi
    unsigned long long v58;  // rax
    void* v59;  // r15
    int v60;  // [bp-0x78]

    v13 = a4;
    v22 = a3;
    v23 = (unsigned long long)a0->field_38.check_cancel();
    if ((char)v23)
        return v23;
    v20 = a0->field_38;
    v24 = a5 * 0x4000 | (int)a0.expand_flags() | ((char)v22 ^ 1) * 4;
    v25 = v24 | 137;
    if (!(a0->field_70 & 1))
        v26 = v25;
    else
        v26 = v24 | 4233;
    v28 = v26;
    if (!(char)v13)
    {
        v29 = v25;
    }
    else
    {
        v30 = v28 | 2080;
        v29 = v30;
    }
    v31 = v29;
    if (!(char)v22)
        v32 = v25;
    else
        v32 = v31;
    v33 = v32 & 4294967231;
    if ((a0->field_70 & 1))
        v34 = v33;
    else
        v34 = v32;
    v35 = v34;
    if ((char)v22)
        v36 = v33;
    else
        v36 = v35;
    if ((int)fish::reader::get_quote(a1, a2, a2) == 0x110000)
    {
        v37 = a2;
        while (true)
        {
            v8 = a1;
            v10 = a1 + v37 * 4;
            v38 = v8.rposition();
            if (!((char)v38 & 1))
                break;
            v22 = v39;
            if ((char)fish::reader::is_backslashed(a1, a2, a2))
            {
                v37 = v39;
                if (v37 > a2)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d5f40); /* do not return */
            }
            else
            {
                if (v38 != 1)
                    goto LABEL_138df26;
                v40 = fish::wcstringutil::string_prefixes_string("-", 1, a1, a2);
                v41 = a0->field_10;
                v42 = 1;
                v16 = a0->field_10;
                v43 = a2;
                v44 = a0;
                if (!v40)
                    goto LABEL_138df36;
                goto LABEL_138e167;
            }
        }
    }
LABEL_138df26:
    v16 = a0->field_10;
LABEL_138df36:
    if (!(char)fish::wcstringutil::string_prefixes_string("-", 1, a1, a2))
        v45 = v36;
    else
        v45 = v36 & 4294967039;
    v47 = v45;
    v13 = a2;
    v8.to_vec(a1, a2);
    fish::expand::expand_to_receiver(&v8, a0, v47, v20, 0);
    if ((char)v39 <= 1 && (char)core::sync::atomic::atomic_load(&g_15a9a10, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a9a00);
        v8.into_iter(&v3);
        v0.spec_extend(&v8);
        v0.push(58, &g_14d5f58);
        v0.push(32, &g_14d5f58);
        v4 = 0;
        v5 = 4;
        v6 = 0;
        v7 = 1;
        v10 = a1;
        v11 = v13;
        fish_printf::printf_impl::sprintf_locale(&v14, &v4, "Error while expanding string '%ls'Don't know how to tab complete with a parser but a different variable set", 34, &v7, 1);
        v14.unwrap(&g_14d5f58);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
        memcpy(&v14, &v4, 16);
        v15 = 0;
        v4.to_flog_str(&v14);
        v7.into_iter(&v4);
        v0.spec_extend(&v7);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
        v0.push(10, &g_14d5f58);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v41 = a0->field_10;
    v48 = a0->field_10;
    if (v48 < v16)
        core::slice::index::slice_start_index_len_fail(v16, v48, &g_14d5fe8); /* do not return */
    v49 = v16 * 56 + a0->field_8.escape_opening_brackets(v48 - v16, a1, v13);
    if (!(v42 & 1))
    {
        return v49;
    }
    else if (v48 >= v16)
    {
        v43 = v13;
        v44 = a0;
    }
    else
    {
        core::slice::index::slice_start_index_len_fail(v16, v48, &g_14d5fd0); /* do not return */
    }
LABEL_138e167:
    v50 = v43;
    v51 = v44->field_8;
    v52 = v41 * 56;
    v7 = v16 * 56 + v51;
    v10 = v52 + v51;
    v53 = v7.any();
    v54 = v22 + 1;
    v55 = _ccall(4, 24, v22 + 1, 0, (v52 + v51 <= v52 ? 1 : 0));
    if ((char)v53)
    {
        if (v55)
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14d5f70); /* do not return */
        }
        else if (v54 == v50)
        {
            return v53;
        }
    }
    else
    {
        if (v55)
            core::panicking::panic_const::panic_const_add_overflow(&g_14d5f88); /* do not return */
    }
    v56 = a1.slice_from(v50, v54);
    v17 = 0;
    v18 = 8;
    v19 = 0;
    v7.to_vec(v56, a2);
    v6 = v11;
    *((int128_t *)&v3) = *((int128_t *)&v7);
    fish::expand::expand_string(&v4, &v17, v36, a0->field_38, 0);
    if ((char)v39 <= 1 && (char)core::sync::atomic::atomic_load(&g_15a9a10, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v4.to_flog_str(&g_15a9a00);
        v7.into_iter(&v4);
        v0.spec_extend(&v7);
        v0.push(58, &g_14d5fa0);
        v0.push(32, &g_14d5fa0);
        v3 = 0;
        v5 = 4;
        v6 = 0;
        v9 = 1;
        v10 = v56;
        v12 = v39;
        fish_printf::printf_impl::sprintf_locale(&v60, &v3, "Error while expanding string '%ls'Don't know how to tab complete with a parser but a different variable set", 34, &v9, 1);
        v60.unwrap(&g_14d5fa0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
        memcpy(&v14, &v4, 16);
        v15 = 0;
        v3.to_flog_str(&v60);
        v9.into_iter(&v3);
        v0.spec_extend(&v9);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v60);
        v0.push(10, &g_14d5fa0);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v57 = 8;
    8.escape_opening_brackets(0, a1, v50);
    v58 = 0.index(v54, a1, v50, &g_14d5fb8);
    for (v59 = 0; v59; v57 += 56)
    {
        v59 -= 56;
        v57.prepend_token_prefix(v58, v39);
    }
    return a0.extend(&v17);
}
