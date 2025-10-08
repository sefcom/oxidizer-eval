long long uu_ls::enter_directory(unsigned long long a0[6], unsigned long long a1, unsigned long long a2, char a3[257], unsigned long long a4, unsigned long long a5, unsigned long long a6[7])
{
    char v0;  // [bp-0x551]
    unsigned int v1;  // [bp-0x544]
    unsigned long long v2;  // [sp-0x540]
    char v3;  // [bp-0x538]
    char v4;  // [bp-0x538], Other Possible Types: unsigned long long
    char v5;  // [bp-0x530], Other Possible Types: unsigned long long
    char v6;  // [bp-0x530]
    unsigned long long v7;  // [bp-0x528]
    char v8;  // [bp-0x520]
    unsigned long long v9[3];  // [bp-0x518]
    unsigned long long v10;  // [bp-0x510]
    unsigned long v11;  // [bp-0x508], Other Possible Types: unsigned long long
    int v12;  // [bp-0x508]
    unsigned long long v13;  // [bp-0x4f8]
    unsigned long long v14[3];  // [sp-0x4e8]
    unsigned long long v15[3];  // [bp-0x4e8]
    unsigned long long v16;  // [sp-0x4e0]
    char *v17;  // [sp-0x4d8], Other Possible Types: unsigned long long
    char v18;  // [bp-0x4d0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x4c0]
    unsigned long long v20[3];  // [sp-0x4b0]
    unsigned long long v21;  // [sp-0x4a8]
    char *v22;  // [bp-0x4a0]
    unsigned long long v23;  // [bp-0x498]
    unsigned int v24;  // [bp-0x48c]
    unsigned long long v25;  // [bp-0x488]
    unsigned long long v26;  // [bp-0x480]
    unsigned long long v27;  // [bp-0x478]
    unsigned long long v28;  // [bp-0x468]
    char v29;  // [sp-0x460], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0x458]
    int v31;  // [bp-0x458]
    unsigned long long v32;  // [sp-0x450]
    unsigned long long v33;  // [bp-0x448]
    int v34;  // [bp-0x448]
    int v35;  // [bp-0x448]
    void* v36;  // [bp-0x440]
    unsigned long long v37;  // [bp-0x438]
    unsigned long long v38;  // [bp-0x330]
    char v39;  // [bp-0x328]
    char v40;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v41;  // [bp-0x318]
    int v42;  // [bp-0x318]
    int v43;  // [bp-0x318]
    unsigned long long v44;  // [bp-0x310]
    unsigned long long v45;  // [sp-0x308]
    unsigned long long v46;  // [bp-0x300]
    char v47;  // [bp-0x2f8]
    unsigned long long v48;  // [bp-0x1f0]
    int v49;  // [bp-0x1e8]
    int v50;  // [bp-0x160]
    unsigned int v51;  // r13d
    unsigned int v52;  // r14d
    void* v53;  // rax
    void* v54;  // r12
    unsigned int v55;  // ebp
    unsigned int v56;  // r15d
    unsigned long long v57;  // r13
    int v58;  // xmm0
    unsigned long long v59;  // rax
    unsigned long long v60;  // rdx
    unsigned long long v61;  // r15
    unsigned long long v62;  // r12
    unsigned long long v63;  // rbx
    unsigned long long v64;  // rax
    unsigned long long v65;  // rax
    struct_0 *v66;  // rax
    struct_0 *v67;  // rbx
    unsigned long v68;  // r14
    struct_0 *v69;  // r12
    unsigned long long v70;  // rax
    unsigned long long v71;  // rbx
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // rbx

    v38 = a1;
    v39 = a2;
    v0 = a3[248];
    if (a3[248])
    {
        v25 = 0;
        v26 = 8;
        v27 = 0;
        v51 = a3[243];
        v52 = a3[250];
    }
    else
    {
        v1 = a2;
        v53 = 8.alloc_impl(608, 0);
        if (!v53)
            alloc::alloc::handle_alloc_error(8, 608); /* do not return */
        v54 = v53;
        v29.clone(a0[4], a0[5]);
        v11 = v32;
        *((int128_t *)&v9) = *((int128_t *)&v29);
        v29 = 0;
        v40.to_vec(".//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", 1);
        v17 = v44;
        *((int128_t *)&v14) = *((int128_t *)&v40);
        v52 = a3[250];
        v51 = a3[243];
        v55 = v51;
        v56 = v52;
        v40.new(&(char)v9, &v29, &(char)v14, v55, v56, 0);
        v20.join(a0[4], a0[5]);
        *(v15) = 0;
        v29.to_vec("...//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", 2);
        v11 = v32;
        *((int128_t *)&v9) = *((int128_t *)&v29);
        v29.new(&v20, &v15, &(char)v9, v55, v56, 0);
        memcpy(v54, &v40, 304);
        memcpy(v54 + 304, &v29, 304);
        v25 = 2;
        v26 = v54;
        v27 = 2;
        a2 = v1;
    }
    v7 = a1;
    v8 = a2;
    v5 = 9223372036854775809;
    v1 = v51;
    v24 = v52;
    while (true)
    {
        v15.next(&v7);
        if ((int)v15[0] != 1)
            break;
        v57 = v17;
        if (v16)
        {
            v13 = v19;
            memcpy(&v11, &v18, 16);
            *(v9) = v16;
            v10 = v57;
            if (!(char)uu_ls::should_display(&v9, a3))
            {
                core::ptr::drop_in_place<std::fs::DirEntry>(&v9);
            }
            else
            {
                v20.path(&v9);
                v37 = v13;
                v58 = *((int128_t *)&v9[0]);
                v34 = v12;
                v31 = v58;
                v29 = 1;
                v40 = 0x8000000000000000;
                v50.new(&v20, &v29, &v40, v1, v24, 0);
                v25.push(&v50, &g_686b98);
            }
        }
        else
        {
            v28 = v57;
            v59 = a4.flush();
            if (v59)
            {
                v63 = v59.from();
                core::ptr::drop_in_place<std::io::error::Error>(&v28);
                core::ptr::drop_in_place<std::fs::ReadDir>(&v7);
                v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                return v63;
            }
            v41 = v57;
            v40 = 9223372036854775809;
            uucore::mods::error::set_exit_code(1);
            v2 = uucore::util_name();
            v4 = v60;
            *(v20) = &v2;
            v21 = <&T as core::fmt::Display>::fmt;
            v22 = &v40;
            v23 = <uu_ls::LsError as core::fmt::Display>::fmt;
            v29 = &g_686b10;
            v30 = 3;
            v36 = 0;
            v32 = &v20;
            v33 = 2;
            std::io::stdio::_eprint(&v29);
            core::ptr::drop_in_place<uu_ls::LsError>(&v40);
        }
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v7);
    v61 = v26;
    v62 = v27;
    uu_ls::sort_entries(v61, v62, a3);
    if (a3[0x100] == 1 || a3[242] == 1)
    {
        uu_ls::return_total(&v29, v61, v62, a3, a4);
        v63 = v30;
        if (v29 == 0x8000000000000000)
        {
            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
            return v63;
        }
        v40 = v29;
        v41 = v63;
        v44 = v32;
        *(v14) = v63;
        v16 = v44;
        *(v9) = &v14;
        v10 = <&T as core::fmt::Display>::fmt;
        v29 = &g_4cf290;
        v30 = 1;
        v36 = 0;
        v32 = &v9;
        v33 = 1;
        v64 = a4.write_fmt(&v29);
        if (v64)
        {
            v63 = v64.from();
            core::ptr::drop_in_place<alloc::string::String>(&v40);
            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
            return v63;
        }
        if (a3[246])
        {
            v65 = a6[6];
            if (!a6[6])
                v65 = (!a6[2] ? 0 : *((long long *)(a6[1] + a6[2] * 16 - 8)) + 1);
            a6[6] = v65 + v44 + 2;
        }
        core::ptr::drop_in_place<alloc::string::String>(&v40);
    }
    v63 = uu_ls::display_items(v61, v62, a3, a4, a6);
    if (v63)
    {
        v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
        return v63;
    }
    if (a3[238] == 1)
    {
        *(v9) = v61;
        v10 = v62 * 304 + v61;
        v11 = (!v0) * 2;
        v66 = v9.try_fold();
        if (v66)
        {
            v67 = v66;
            v5 = a3[246];
            do
            {
                v68 = &v67->padding_0[24];
                std::fs::read_dir(&v7, v68);
                v69 = v67;
                if (v8 == 2)
                {
                    v2 = v7;
                    v70 = a4.flush();
                    if (v70)
                    {
                        v63 = v70.from();
                        core::ptr::drop_in_place<std::io::error::Error>(&v2);
                        v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                        return v63;
                    }
                    v29.clone(v69->field_20, v69->field_28);
                    v45 = v32;
                    *((int128_t *)&v42) = *((int128_t *)&v29);
                    v46 = v2;
                    v47 = v69->field_129;
                    v40 = 9223372036854775810;
                    uucore::mods::error::set_exit_code(v47 + 1);
                    *(v20) = uucore::util_name();
                    v21 = v60;
                    *(v14) = &v20;
                    v16 = <&T as core::fmt::Display>::fmt;
                    v17 = &v40;
                    v18 = <uu_ls::LsError as core::fmt::Display>::fmt;
                    v29 = &g_686b10;
                    v30 = 3;
                    v36 = 0;
                    v32 = &v14;
                    v33 = 2;
                    std::io::stdio::_eprint(&v29);
                    core::ptr::drop_in_place<uu_ls::LsError>(&v40);
                }
                else
                {
                    v2 = v7;
                    v4 = v8;
                    v29.from_path(v68, v67->field_128);
                    v71 = v30;
                    if ((int)v29 == 1)
                    {
                        v71.from();
                        core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                        v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                        return v63;
                    }
                    memcpy(&v49, &v32, 136);
                    v48 = v71;
                    if ((char)a5.insert(&v48))
                    {
                        v72 = a4.flush();
                        if (v72)
                        {
                            v72.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v63;
                        }
                        v29.clone(v69->field_20, v69->field_28);
                        v45 = v32;
                        *((int128_t *)&v43) = *((int128_t *)&v29);
                        v40 = 9223372036854775813;
                        uucore::mods::error::set_exit_code(2);
                        *(v20) = uucore::util_name();
                        v21 = v60;
                        *(v14) = &v20;
                        v16 = <&T as core::fmt::Display>::fmt;
                        v17 = &v40;
                        v18 = <uu_ls::LsError as core::fmt::Display>::fmt;
                        v29 = &g_686b10;
                        v30 = 3;
                        v36 = 0;
                        v32 = &v14;
                        v33 = 2;
                        std::io::stdio::_eprint(&v29);
                        core::ptr::drop_in_place<uu_ls::LsError>(&v40);
                        core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                    }
                    else
                    {
                        v29 = &g_6866e0;
                        v30 = 1;
                        v32 = 8;
                        *((uint128_t *)&v34) = 0;
                        v73 = a4.write_fmt(&v29);
                        if (v73)
                        {
                            v73.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v63;
                        }
                        if ((v6 & 1))
                        {
                            a6[6] = 2;
                            v63 = uu_ls::dired::indent(a4);
                            if (v63)
                            {
                                core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                                v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                                return v63;
                            }
                            v29.from_utf8_lossy(v69->field_20, v69->field_28);
                            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v29);
                            uu_ls::dired::calculate_subdired(a6, 8);
                            a6[6] = a6[6] + 11;
                        }
                        v74 = uu_ls::show_dir_name(v69, a4, a3);
                        if (v74)
                        {
                            v74.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v63;
                        }
                        v29 = &g_6866e0;
                        v30 = 1;
                        v32 = 8;
                        *((uint128_t *)&v35) = 0;
                        v75 = a4.write_fmt(&v29);
                        if (v75)
                        {
                            v75.from();
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v63;
                        }
                        v63 = uu_ls::enter_directory(v69, v2, v3, a3, a4, a5, a6);
                        if (v63)
                        {
                            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v63;
                        }
                        v29.from_path(v68, v69->field_128);
                        v76 = v30;
                        if ((int)v29 == 1)
                        {
                            v63 = v76.from();
                            v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
                            return v63;
                        }
                        memcpy(&v41, &v32, 136);
                        v40 = v76;
                        a5.remove(&v40);
                    }
                }
                v67 = v9.try_fold();
            } while (v67);
        }
    }
    v25.drop_in_place<alloc::vec::Vec<uu_ls::PathData>>();
    return 0;
}
