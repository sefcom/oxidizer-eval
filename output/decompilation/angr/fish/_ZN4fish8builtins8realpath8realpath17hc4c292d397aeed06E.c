long long fish::builtins::realpath::realpath(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2], unsigned long long a3)
{
    int v0;  // [bp-0x148], Other Possible Types: void*, char, unsigned long long
    char v1;  // [bp-0x148]
    unsigned long v2;  // [bp-0x140], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x138], Other Possible Types: unsigned long, unsigned long long
    unsigned int v4;  // [bp-0x124]
    unsigned long v5;  // [bp-0x120]
    int v6;  // [bp-0x118], Other Possible Types: char
    int v7;  // [bp-0x118]
    char v8;  // [bp-0x117]
    unsigned int v9;  // [bp-0x114]
    unsigned long long v10;  // [bp-0x110], Other Possible Types: unsigned long
    int v11;  // [sp-0x108], Other Possible Types: void*, unsigned long long, unsigned long
    int v12;  // [bp-0xf8], Other Possible Types: unsigned short, char
    int v13;  // [bp-0xf0], Other Possible Types: void*, unsigned long
    int v14;  // [bp-0xe8], Other Possible Types: unsigned long
    char v15;  // [sp-0xd8]
    int v16;  // [bp-0xd0], Other Possible Types: unsigned long
    void* v17;  // [bp-0xb0], Other Possible Types: char
    char v18;  // [bp-0xa8], Other Possible Types: unsigned long, unsigned long long
    void* v19;  // [bp-0xa0], Other Possible Types: unsigned long
    void* v20;  // [bp-0x90], Other Possible Types: char, unsigned long long
    unsigned long long v21;  // [bp-0x88]
    void* v22;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v23[3];  // [bp-0x78]
    unsigned long long v24;  // [bp-0x70]
    void* v25;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v26[3];  // [bp-0x60]
    unsigned long long v27;  // [bp-0x58]
    unsigned long long v28;  // [bp-0x50]
    char v29;  // [bp-0x48]
    unsigned long v31;  // r14
    unsigned long v32;  // rbx
    unsigned long long v33;  // rax
    unsigned long v34;  // cc_ndep
    unsigned long long v35[2];  // rdi
    unsigned long v36;  // r12
    unsigned long v37;  // rbp
    unsigned long v38;  // r15
    unsigned long long v39;  // rax
    int v40;  // xmm0
    int v41;  // xmm2
    unsigned long long v42;  // rdx
    char *v43;  // rdi
    unsigned long v44;  // rbx
    unsigned long long v45;  // rax
    int v46;  // xmm0
    int v47;  // xmm2
    int v48;  // xmm2
    unsigned long long v49;  // rdx
    char *v50;  // rsi
    unsigned long v51;  // rdi
    unsigned long long v53;  // rdx
    unsigned long long v56;  // rcx
    unsigned long long v58;  // rdx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14cc480); /* do not return */
    v31 = a2[0];
    v32 = a2[1];
    fish::builtins::realpath::parse_options(&v6, a2, a3, a0, a1);
    if (v6 == 2)
    {
        v33 = v9 * 0x100000000;
        goto LABEL_13673b4;
    }
    if ((v6 & 1))
    {
        fish::builtins::shared::builtin_print_help(a0, a1, v31, v32);
        goto LABEL_13673d4;
    }
    if ((char)_ccall(4, 24, v10 + 1, 0, _ccall(17, (unsigned long long)(v6 & 1), 0, v34)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14cc498); /* do not return */
    if (v10 + 1 == a3)
    {
        if (v10 >= a3)
            core::panicking::panic_bounds_check(v10, a3, &g_14cc4b0); /* do not return */
        v35 = v10 * 16;
        v36 = *((long long *)(a2 + v35));
        v37 = *((long long *)(a2 + v35 + 8));
        if ((v8 & 1))
        {
            v5 = v36;
            v6.get_pwd_slash(a0 + 472);
            fish::wutil::wrealpath(&v20, v10, v11);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            if ((char)(((0 ^ v20) & (0 ^ -(v20))) >> 63))
            {
                v38 = a1[2];
                *(v23) = 0;
                v24 = 4;
                v25 = 0;
                v27 = "b";
                v28 = 33;
                *(v26) = 0x8000000000000000;
                v39 = v26.localize();
                v2 = v31;
                v3 = v32;
                v0 = 1;
                v4 = errno::errno();
                v17.spec_to_string(&v4);
                v40 = *((int128_t *)&v18);
                v41 = *((int128_t *)&v3);
                *((int128_t *)&v6) = *((int128_t *)&v0);
                v11 = v41;
                v12 = 0;
                v13 = v40;
                fish_printf::printf_impl::sprintf_locale(&v0, &v23, v39, v42, ".", &v6, 2);
                v0.unwrap(&g_14cc4f8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
                core::ptr::drop_in_place<alloc::string::String>(&v17);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v26);
                *((int128_t *)&v6) = *((int128_t *)&v23[0]);
                v11 = 0;
                v38.append(&v6);
                v43 = &v20;
LABEL_1367a46:
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v43);
                v33 = 0x100000000;
LABEL_13673b4:
                v56 = 1;
            }
            else
            {
                if (v5.starts_with(v37, "/", 1))
                {
                    v6.to_vec(v5, v37);
                    v3 = v11;
                    *((int128_t *)&v0) = *((int128_t *)&v6);
                }
                else
                {
                    fish::path::path_apply_working_directory(&(char)v0, v5, v37, v21, v22);
                }
                v44 = a1[1];
                fish::wutil::normalize_path(&v6, v2, v3, 0);
                a1[1].append(&v6);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v20);
LABEL_1367936:
                v44.append("\n", 1);
LABEL_13673d4:
                v33 = 0;
                v56 = 0;
            }
        }
        else
        {
            fish::wutil::wrealpath(&v29, v36, v37);
            if ((char)(((0 ^ *((long long *)&v29)) & (0 ^ -(*((long long *)&v29)))) >> 63))
            {
                v4 = errno::errno();
                if (v4)
                {
                    v5 = a1[2];
                    v20 = 0;
                    v21 = 4;
                    v22 = 0;
                    v24 = "b";
                    v25 = 21;
                    *(v23) = 0x8000000000000000;
                    v45 = v23.localize();
                    v18 = v31;
                    v19 = v32;
                    v17 = 1;
                    v2 = v36;
                    v3 = v37;
                    v1 = 1;
                    (char)v26.spec_to_string(&v4);
                    v46 = *((int128_t *)&v27);
                    v47 = *((int128_t *)&v19);
                    *((int128_t *)&v6) = *((int128_t *)&v17);
                    v11 = v47;
                    v48 = *((int128_t *)&v3);
                    *((int128_t *)&v12) = (int128_t)v0;
                    v14 = v48;
                    v15 = 0;
                    v16 = v46;
                    fish_printf::printf_impl::sprintf_locale(&(unsigned long long)v0, &v20, v45, v49, ".", &v6, 3);
                    (unsigned long long)v0.unwrap(&g_14cc4e0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v6);
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v26);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v23);
                    *((int128_t *)&v6) = *((int128_t *)&v20);
                    v11 = 0;
                    v50 = &v6;
                    v51 = v5;
                }
                else
                {
                    v17 = 0;
                    v18 = 4;
                    v19 = 0;
                    v2 = "b";
                    v3 = 30;
                    v0 = 0x8000000000000000;
                    *((char *)&v7) = 1;
                    v10 = v31;
                    v11 = v32;
                    v12 = 1;
                    v13 = v36;
                    v14 = v37;
                    fish_printf::printf_impl::sprintf_locale(&(char)v26, &v17, v0.localize(), v53, ".", &(char)v7, 2);
                    (char)v26.unwrap(&g_14cc4c8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    *((int128_t *)&v7) = *((int128_t *)&v17);
                    v11 = 0;
                    v50 = &(char)v7;
                    v51 = v5;
                }
                v51.append(v50);
                v43 = &v29;
                goto LABEL_1367a46;
            }
            else
            {
                v44 = a1[1];
                v44.append(&v29);
                goto LABEL_1367936;
            }
        }
    }
    else
    {
        v0 = 0;
        v2 = 4;
        v3 = 0;
        v6 = 1;
        v10 = v31;
        v11 = v32;
        v12 = 8197;
        v13 = 0;
        v15 = 4;
        v16 = a3 - 1;
        fish_printf::printf_impl::sprintf_locale(&v17, &v0, g_14c62a0[0].localize(), v58, ".", &v6, 3);
        v17.unwrap(&g_14cc510);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v6);
        memcpy(&v6, &v0, 16);
        v11 = 0;
        a1[2].append(&v6);
        fish::builtins::shared::builtin_print_help(a0, a1, v31, v32);
        v56 = 1;
        v33 = 0x200000000;
    }
    return v33 | v56;
}
