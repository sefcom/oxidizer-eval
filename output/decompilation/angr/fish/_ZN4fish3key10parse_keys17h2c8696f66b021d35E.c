long long fish::key::parse_keys(void* a0, unsigned int *a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x170]
    void* v1;  // [bp-0x170], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v2;  // [bp-0x170]
    unsigned long long v3;  // [bp-0x170]
    struct_0 *v4;  // [bp-0x168]
    unsigned int v5;  // [bp-0x15c]
    char v6;  // [bp-0x158], Other Possible Types: unsigned int, unsigned long long
    int v7;  // [bp-0x158], Other Possible Types: unsigned int
    char v8;  // [bp-0x158]
    unsigned long long v9;  // [bp-0x158]
    int v10;  // [bp-0x150], Other Possible Types: unsigned long long
    int v11;  // [bp-0x148], Other Possible Types: char, unsigned int
    char v12;  // [bp-0x138]
    int v13;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x128]
    void* v15;  // [bp-0x118], Other Possible Types: unsigned long long (64 bits)[3], unsigned long long
    char v16;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v17;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned int *v18;  // [bp-0x100], Other Possible Types: char, unsigned long long
    unsigned long long v19;  // [bp-0xf8]
    unsigned long long v20;  // [bp-0xf0]
    unsigned int *v21;  // [bp-0xe0]
    unsigned long long v22;  // [bp-0xd8]
    void* v23;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0xc8]
    void* v25;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v26;  // [bp-0xb8]
    unsigned long long v27;  // [bp-0xb0]
    void* v28;  // [bp-0xa8]
    void* v29;  // [bp-0xa0]
    unsigned long long v30;  // [bp-0x98]
    void* v31;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x88]
    void* v33;  // [bp-0x80]
    unsigned long long v34;  // [bp-0x78]
    unsigned long long v35;  // [bp-0x70]
    unsigned long long v36;  // [bp-0x68]
    unsigned int v37;  // [bp-0x60]
    unsigned long long v38;  // [bp-0x58]
    unsigned long long v39;  // [bp-0x50]
    char v40;  // [bp-0x48]
    unsigned int v41;  // [bp-0x38]
    unsigned long v43;  // rbx
    char v46;  // bpl
    char v47;  // r15b
    unsigned long long v48;  // rax
    unsigned long long v49;  // rdx
    unsigned long long v51;  // rbx
    unsigned long v52;  // rbx
    unsigned long v53;  // rbx
    unsigned long long v54;  // r13
    unsigned long long v55;  // r14
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    void* v59;  // r12
    unsigned long v60;  // r13
    unsigned long long v62;  // r14
    unsigned int v63;  // eax
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rax
    unsigned long long v66;  // r12
    int v67;  // xmm0
    void* v68;  // rcx
    unsigned long long v69;  // rax
    int v70;  // xmm0
    int v71;  // xmm2
    int v72;  // xmm0
    unsigned long long v74;  // rax
    unsigned int v75;  // eax
    unsigned int v76;  // edx
    unsigned long long v78;  // rax

    v21 = a1;
    v26 = 0;
    v27 = 4;
    v28 = 0;
    if (!a2)
    {
        *((unsigned long long *)&a0[24]) = 0;
        *((void* *)&a0[8]) = v26;
        *((unsigned long long *)&a0[16]) = 4;
        *((unsigned long long *)a0) = 0;
        return 4;
    }
    v43 = *(a1);
    if (a2 == 1)
    {
        fish::key::canonicalize_key(&v6, v43);
        v26.push(v6.unwrap(&g_14dbbc0), &g_14dbbd8);
        goto LABEL_13d4af0;
    }
    if ((char)g_a1bab8.contains(a2))
    {
        v6 = 45;
        if (!v6.slice_contains(a1, a2))
        {
            v7 = 44;
            if (!v7.slice_contains(v21, a2))
            {
                v9 = "-";
                v10 = &g_14c7740;
                if (!v9.any(&v21))
                {
                    if (!v22)
                        core::panicking::panic_bounds_check(0, 0, &g_14dbbf0); /* do not return */
                    if (*(v21) != 70)
                    {
                        if (*(v21) != 102 || ((unsigned int)v43 < 32 | (int)v21.char_at(v22, 1) - 58 < -10) == 1)
                            goto LABEL_13d5072;
LABEL_13d4c36:
                        memcpy(&v40, &v21, 16);
                        v41 = 44;
                        while (true)
                        {
                            v48 = v40.next();
                            if (!v48)
                                break;
                            v30 = v48;
                            if (v48.eq_by(v48 + v49 * 4, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '"))
                            {
                                fish::key::canonicalize_key(&v9, 45);
                                v26.push(v9.unwrap(&g_14dbce0), &g_14dbcf8);
                                continue;
                            }
                            v11 = 45;
                            v6 = v30;
                            v10 = v49;
                            v51 = v6.fold();
                            v37 = 45;
                            v35 = v6;
                            v36 = v49;
                            if (v51 == 1)
                            {
                                v1 = 0;
                                v59 = 0;
                                v60 = 0;
                                v29 = 0;
                                v34 = v49;
                            }
                            else if (v51)
                            {
                                v34 = v49;
                                v52 = v51 - 1;
                                v5 = 0;
                                v1 = 0;
                                v1 = v2;
                                do
                                {
                                    v53 = v52;
                                    v54 = v35.next();
                                    if (!v54)
                                        core::option::unwrap_failed(&g_14dbcb0); /* do not return */
                                    v55 = v49 * 4 + v54;
                                    if (v54.eq_by(v55, "ctrl", &g_55107c))
                                    {
                                        v46 = 1;
                                    }
                                    else
                                    {
                                        v56 = v54.eq_by(v55, "altshiftsuper", "shiftsuper");
                                        if ((char)v56)
                                        {
                                            v5 = (unsigned int)v56 & 0xffffff00 | 1;
                                        }
                                        else
                                        {
                                            v57 = v54.eq_by(v55, "shiftsuper", "super");
                                            if ((char)v57)
                                            {
                                                v1 = (unsigned int)v57 & 0xffffff00 | 1;
                                                v1 = v2;
                                            }
                                            else
                                            {
                                                v47 = 1;
                                                if (!v54.eq_by(v55, "super", &g_a1bbe1))
                                                {
                                                    v31 = 0;
                                                    v32 = 4;
                                                    v33 = 0;
                                                    v24 = "u";
                                                    v25 = 29;
                                                    v23 = 0x8000000000000000;
                                                    v69 = v23.localize();
                                                    v19 = v54;
                                                    v20 = v49;
                                                    v18 = 1;
                                                    fish::key::escape_nonprintables((unsigned int)&v15, v30, v34);
                                                    v70 = *((int128_t *)&v16);
                                                    v71 = *((int128_t *)&v20);
                                                    *((int128_t *)&v7) = *((int128_t *)&v18);
                                                    v11 = v71;
                                                    v12 = 1;
                                                    v13 = v70;
                                                    fish_printf::printf_impl::sprintf_locale(&v18, &v31, v69, v49, ".", &v6, 2);
                                                    v18.unwrap(&g_14dbcc8);
                                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
                                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v15);
                                                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v23);
                                                    v4->field_10[1] = 0;
                                                    v72 = *((int128_t *)&v31);
                                                    *((int128_t *)&a0[8]) = *((int128_t *)&v31);
                                                    *((unsigned long long *)v68) = 1;
                                                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&v26);
                                                }
                                            }
                                        }
                                    }
                                    v3 = v1;
                                    v1 = v3;
                                    v52 = v53 - 1;
                                } while (v53 != 1);
                                v29 = v47 * &g_1000000;
                                v1 = (char)v1 * 0x10000;
                                v59 = (char)v5 * 0x100;
                                v60 = v46;
                            }
                            else
                            {
                                core::option::unwrap_failed(0x14dbc08); /* do not return */
                            }
                            v62 = v35.next();
                            if (!v62)
                                core::option::unwrap_failed(&g_14dbc20); /* do not return */
                            v38 = v62;
                            v39 = v49;
                            v9 = "-";
                            v10 = &g_14c7740;
                            v63 = (unsigned int)v9.find_map(&v38).or_else(v62, v49);
                            if (v63 == 0x110000)
                            {
                                if (!v62.starts_with(v49, 102) || v49 >= 4)
                                {
                                    v23 = 0;
                                    v24 = 4;
                                    v25 = 0;
                                    v16 = "c";
                                    v17 = 21;
                                    v15 = 0x8000000000000000;
                                    v74 = v15.localize();
                                    fish::key::escape_nonprintables((unsigned int)&v18, v30, v34);
                                    v8 = 1;
                                    *((int128_t *)&v10) = *((int128_t *)&v19);
                                    fish_printf::printf_impl::sprintf_locale(&v31, &v23, v74, v49, ".", &v8, 1);
                                    v31.unwrap(&g_14dbc38);
                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
                                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v15);
                                    v4->field_10[1] = 0;
                                    v72 = *((int128_t *)&v23);
                                    *((int128_t *)&a0[8]) = *((int128_t *)&v23);
                                    *((unsigned long long *)v68) = 1;
                                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&v26);
                                }
                                v64 = v62.strip_prefix(v49);
                                if (!v64)
                                    core::option::unwrap_failed(&g_14dbc50); /* do not return */
                                fish::wutil::wcstoi::fish_wcstoul(&v31, v64, a2);
                                if ((char)v31 != 1)
                                {
                                    v9 = 1;
                                    v10 = 12;
                                    v11 = 0;
                                    if ((char)v9.contains(v32))
                                    {
                                        v32 >> 32.unwrap(&g_14dbc68);
                                        v65 = fish::key::function_key(v32);
                                        v66 = v59 | v60 | v29 | v1;
                                        goto LABEL_13d4c6c;
                                    }
                                }
                                v15 = 0;
                                v16 = 4;
                                v17 = 0;
                                v19 = "o";
                                v20 = 44;
                                v18 = 0x8000000000000000;
                                v8 = 4;
                                v10 = 12;
                                v12 = 1;
                                v13 = v64;
                                v14 = v49;
                                fish_printf::printf_impl::sprintf_locale(&(char)v23, &v15, v18.localize(), v49, ".", &v8, 2);
                                (char)v23.unwrap(&g_14dbc98);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v8);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v18);
                                v4->field_10[1] = 0;
                                v72 = *((int128_t *)&v15);
                                *((int128_t *)&a0[8]) = *((int128_t *)&v15);
                                *((unsigned long long *)v68) = 1;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&v26);
                            }
                            fish::key::canonicalize_key(&v9, v63 | ((unsigned int)v60 | (unsigned int)v59 | (unsigned int)v29 | v0) * 0x100000000);
                            if (v9 != 0x8000000000000000)
                            {
                                v67 = *((int128_t *)&v10);
                                v4->field_8 = v9;
                                *((void*)&v4->field_10[0]) = v67;
                                v68 = a0;
                                *((unsigned long long *)a0) = 1;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&v26);
                            }
                            v65 = v10;
                            v66 = v65 >> 32;
LABEL_13d4c6c:
                            v26.push(v65 & 4294967295 | v66 * 0x100000000, &g_14dbc80);
                        }
                        goto LABEL_13d4af0;
                    }
                }
            }
        }
    }
    if ((unsigned int)v43 >= 32)
        goto LABEL_13d4c36;
LABEL_13d5072:
    v18 = v21;
    v19 = &v21[a2];
    while (true)
    {
        v75 = v18.next();
        if (v75 == 2)
            break;
        v75.unwrap(v76, &g_14bd1b0);
        fish::key::canonicalize_key(&v9, v76);
        v26.push(v9.unwrap(&g_14dbd10), &g_14dbd28);
    }
LABEL_13d4af0:
    v78 = fish::key::canonicalize_raw_escapes(&v4->field_8, &v26);
    v4->field_0 = 0;
    return v78;
}
