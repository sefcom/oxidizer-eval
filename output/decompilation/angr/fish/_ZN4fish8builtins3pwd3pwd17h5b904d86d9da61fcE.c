long long fish::builtins::pwd::pwd(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2305843009213693951], unsigned long long a3)
{
    unsigned long v0;  // [bp-0x1f0]
    unsigned long v1;  // [bp-0x1e8]
    void* v2;  // [bp-0x1d8]
    int v3;  // [bp-0x1d8]
    unsigned long long v4;  // [bp-0x1d0]
    void* v5;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x1bc]
    void* v7;  // [bp-0x1b8], Other Possible Types: char
    unsigned long v8;  // [bp-0x1b0], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x1a8], Other Possible Types: unsigned long
    int v10;  // [bp-0x198], Other Possible Types: unsigned long long, char
    int v11;  // [bp-0x198]
    unsigned long v12;  // [bp-0x190], Other Possible Types: unsigned long long
    int v13;  // [bp-0x188], Other Possible Types: void*, unsigned long, unsigned long long
    int v14;  // [bp-0x180]
    char v15;  // [bp-0x178], Other Possible Types: unsigned short
    int v16;  // [bp-0x170], Other Possible Types: void*
    char v17;  // [bp-0x158]
    unsigned long v18;  // [bp-0x150]
    void* v19;  // [bp-0x130]
    unsigned long long v20;  // [bp-0x128]
    void* v21;  // [bp-0x120]
    unsigned long long v22;  // [bp-0x118]
    unsigned long long v23;  // [bp-0x110]
    unsigned long long v24;  // [bp-0x108]
    char v25;  // [bp-0x100]
    int v26;  // [bp-0xf8]
    char v27;  // [bp-0xe8]
    int v28;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v29;  // [bp-0xc0]
    void* v30;  // [bp-0xb8]
    unsigned long long v31;  // [bp-0xb0]
    void* v32;  // [bp-0xa8]
    unsigned long long v33[2305843009213693951];  // [bp-0xa0]
    unsigned long long v34;  // [bp-0x98]
    unsigned long long v35;  // [bp-0x90]
    unsigned long long v36;  // [bp-0x88]
    unsigned long long v37;  // [bp-0x80]
    unsigned long long v38;  // [bp-0x78]
    unsigned long long v39;  // [bp-0x70]
    uint128_t v40;  // [bp-0x68]
    void* v41;  // [bp-0x50]
    uint128_t v42;  // [bp-0x48]
    unsigned int v43;  // [bp-0x38]
    unsigned short v44;  // [bp-0x34]
    char v45;  // [bp-0x32]
    char v47;  // r14b
    unsigned int v48;  // eax
    void* v49;  // rdx
    unsigned long long v50;  // r15
    unsigned long long v51;  // rax
    int v52;  // xmm2
    unsigned long long v53;  // rdx
    unsigned long long v56;  // r15
    unsigned long long v58;  // rdx
    unsigned long v59;  // rdi

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14cb7c0); /* do not return */
    v0 = a2[0];
    v1 = a2[1];
    v33[0] = a2;
    v34 = a3;
    v35 = "L";
    v36 = 3;
    v37 = &g_14cb778;
    v38 = 3;
    v39 = 4;
    v40 = 0;
    v41 = 0;
    v43 = 63;
    v45 = 1;
    v44 = 0;
    v30 = 0;
    v42 = 0;
    v31 = 8;
    v32 = 0;
    while (true)
    {
        v48 = v30.next_opt();
        if (v48 == 0x110000)
            break;
        switch (v48)
        {
        case 59:
            v59 = v41 - 1;
            if (v41 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb7d8); /* do not return */
            }
            else if (v59 < a3)
            {
                fish::builtins::shared::builtin_unexpected_argument(a0, a1, v0, v1, a2[2 * v59], a2[1 + 2 * v59], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v59, a3, &g_14cb7f0); /* do not return */
            }
        case 63:
            v59 = v41 - 1;
            if (v41 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb808); /* do not return */
            }
            else if (v59 < a3)
            {
                fish::builtins::shared::builtin_unknown_option(a0, a1, v0, v1, a2[2 * v59], a2[1 + 2 * v59], 0);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v59, a3, &g_14cb820); /* do not return */
            }
        case 76:
            break;
        case 80:
            v47 = 1;
            break;
        case 104:
            fish::builtins::shared::builtin_print_help(a0, a1, v0, v1);
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
            return 0x200000000;
        default:
            v10 = &g_14c60b8;
            v12 = 1;
            v13 = 8;
            *((uint128_t *)&v14) = 0;
            core::panicking::panic_fmt(&v10, &g_14cb838); /* do not return */
        }
    }
    if (v41 != a3)
    {
        v56 = a1[2];
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v10 = 1;
        v12 = v0;
        v13 = v1;
        v15 = 8197;
        v16 = 0;
        v17 = 4;
        v18 = a3 - 1;
        fish_printf::printf_impl::sprintf_locale(&v25, &v7, g_14c62a0[0].localize(), v58, ".", &v10, 3);
        v25.unwrap(&g_14cb868);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v10);
        *((int128_t *)&v11) = *((int128_t *)&v7);
        v13 = 0;
        v56.append(&v10);
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
        return 8589934593;
    }
    v2 = 0;
    v4 = 4;
    v5 = 0;
    v27.getf(a0 + 472, "P", 3, 0);
    if (*((long long *)&v27))
    {
        (char)v10.as_string(&v27);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
        v5 = v13;
        *((int128_t *)&v3) = *((int128_t *)&v10);
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v27);
        v49 = v5;
        if (!(v47 & 1))
            goto LABEL_136202b;
    }
    else
    {
        v49 = 0;
        if (!(v47 & 1))
        {
LABEL_136202b:
            if (!v49)
            {
                v2 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
                return 4294967297;
            }
            a1[1].appendln(&v2);
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
            return 0;
        }
    }
    fish::wutil::wrealpath(&v28, 4, v49);
    if ((char)(((0 ^ *((long long *)&v28)) & (0 ^ -(*((long long *)&v28)))) >> 63))
    {
        v50 = a1[2];
        v19 = 0;
        v20 = 4;
        v21 = 0;
        v23 = "%";
        v24 = 25;
        v22 = 0x8000000000000000;
        v51 = v22.localize();
        v8 = v0;
        v9 = v1;
        v7 = 1;
        v6 = errno::errno();
        v25.spec_to_string(&v6);
        v52 = *((int128_t *)&v9);
        *((int128_t *)&v10) = *((int128_t *)&v7);
        v13 = v52;
        v15 = 0;
        v16 = v26;
        fish_printf::printf_impl::sprintf_locale(&v7, &v19, v51, v53, ".", &(char)v10, 2);
        v7.unwrap(&g_14cb850);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v10);
        core::ptr::drop_in_place<alloc::string::String>(&v25);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v22);
        *((int128_t *)&v10) = *((int128_t *)&v19);
        v13 = 0;
        v50.append(&(char)v10);
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v28);
        v2 = 0;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
        return 4294967297;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
    v5 = v29;
    v3 = v28;
    if (!v29)
    {
        v2 = 0;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
        return 4294967297;
    }
    v2 = 0;
    a1[1].appendln(&v2);
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v30);
    return 0;
}
