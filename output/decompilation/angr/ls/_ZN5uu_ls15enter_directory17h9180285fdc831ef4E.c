long long uu_ls::enter_directory(unsigned long long a0[6], unsigned long long a1, unsigned long long a2, char a3[257], unsigned long long a4, unsigned long long a5, struct_0 *a6)
{
    char v0;  // [bp-0x559]
    unsigned int v1;  // [bp-0x54c]
    unsigned long long v2;  // [sp-0x548]
    char v3;  // [bp-0x540]
    char v4;  // [bp-0x540], Other Possible Types: unsigned long long
    char v5;  // [bp-0x538]
    char v6;  // [bp-0x538], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x530]
    unsigned long long v8;  // [bp-0x528]
    unsigned long long v9;  // [bp-0x520]
    unsigned long long v10;  // [bp-0x518]
    char v11;  // [bp-0x510]
    char *v12;  // [bp-0x508], Other Possible Types: int, unsigned long long
    unsigned long long v13;  // [bp-0x500]
    char *v14;  // [bp-0x4f8], Other Possible Types: unsigned long
    int v15;  // [bp-0x4f8]
    unsigned long long v16;  // [bp-0x4e8]
    int v17;  // [sp-0x4d8], Other Possible Types: void*, char *, unsigned long long
    char *v18;  // [sp-0x4d0], Other Possible Types: unsigned long long
    char *v19;  // [sp-0x4c8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x4c0], Other Possible Types: unsigned long long
    int v21;  // [bp-0x4b0]
    unsigned long long v22[3];  // [sp-0x498]
    unsigned long long v23;  // [sp-0x490]
    char *v24;  // [bp-0x488]
    unsigned long long v25;  // [bp-0x480]
    unsigned int v26;  // [bp-0x474]
    unsigned long long v27;  // [bp-0x468]
    char v28;  // [bp-0x460], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x460]
    int v30;  // [bp-0x458], Other Possible Types: unsigned long long
    unsigned long long v31;  // [bp-0x458]
    unsigned long long v32;  // [bp-0x450]
    char *v33;  // [bp-0x450], Other Possible Types: unsigned long long
    int v34;  // [bp-0x448]
    int v35;  // [bp-0x448]
    unsigned long long v36;  // [bp-0x448]
    void* v37;  // [bp-0x440]
    unsigned long long v38;  // [bp-0x438]
    unsigned long long v39;  // [bp-0x330]
    char v40;  // [bp-0x328]
    char v41;  // [bp-0x320], Other Possible Types: unsigned long long
    int v42;  // [sp-0x318]
    unsigned long long v43;  // [bp-0x318]
    int v44;  // [bp-0x318]
    char *v45;  // [bp-0x310], Other Possible Types: unsigned long long
    char *v46;  // [sp-0x308]
    unsigned long long v47;  // [bp-0x300]
    char v48;  // [bp-0x2f8]
    unsigned long long v49;  // [bp-0x1f0]
    int v50;  // [bp-0x1e8]
    int v51;  // [bp-0x160]
    unsigned int v52;  // r13d
    unsigned int v53;  // r14d
    unsigned long long v54;  // rax
    void* v55;  // r12
    unsigned int v56;  // ebp
    unsigned int v57;  // r15d
    unsigned long long v58;  // r13
    int v59;  // xmm0
    unsigned long long v60;  // rax
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rbx
    unsigned long long v63;  // rax
    struct_1 *v64;  // rax
    struct_1 *v65;  // rbp
    unsigned long v66;  // r15
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbx
    unsigned long long v69;  // rax
    unsigned long long v70;  // rax
    unsigned long long v71;  // rax
    unsigned long long v72;  // rax
    unsigned long long v73;  // rbx

    v39 = a1;
    v40 = a2;
    v0 = a3[248];
    if (a3[248])
    {
        v7 = 0;
        v8 = 8;
        v9 = 0;
        v52 = a3[243];
        v53 = a3[250];
    }
    else
    {
        v1 = a2;
        v54 = 8.alloc_impl(608);
        if (!v54)
            alloc::alloc::handle_alloc_error(8, 608); /* do not return */
        v55 = v54;
        v28.clone(&a0[3]);
        v14 = v33;
        *((int128_t *)&v12) = *((int128_t *)&v28);
        v29 = 0;
        v41.to_owned("./a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/s", 1);
        v19 = v45;
        *((int128_t *)&v17) = *((int128_t *)&v41);
        v53 = a3[250];
        v52 = a3[243];
        v56 = v52;
        v57 = v53;
        v41.new(&(char)v12, &v29, &(char)v17, v56, v57, 0);
        v22.join(a0[4], a0[5], ".../a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib", 2);
        v17 = 0;
        v29.to_owned(".../a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib", 2);
        v14 = v33;
        *((int128_t *)&v12) = *((int128_t *)&v29);
        v29.new(&v22, &v17, &(char)v12, v56, v57, 0);
        memcpy(v55, &v41, 304);
        memcpy(v55 + 304, &v29, 304);
        v7 = 2;
        v8 = v55;
        v9 = 2;
        a2 = v1;
    }
    v10 = a1;
    v11 = a2;
    v6 = 9223372036854775809;
    v1 = v52;
    v26 = v53;
    while (true)
    {
        v17.next(&v10);
        if (!((char)v17 & 1))
            break;
        v58 = v19;
        if (v18)
        {
            v16 = (long long)v21;
            memcpy(&v14, &v20, 16);
            v12 = v18;
            v13 = v58;
            if (!(char)uu_ls::should_display(&v12, a3))
            {
                ::0x51c920::core::ptr::drop_in_place<std::fs::DirEntry>(&v12);
            }
            else
            {
                v22.path(&v12);
                v38 = v16;
                v59 = *((int128_t *)&v12);
                v34 = v15;
                v30 = v59;
                v29 = 1;
                v41 = 0x8000000000000000;
                v51.new(&v22, &v29, &v41, v1, v26, 0);
                v7.push(&v51, &g_69f438);
            }
        }
        else
        {
            v27 = v58;
            v60 = a4.flush();
            if (v60)
            {
                v62 = v60.from();
                ::0x51ca00::core::ptr::drop_in_place<std::io::error::Error>(&v27);
                core::ptr::drop_in_place<std::fs::ReadDir>(&v10);
                v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                return v62;
            }
            v43 = v58;
            v41 = 9223372036854775809;
            uucore::mods::error::set_exit_code(1);
            v2 = uucore::util_name();
            v4 = v61;
            *(v22) = &v2;
            v23 = <&T as core::fmt::Display>::fmt;
            v24 = &v41;
            v25 = <uu_ls::LsError as core::fmt::Display>::fmt;
            v29 = &g_69f378;
            v31 = 3;
            v37 = 0;
            v33 = &v22[0];
            v36 = 2;
            std::io::stdio::_eprint(&v29);
            ::0x51c730::core::ptr::drop_in_place<uu_ls::LsError>(&v41);
        }
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v10);
    uu_ls::sort_entries(v8, v9, a3);
    if (a3[0x100] == 1 || a3[242])
    {
        uu_ls::return_total(&v29, v8, v9, a3, a4);
        v62 = v31;
        if (v29 == 0x8000000000000000)
        {
            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
            return v62;
        }
        v41 = v29;
        v43 = v62;
        v45 = v33;
        v17 = v62;
        v18 = v45;
        v12 = &v17;
        v13 = <&T as core::fmt::Display>::fmt;
        v29 = &g_4259a0;
        v31 = 1;
        v37 = 0;
        v33 = &v12;
        v36 = 1;
        v63 = a4.write_fmt(&v29);
        if (v63)
        {
            v62 = v63.from();
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v41);
            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
            return v62;
        }
        if (a3[246])
            uu_ls::dired::add_total(a6, v45);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v41);
    }
    v62 = uu_ls::display_items(v8, v9, a3, a4, a6);
    if (!v62)
    {
        if (a3[238])
        {
            v12 = v8;
            v13 = v9 * 304 + v8;
            v14 = (!v0) * 2;
            if (!v12.try_fold())
            {
                v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                return 0;
            }
            v6 = a3[246];
            while (true)
            {
                v65 = v64;
                v66 = &v64->padding_0[24];
                std::fs::read_dir(&v10, &v64->padding_0[24]);
                if (v11 == 2)
                {
                    v2 = v10;
                    v67 = a4.flush();
                    if (v67)
                    {
                        v62 = v67.from();
                        ::0x51ca00::core::ptr::drop_in_place<std::io::error::Error>(&v2);
                        v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                        return v62;
                    }
                    v29.clone(v66);
                    v46 = v33;
                    *((int128_t *)&v42) = *((int128_t *)&v29);
                    v47 = v2;
                    v48 = v65->field_129;
                    v41 = 9223372036854775810;
                    uucore::mods::error::set_exit_code(v48 + 1);
                    *(v22) = uucore::util_name();
                    v23 = v61;
                    v17 = &v22[0];
                    v18 = <&T as core::fmt::Display>::fmt;
                    v19 = &v41;
                    v20 = <uu_ls::LsError as core::fmt::Display>::fmt;
                    v29 = &g_69f378;
                    v31 = 3;
                    v37 = 0;
                    v33 = &v17;
                    v36 = 2;
                    std::io::stdio::_eprint(&v29);
                    ::0x51c730::core::ptr::drop_in_place<uu_ls::LsError>(&v41);
                }
                else
                {
                    v2 = v10;
                    v4 = v11;
                    v29.from_path(v66, v65->field_128);
                    v68 = v31;
                    if (((char)v29 & 1))
                    {
                        v68.from();
                        core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                        v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                        return v62;
                    }
                    memcpy(&v50, &v33, 136);
                    v49 = v68;
                    if (a5.insert(&v49))
                    {
                        v69 = a4.flush();
                        if (v69)
                        {
                            v69.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v62;
                        }
                        v29.clone(v66);
                        v46 = v33;
                        *((int128_t *)&v44) = *((int128_t *)&v29);
                        v41 = 9223372036854775813;
                        uucore::mods::error::set_exit_code(2);
                        *(v22) = uucore::util_name();
                        v23 = v61;
                        v17 = &v22[0];
                        v18 = <&T as core::fmt::Display>::fmt;
                        v19 = &v41;
                        v20 = <uu_ls::LsError as core::fmt::Display>::fmt;
                        v29 = &g_69f378;
                        v31 = 3;
                        v37 = 0;
                        v33 = &v17;
                        v36 = 2;
                        std::io::stdio::_eprint(&v29);
                        ::0x51c730::core::ptr::drop_in_place<uu_ls::LsError>(&v41);
                        core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                    }
                    else
                    {
                        v28 = &g_69f3a8;
                        v30 = 1;
                        v32 = 8;
                        *((uint128_t *)&v34) = 0;
                        v70 = a4.write_fmt(&v28);
                        if (v70)
                        {
                            v70.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v62;
                        }
                        if ((v5 & 1))
                        {
                            a6->field_30 = 2;
                            v62 = uu_ls::dired::indent(a4);
                            if (v62)
                            {
                                core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                                v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                                return v62;
                            }
                            v28.to_string_lossy(v65->field_20, v65->field_28);
                            ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v28);
                            uu_ls::dired::calculate_subdired(a6, 8);
                            a6->field_30 = a6->field_30 + 11;
                        }
                        v71 = uu_ls::show_dir_name(v65, a4, a3);
                        if (v71)
                        {
                            v71.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v62;
                        }
                        v29 = &g_69f3a8;
                        v31 = 1;
                        v33 = 8;
                        *((uint128_t *)&v35) = 0;
                        v72 = a4.write_fmt(&v29);
                        if (v72)
                        {
                            v72.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v62;
                        }
                        if (uu_ls::enter_directory(v65, v2, v3, a3, a4, a5, a6))
                            break;
                        v29.from_path(v66, v65->field_128);
                        v73 = v31;
                        if (!((char)v29 & 1))
                        {
                            memcpy(&v43, &v33, 136);
                            v41 = v73;
                            a5.remove(&v41);
                        }
                        else
                        {
                            v62 = v73.from();
                            break;
                        }
                    }
                }
                v64 = v12.try_fold();
                if (!v64)
                {
                    v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                    return 0;
                }
            }
        }
        else
        {
            v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
            return 0;
        }
    }
    v7.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
    return v62;
}
