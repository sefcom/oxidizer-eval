long long fish::builtins::path::path_filter_maybe_is(unsigned long long a0, struct_0 *a1, unsigned long a2, unsigned long a3, char a4)
{
    unsigned int v0;  // [bp-0x1d8]
    unsigned int v1;  // [bp-0x1d0]
    unsigned int v2;  // [bp-0x1cc]
    void* v3;  // [bp-0x1c8]
    void* v4;  // [bp-0x1b8]
    int v5;  // [bp-0x1a8]
    char v6;  // [bp-0x1a7]
    char v7;  // [bp-0x1a6]
    char v8;  // [bp-0x1a5]
    int v9;  // [bp-0x1a4]
    unsigned short v10;  // [bp-0x19d]
    char v11;  // [bp-0x199]
    char v12;  // [bp-0x198]
    unsigned long v13;  // [bp-0x190]
    void* v14;  // [bp-0x188]
    unsigned int v15;  // [bp-0x180]
    unsigned int v16;  // [bp-0x17c]
    unsigned int v17;  // [bp-0x178]
    unsigned int v18;  // [bp-0x174]
    unsigned long long v19;  // [bp-0x170]
    char v20;  // [bp-0x168]
    unsigned long long v21;  // [bp-0x160]
    unsigned long long v22;  // [bp-0x158]
    unsigned long long v23;  // [bp-0x150]
    unsigned long long v24;  // [bp-0x148]
    int v25;  // [bp-0x140]
    char v26;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x128]
    char *v28;  // [bp-0x120], Other Possible Types: char
    char *v29;  // [bp-0x118]
    char *v30;  // [bp-0x110], Other Possible Types: char
    int v31;  // [bp-0x100]
    int v32;  // [bp-0xf0]
    char v33;  // [bp-0xe0]
    char v34;  // [bp-0xd0]
    int v35;  // [bp-0xc8]
    int v36;  // [bp-0xb0]
    char v37;  // [bp-0x98]
    char v38;  // [bp-0x88]
    char v39;  // [bp-0x78]
    int v40;  // [bp-0x68]
    int v41;  // [bp-0x58]
    char v42;  // [bp-0x48]
    unsigned long long v43;  // [bp-0x38]
    unsigned long v45;  // cc_ndep
    unsigned long long v46;  // cc_ndep
    unsigned long v47;  // rcx
    unsigned int v48;  // ebp
    unsigned int v49;  // edx
    void* v50;  // rbp
    unsigned long long v51;  // r13
    unsigned long long v52;  // cc_op
    unsigned long long v53;  // cc_dep1
    void* v54;  // cc_dep2
    unsigned int v55;  // eax
    unsigned long long v56;  // cc_ndep
    void* v57;  // rbp

    v3 = 0;
    v0 = 0;
    v1 = 0;
    v4 = 0;
    *((uint128_t *)&v5) = 0;
    v12 = 0;
    v10 = 257;
    v8 = 1;
    v11 = 1;
    v14 = 0;
    if (((char)fish::builtins::path::parse_opts(&v0, &v14, 0, a2, a3, a0, a1) & 1))
        return 8589934593;
    if (a4)
        v7 = 1;
    v26.new(a2, a3, &v14, a1, 0x1000);
    v46 = _ccall(17, (unsigned long long)a4, 0, v45);
    v34 = (char)v5 + 1;
    memcpy(&v37, &v26, 16);
    memcpy(&v38, &v28, 16);
    memcpy(&v39, &v30, 16);
    v40 = v31;
    v41 = v32;
    memcpy(&v42, &v33, 16);
    v43 = *((long long *)&v34);
    v47 = v1;
    v48 = 0;
    v49 = 0;
    if (((v2 & 32) >> 5 & (unsigned int)v47))
    {
        v16 = fish::nix::geteuid();
        v47 = v1;
        v49 = 1;
    }
    v15 = v49;
    if (((char)v47 & 1) && ((char)v2 & 64))
    {
        v18 = fish::nix::getegid();
        v48 = 1;
    }
    v17 = v48;
    v20.collect(&v37);
    v19 = v22;
    v26 = v21;
    v27 = v19 * 32 + v26;
    v28 = &v0;
    v29 = &v15;
    v30 = &v17;
    v13 = a1->field_8;
    v50 = 0;
    while (true)
    {
        v23.next(&v26);
        if (v23 == 9223372036854775809)
            break;
        v51 = (long long)v25;
        v52 = 19;
        v53 = v0 | v1;
        v54 = 0;
        if (!v0 && !v1)
        {
            v55 = fish::wutil::waccess(v24, v51, 0);
            v52 = 5;
            v53 = v55;
            v54 = (char)v9;
            if (v55 != (char)v9)
            {
                if (v12)
                {
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v23);
                    core::ptr::drop_in_place<alloc::vec::Vec<(alloc::borrow::Cow<widestring::utfstr::Utf32Str>,bool)>>(&v20);
                    return 4294967297;
                }
                goto LABEL_135e5db;
            }
        }
        v56 = _ccall(v52, v53, v54, v46);
        v57 = v50 + 1;
        if ((char)_ccall(4, 24, v50 + 1, 0, _ccall(v52, v53, v54, v46)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14cb218); /* do not return */
        v50 = v57;
        v46 = v56;
        if (v12)
        {
LABEL_135e5db:
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v23);
        }
        else if (v51 && v24.starts_with(v51, 45))
        {
            v36.from_str(".//dirname", 2);
            v35.add(&v36, v24, v51);
            fish::builtins::path::path_out(v13, v6, v7, &v35);
            v50 = v57;
            v46 = v56;
            if (v7 == 1)
            {
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v23);
                core::ptr::drop_in_place<alloc::vec::Vec<(alloc::borrow::Cow<widestring::utfstr::Utf32Str>,bool)>>(&v20);
                return 0x100000000;
            }
            goto LABEL_135e5db;
        }
        else
        {
            fish::builtins::path::path_out(v13, v6, v7, &v23);
            v50 = v57;
            v46 = v56;
            if (v7)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<(alloc::borrow::Cow<widestring::utfstr::Utf32Str>,bool)>>(&v20);
                return 0x100000000;
            }
        }
    }
    if (v12 && v50 != v19)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<(alloc::borrow::Cow<widestring::utfstr::Utf32Str>,bool)>>(&v20);
        return 4294967297;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<(alloc::borrow::Cow<widestring::utfstr::Utf32Str>,bool)>>(&v20);
    return 0x100000000 | !v50;
}
