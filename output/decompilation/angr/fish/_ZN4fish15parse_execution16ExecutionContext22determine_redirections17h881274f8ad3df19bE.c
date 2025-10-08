long long fish::parse_execution::ExecutionContext::determine_redirections(unsigned long a0, void* a1, unsigned int *a2, unsigned long a3, unsigned long long a4)
{
    char v0;  // [sp-0x188]
    int v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x188]
    void* v3;  // [bp-0x188]
    unsigned int v4;  // [bp-0x184]
    int v5;  // [sp-0x180], Other Possible Types: uint128_t [3], char, unsigned long long
    void* v6;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x168], Other Possible Types: unsigned long long
    int v8;  // [bp-0x168]
    unsigned long long v9;  // [bp-0x160]
    void* v10;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp-0x140]
    void* v12;  // [sp-0x138]
    unsigned long long v13;  // [sp-0x130]
    void* v14;  // [sp-0x128]
    unsigned long long v15;  // [bp-0x118]
    unsigned int v16;  // [bp-0x110]
    unsigned short v17;  // [bp-0x10c]
    unsigned short v18;  // [bp-0x10a]
    unsigned long long v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    unsigned long long v21;  // [bp-0xf0]
    int v22;  // [bp-0xe8]
    unsigned long long v23;  // [bp-0xd8]
    unsigned int v24;  // [bp-0xd0]
    char v25;  // [bp-0xcc]
    void* v26;  // [bp-0xc8]
    int v27;  // [bp-0xc8]
    unsigned long long v28;  // [bp-0xc0]
    int v29;  // [bp-0xb8], Other Possible Types: void*
    unsigned long v30;  // [bp-0xb0]
    int v31;  // [bp-0xaf]
    unsigned long long v32;  // [bp-0xa8]
    char v33;  // [bp-0xa0]
    void* v34;  // [bp-0x98]
    int v35;  // [bp-0x98]
    unsigned long long v36;  // [bp-0x90]
    int v37;  // [bp-0x88], Other Possible Types: void*
    unsigned long v38;  // [bp-0x80]
    int v39;  // [bp-0x7f]
    unsigned long long v40;  // [bp-0x78]
    char v41;  // [bp-0x70]
    void* v42;  // [bp-0x68]
    int v43;  // [bp-0x68]
    unsigned long long v44;  // [bp-0x60]
    int v45;  // [bp-0x58], Other Possible Types: void*
    unsigned long v46;  // [bp-0x50]
    int v47;  // [bp-0x4f]
    unsigned long long v48;  // [bp-0x48]
    char v49;  // [bp-0x40]
    unsigned int *v51;  // rbp
    unsigned long long v52;  // r13
    unsigned long long v53;  // r13
    char v55;  // r14b
    char v56;  // bl
    unsigned int v58;  // edi
    unsigned int v59;  // ebp
    unsigned long long v60;  // rax
    unsigned long long v61;  // rdx
    uint128_t v62[3];  // rax
    int v63;  // xmm0
    int v64;  // xmm1
    unsigned int v66;  // edi
    unsigned int v67;  // r14d
    unsigned long long v68;  // rax
    unsigned long long v69;  // rdx
    uint128_t v70[3];  // rax
    int v71;  // xmm0
    int v72;  // xmm1
    unsigned long long v73;  // rax
    unsigned int v74;  // edi
    unsigned int v75;  // ebp
    unsigned long long v76;  // rax
    unsigned long long v77;  // rdx
    uint128_t v78[3];  // rax
    int v79;  // xmm0
    int v80;  // xmm1
    unsigned long long v82;  // [bp-0xe0]

    if (!a3)
        return 0;
    v51 = a2;
    v52 = a3 * 16;
    do
    {
        v53 = v52;
        if (*(v51))
        {
            v11 = v51.redirection();
            v15.try_from((unsigned long long)a0.node_source(v11, fish::ast::Node::source), a2);
            v55 = v18;
            if (v55 != 2 && v16 >= 0)
            {
                v56 = v17;
                v19.node_source_owned(a0, v11 + 16, 19904240);
                if ((char)fish::expand::expand_one(&v19, fish::proc::no_exec() * 2, a1, 0) && v21)
                {
                    v23 = v21;
                    *((int128_t *)&v22) = *((int128_t *)&v19);
                    v24 = v16;
                    v25 = v56;
                    if (v56 == 4 && !(char)(char)v22.is_close() && (int)(char)v22.get_target_as_fd() != 1)
                    {
                        v0.try_source_range(v11);
                        v74 = 0;
                        if (v0)
                            v74 = v4;
                        v75 = (int)v5;
                        v42 = 0;
                        v44 = 4;
                        *((uint128_t *)&v45) = 0;
                        *((uint128_t *)&v47) = 0;
                        v46 = v74.start();
                        v48 = a0.length(((v0 & 1) ? v75 : 0));
                        v49 = 1;
                        v12 = 0;
                        v13 = 4;
                        v14 = 0;
                        v9 = "R";
                        v10 = 68;
                        v7 = 0x8000000000000000;
                        v76 = v7.localize();
                        *((char *)&v2) = 1;
                        *((int128_t *)&v5) = *((int128_t *)&v82);
                        fish_printf::printf_impl::sprintf_locale(&v15, &v12, v76, v77, ".", &(char)v2, 1);
                        v15.unwrap(&g_14dd110);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v2);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
                        *((int128_t *)&v1) = *((int128_t *)&v12);
                        v6 = 0;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v42);
                        v45 = 0;
                        *((int128_t *)&v43) = (int128_t)v1;
                        v78 = 8.alloc_impl(48, 0);
                        if (!v78)
                            alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                        v79 = (int128_t)v43;
                        v80 = *((int128_t *)&v45);
                        v78[2] = *((int128_t *)&v48);
                        *((void*)&v78[1]) = v80;
                        *((void*)&v78[0]) = v79;
                        v2 = 1;
                        *((uint128_t *[3])&v5[0]) = v78;
                        v6 = 1;
                        a0.report_errors(a1, 2, &(char)v2);
                        core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v2);
                        return (unsigned long long)core::ptr::drop_in_place<fish::path::BaseDirectory>(&(char)v22) & 0xffffffffffffff00 | 3;
                    }
                    a4.push(&(char)v22, &g_14dd128);
                    if ((v55 & 1))
                    {
                        fish::parse_execution::get_stderr_merge(&v0);
                        a4.push(&v0, &g_14dd140);
                    }
                }
                else
                {
                    v0.try_source_range(v11);
                    v66 = 0;
                    if (v0)
                        v66 = v4;
                    v67 = (int)v5;
                    v34 = 0;
                    v36 = 4;
                    *((uint128_t *)&v37) = 0;
                    *((uint128_t *)&v39) = 0;
                    v38 = v66.start();
                    v40 = a0.length(((v0 & 1) ? v67 : 0));
                    v41 = 1;
                    v12 = 0;
                    v13 = 4;
                    v14 = 0;
                    v9 = "I";
                    v10 = 31;
                    v7 = 0x8000000000000000;
                    v68 = v7.localize();
                    *((char *)&v2) = 1;
                    *((int128_t *)&v5) = *((int128_t *)&v20);
                    fish_printf::printf_impl::sprintf_locale(&v15, &v12, v68, v69, ".", &(char)v2, 1);
                    v15.unwrap(&g_14dd0c8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v2);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
                    *((int128_t *)&v1) = *((int128_t *)&v12);
                    v6 = 0;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v34);
                    v37 = 0;
                    *((int128_t *)&v35) = (int128_t)v1;
                    v70 = 8.alloc_impl(48, 0);
                    if (!v70)
                        alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                    v71 = (int128_t)v35;
                    v72 = *((int128_t *)&v37);
                    v70[2] = *((int128_t *)&v40);
                    *((void*)&v70[1]) = v72;
                    *((void*)&v70[0]) = v71;
                    v2 = 1;
                    *((uint128_t *[3])&v5[0]) = v70;
                    v6 = 1;
                    a0.report_errors(a1, 2, &(char)v2);
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v2);
                    if (v56 != 2)
                        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v19) & 0xffffffffffffff00 | 3;
                    v73 = (unsigned long long)a0.node_source(v11, fish::ast::Node::source);
                    if (v73.starts_with(v69, "<", 2))
                    {
                        if (v69)
                        {
                            v7 = 0;
                            fish::parse_util::parse_util_locate_cmdsubst_range(&(char)v2, v73 + 4, v69 - 1, &v7, 0, 0, 0);
                            if ((int)v2 == 2 && !v5)
                            {
                                v3 = 0;
                                v5 = 4;
                                v6 = 0;
                                fish_printf::printf_impl::sprintf_locale(&v7, &(char)v2, "If you wish to use process substitution, consider the psub command, see: `help psub`\nI", 85, 8, 0);
                                v7.unwrap(&g_14dd0f8);
                                *((int128_t *)&v8) = *((int128_t *)&v3);
                                v10 = v6;
                                fish::wutil::wwrite_to_fd("I", v6, 2);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                            }
                        }
                        else
                        {
                            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dd0e0); /* do not return */
                        }
                    }
                    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v19) & 0xffffffffffffff00 | 3;
                }
            }
            else
            {
                v0.try_source_range(v11);
                v58 = 0;
                if (v0)
                    v58 = v4;
                v59 = *((int *)&v5);
                v26 = 0;
                v28 = 4;
                *((uint128_t *)&v29) = 0;
                *((uint128_t *)&v31) = 0;
                v30 = v58.start();
                v32 = a0.length(((v0 & 1) ? v59 : 0));
                v33 = 1;
                v12 = 0;
                v13 = 4;
                v14 = 0;
                v9 = "I";
                v10 = 24;
                v7 = 0x8000000000000000;
                v60 = v7.localize();
                v0 = 1;
                v5 = (unsigned long long)a0.node_source(v11, fish::ast::Node::source);
                v6 = v61;
                fish_printf::printf_impl::sprintf_locale(&v19, &v12, v60, v61, ".", &v0, 1);
                v19.unwrap(&g_14dd158);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
                *((int128_t *)&v1) = *((int128_t *)&v12);
                v6 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v26);
                v29 = 0;
                *((int128_t *)&v27) = (int128_t)v1;
                v62 = 8.alloc_impl(48, 0);
                if (!v62)
                    alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                v63 = (int128_t)v27;
                v64 = *((int128_t *)&v29);
                v62[2] = *((int128_t *)&v32);
                *((void*)&v62[1]) = v64;
                *((void*)&v62[0]) = v63;
                v2 = 1;
                *((uint128_t *[3])&v5[0]) = v62;
                v6 = 1;
                a0.report_errors(a1, 2, &v0);
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v0) & 0xffffffffffffff00 | 3;
            }
        }
        v51 += 4;
        v52 = v53 - 16;
    } while (v53 != 16);
    return 0;
}
