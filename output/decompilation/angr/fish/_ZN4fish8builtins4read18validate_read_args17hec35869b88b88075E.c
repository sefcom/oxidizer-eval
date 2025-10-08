long long fish::builtins::read::validate_read_args(unsigned long long a0, unsigned long long a1, void* a2, unsigned long long a3[2], unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x110]
    int v1;  // [sp-0x108], Other Possible Types: void*, char, unsigned long long
    unsigned long long v2;  // [sp-0x100]
    void* v3;  // [sp-0xf8], Other Possible Types: unsigned long long
    int v4;  // [sp-0xe8], Other Possible Types: char
    int v5;  // [bp-0xe8]
    int v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xe0]
    int v9;  // [bp-0xd8], Other Possible Types: void*, unsigned long long
    unsigned short v10;  // [bp-0xd0]
    unsigned short v11;  // [bp-0xce]
    int v12;  // [bp-0xc8], Other Possible Types: unsigned short, char
    void* v13;  // [bp-0xc0], Other Possible Types: unsigned long, unsigned long long
    int v14;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned long long
    char v15;  // [bp-0xa8]
    void* v16;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x98]
    void* v18;  // [sp-0x88], Other Possible Types: char
    unsigned long long v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x80]
    void* v21;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x60]
    void* v24;  // [bp-0x58], Other Possible Types: char
    unsigned long long v25;  // [bp-0x50]
    void* v26;  // [bp-0x48]
    unsigned long v27;  // [bp-0x38]
    unsigned long long v28[2];  // rbx
    unsigned long long v29;  // r12
    unsigned long long v30;  // rbp
    char v31;  // r15b
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long v37;  // r12
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rbx
    unsigned long long v42;  // r15
    unsigned long long v43;  // r14
    char *v44;  // rsi
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    char *v51;  // rsi
    unsigned long long v52;  // rdi
    char v53;  // r13b
    unsigned long long v54;  // rdx
    unsigned long v55;  // r12
    unsigned long v56;  // r13
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    int v61;  // xmm0
    int v62;  // xmm1
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax
    int v65;  // xmm0
    int v66;  // xmm1
    unsigned long long v68;  // rax
    unsigned long long v69;  // rdx

    v28 = a3;
    v29 = a6;
    if (!(char)(((0 ^ (long long)a2[48]) & (0 ^ -((long long)a2[48]))) >> 63) && !(char)(((0 ^ (long long)a2[24]) & (0 ^ -((long long)a2[24]))) >> 63))
    {
        v18 = 0;
        v20 = 4;
        v21 = 0;
        v2 = "%";
        v3 = 49;
        v1 = 0x8000000000000000;
        v68 = v1.localize();
        v4 = 1;
        v8 = a0;
        v9 = a1;
        v12 = 0;
        v13 = "-p-P--delimiter--line-z";
        v14 = 2;
        v15 = 0;
        v16 = "-P--delimiter--line-z";
        v17 = 2;
        fish_printf::printf_impl::sprintf_locale(&(char)v24, &v18, v68, v69, ".", &v4, 3, *((long long *)&v0));
        (char)v24.unwrap(&g_14cbfb8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v4);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
        memcpy(&v4, &v18, 16);
        v9 = 0;
        a6.append(&v4);
        fish::builtins::shared::builtin_print_error_trailer(a5, a6, a0, a1);
        return 8589934593;
    }
    v22 = a0;
    v23 = a1;
    v30 = (long long)a2[96];
    v31 = (char)a2[136];
    if (v30 != 0x8000000000000000 && (v31 & 1))
    {
        v18 = 0;
        v20 = 4;
        v21 = 0;
        v2 = "%";
        v3 = 49;
        v1 = 0x8000000000000000;
        v32 = v1.localize();
        v4 = 1;
        v8 = v22;
        v9 = v23;
        v12 = 0;
        v13 = "--delimiter--line-z";
        v14 = 11;
        v15 = 0;
        v16 = "--line-z";
        v17 = 6;
        fish_printf::printf_impl::sprintf_locale(&v24, &v18, v32, v33, ".", &v4, 3, *((long long *)&v0));
        v24.unwrap(&g_14cbfd0);
        goto LABEL_1364ac4;
    }
    else
    {
        if ((v31 & 1) && (char)a2[134] == 1)
        {
            v18 = 0;
            v20 = 4;
            v21 = 0;
            v2 = "%";
            v3 = 49;
            v1 = 0x8000000000000000;
            v34 = v1.localize();
            v4 = 1;
            v8 = v22;
            v9 = v23;
            v12 = 0;
            v13 = "-z";
            v14 = 2;
            v15 = 0;
            v16 = "--line-z";
            v17 = 6;
            fish_printf::printf_impl::sprintf_locale(&v24, &v18, v34, v35, ".", &v4, 3, *((long long *)&v0));
            v24.unwrap(&g_14cc108);
LABEL_1364ac4:
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v4);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
            *((int128_t *)&v4) = *((int128_t *)&v18);
        }
        else
        {
            v37 = a2 + 24;
            if ((long long)a2[48] != 0x8000000000000000)
            {
                (char)v1.to_vec("e", 5);
                fish::common::escape(&(char)v4, (long long)a2[56], (long long)a2[64]);
                (char)v18.add(&(char)v1, v8.index(v9, &g_14cbfe8), v39);
                *((int128_t *)&v1) = *((int128_t *)&v18);
                v3 = v21;
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v37);
                *((unsigned long long *)(v37 + 16)) = v3;
                *((int128_t *)v37) = (int128_t)v1;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v4);
            }
            else if ((long long)a2[24] == 0x8000000000000000)
            {
                (char)v4.to_vec("s", 61);
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v37);
                *((unsigned long long *)(v37 + 16)) = v9;
                *((int128_t *)v37) = (int128_t)v4;
            }
            if (!((char)~((int)a2[128]) & 48))
            {
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v40 = g_14cc000[0].localize();
                v4 = 1;
                v42 = v22;
                v8 = v42;
                v43 = v23;
                v9 = v43;
                fish_printf::printf_impl::sprintf_locale(&v19, &v1, v40, v39, ".", &v4, 1, *((long long *)&v0));
                v19.unwrap(&g_14cc018);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
                *((int128_t *)&v5) = *((int128_t *)&v1);
                v9 = 0;
                v41 = a6;
                v41.append(&v4);
                fish::builtins::shared::builtin_print_error_trailer(a5, v41, v42, v43);
                return 8589934593;
            }
            v7 = &g_14bfe80;
            v8 = 9;
            v9 = 0;
            v10 = (short)(int)a2[128] & 15;
            v11 = (short)(int)a2[128] & 15;
            v12 = 0;
            v29 = a6;
            if (v7.fold() > 1)
            {
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v46 = g_14cc0d8[0].localize();
                v4 = 1;
                v8 = v22;
                v9 = v23;
                fish_printf::printf_impl::sprintf_locale(&v19, &v1, v46, v39, ".", &v4, 1, *((long long *)&v0));
                v19.unwrap(&g_14cc0f0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
                memcpy(&v4, &v1, 16);
                v9 = 0;
                a6.append(&v4);
                fish::builtins::shared::builtin_print_error_trailer(a5, a6, v22, v23);
                return 8589934593;
            }
            if (!(v27 || (char)a2[132] || (char)a2[135]))
            {
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v47 = g_14c7390[0].localize();
                v4 = 1;
                v8 = v22;
                v9 = v23;
                v12 = 8197;
                v13 = 1;
                v15 = 4;
                v16 = 0;
                fish_printf::printf_impl::sprintf_locale(&v19, &v1, v47, v39, ".", &v4, 3, *((long long *)&v0));
                v19.unwrap(&g_14cc030);
            }
            else if (((char)a2[132] & v27 != 1))
            {
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v48 = g_14c62a0[0].localize();
                v4 = 1;
                v8 = v22;
                v9 = v23;
                v12 = 8197;
                v13 = 1;
                v15 = 4;
                v16 = a4;
                fish_printf::printf_impl::sprintf_locale(&v19, &v1, v48, v39, ".", &v4, 3, *((long long *)&v0));
                v19.unwrap(&g_14cc0c0);
            }
            else if (v27 && (char)a2[135])
            {
                v1 = 0;
                v2 = 4;
                v3 = 0;
                v49 = g_14c7360[0].localize();
                v4 = 1;
                v8 = v22;
                v9 = v23;
                v12 = 8197;
                v13 = 0;
                v15 = 4;
                v16 = a4;
                fish_printf::printf_impl::sprintf_locale(&v19, &v1, v49, v39, ".", &v4, 3, *((long long *)&v0));
                v19.unwrap(&g_14cc0a8);
            }
            else
            {
                v53 = (char)a2[137];
                if (v53 == 3)
                {
LABEL_13650c8:
                    v54 = &a3[v27];
                    while (v28 != v54)
                    {
                        v55 = v28[0];
                        v56 = v28[1];
                        if (!(char)fish::common::valid_var_name(v55, v56))
                        {
                            v1 = 0;
                            v2 = 4;
                            v3 = 0;
                            v58 = g_14c9d98[0].localize();
                            v4 = 1;
                            v8 = v22;
                            v9 = v23;
                            v12 = 1;
                            v13 = v55;
                            v14 = v56;
                            fish_printf::printf_impl::sprintf_locale(&v19, &v1, v58, v39, ".", &v4, 2, *((long long *)&v0));
                            v19.unwrap(&g_14cc078);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v4);
                            *((int128_t *)&v4) = *((int128_t *)&v1);
                            v9 = 0;
                            v41.append(v44);
                            fish::builtins::shared::builtin_print_error_trailer(a5, v41, v42, v43);
                            return 8589934593;
                        }
                        v28 = &v28[v28 != v54];
                        if (v55.flags_for(v56) >= 2)
                        {
                            v18 = 0;
                            v20 = 4;
                            v21 = 0;
                            v2 = "%";
                            v3 = 45;
                            v1 = 0x8000000000000000;
                            v57 = v1.localize();
                            v4 = 1;
                            v42 = v22;
                            v8 = v42;
                            v43 = v23;
                            v9 = v43;
                            v12 = 1;
                            v13 = v55;
                            v14 = v56;
                            fish_printf::printf_impl::sprintf_locale(&v24, &v18, v57, v39, ".", &v4, 2, *((long long *)&v0));
                            v24.unwrap(&g_14cc090);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v4);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                            *((int128_t *)&v4) = *((int128_t *)&v18);
                            v9 = 0;
                            v44 = &v4;
                            v41 = a6;
                            v41.append(v44);
                            fish::builtins::shared::builtin_print_error_trailer(a5, v41, v42, v43);
                            return 8589934593;
                        }
                    }
                    return 0x200000000;
                }
                else
                {
                    if (v30 == 0x8000000000000000)
                    {
                        if (!(v31 & 1))
                            goto LABEL_13650c8;
                        v24 = 0;
                        v25 = 4;
                        v26 = 0;
                        v59 = g_14c6cd0[0].localize();
                        v20 = v22;
                        v21 = v23;
                        v18 = 1;
                        v2 = "--line-z";
                        v3 = 6;
                        v1 = 0;
                        v60 = fish::builtins::read::validate_read_args::tokenize_flag(v53);
                        v61 = *((int128_t *)&v19);
                        *((int128_t *)&v9) = *((int128_t *)&v21);
                        v5 = v61;
                        v62 = *((int128_t *)&v3);
                        *((int128_t *)&v12) = (int128_t)v1;
                        v14 = v62;
                        v15 = 1;
                        v16 = v60;
                        v17 = v39;
                        fish_printf::printf_impl::sprintf_locale(&v1, &v24, v59, v39, ".", &v7, 3, *((long long *)&v0));
                        v1.unwrap(&g_14cc060);
                    }
                    else
                    {
                        v24 = 0;
                        v25 = 4;
                        v26 = 0;
                        v63 = g_14c6cd0[0].localize();
                        v20 = v22;
                        v21 = v23;
                        v18 = 1;
                        v2 = "--delimiter--line-z";
                        v3 = 11;
                        v1 = 0;
                        v64 = fish::builtins::read::validate_read_args::tokenize_flag(v53);
                        v65 = *((int128_t *)&v19);
                        *((int128_t *)&v9) = *((int128_t *)&v21);
                        v6 = v65;
                        v66 = *((int128_t *)&v3);
                        *((int128_t *)&v12) = (int128_t)v1;
                        v14 = v66;
                        v15 = 1;
                        v16 = v64;
                        v17 = v39;
                        fish_printf::printf_impl::sprintf_locale(&v1, &v24, v63, v39, ".", &v7, 3, *((long long *)&v0));
                        v1.unwrap(&g_14cc048);
                    }
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v7);
                    *((int128_t *)&v4) = *((int128_t *)&v24);
                    v9 = 0;
                    v51 = &v7;
                    v52.append(v51);
                    return 8589934593;
                }
            }
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v4);
            *((int128_t *)&v4) = *((int128_t *)&v1);
        }
        v9 = 0;
        v29.append(&v4);
        return 8589934593;
    }
}
