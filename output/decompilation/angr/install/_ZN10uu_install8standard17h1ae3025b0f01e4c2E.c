long long uu_install::standard(unsigned long long a0[3])
{
    char v0;  // [bp-0x249]
    int v1;  // [bp-0x248], Other Possible Types: unsigned long
    unsigned long long v2;  // [bp-0x240]
    char *v3;  // [sp-0x238]
    char *v4;  // [bp-0x238]
    char *v5;  // [bp-0x230]
    char *v6;  // [bp-0x230]
    unsigned long long v7;  // [bp-0x228]
    unsigned long long v8;  // [bp-0x228]
    char v9;  // [sp-0x220], Other Possible Types: unsigned int
    unsigned long v10;  // [bp-0x220]
    int v11;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x210]
    char *v13;  // [bp-0x210]
    unsigned long long v14;  // [bp-0x208]
    void* v15;  // [bp-0x200]
    void* v16;  // [bp-0x1f0], Other Possible Types: char *, unsigned long long
    unsigned long long v17;  // [sp-0x1e8]
    void* v18;  // [bp-0x1e0]
    char v19;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x1d8]
    unsigned long long v21;  // [bp-0x1d0]
    int v22;  // [bp-0x1d0]
    char *v23;  // [bp-0x1c8], Other Possible Types: unsigned long long
    char v24;  // [bp-0x1c0]
    unsigned long long v25;  // [bp-0x1b0]
    char *v26;  // [bp-0x1a8]
    char v27;  // [bp-0x1a0]
    unsigned long long v28[3];  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x190]
    int v30;  // [bp-0x188], Other Possible Types: unsigned long long
    int v31;  // [bp-0x188]
    int v32;  // [bp-0x180], Other Possible Types: unsigned long long
    char *v33;  // [sp-0x178], Other Possible Types: int, unsigned long long
    char *v34;  // [bp-0x178]
    char *v35;  // [bp-0x170], Other Possible Types: unsigned int, unsigned long long
    int v36;  // [bp-0x168], Other Possible Types: void*, char *, char
    int v37;  // [bp-0x158], Other Possible Types: char *, unsigned long long
    unsigned long v38;  // [bp-0xd8]
    char *v39;  // [bp-0xd0]
    unsigned long long v40;  // [bp-0xc8]
    int v41;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v42;  // [bp-0xb0]
    int v43;  // [bp-0xa8], Other Possible Types: char
    int v44;  // [bp-0x98]
    int v45;  // [bp-0x88]
    int v46;  // [bp-0x78]
    char v47;  // [bp-0x68]
    unsigned long long v49;  // r15
    struct_0 *v50;  // rsi
    unsigned long long v51;  // r14
    unsigned long v52;  // rbp
    unsigned long v53;  // rsi
    unsigned long long v54;  // rcx
    unsigned long v55;  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rsi
    char v58;  // al
    unsigned long v59;  // rbp
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rax
    char v65;  // r13b
    unsigned long long v66[3];  // r15
    unsigned long long v67;  // r13
    char *v68;  // r12

    v49 = a0[2];
    if (!v49)
    {
        (char)v9.to_vec("missing file operandmissing destination file operand after ''install: creating directory cannot stat chown: Failed to remove existing file . Error: strip process terminated abnormally - exit code:  (backup: )\nUnimplemented feature:  with -d requires at least one argument.failed to create invalid target : No such file or directorytarget  is not a directorycannot backup cannot install strip program failed: invalid user: invalid group: omitting directory failed to access : Not a directorycannot overwrite directory  with non-directory ' and '' are the same fileextra operand ", 20);
        v33 = v12;
        *((int128_t *)&v30) = *((int128_t *)&v10);
        v35 = 1;
        v51 = (char)v30.new();
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
        return v51;
    }
    v65 = v50->field_66;
    if ((3 <= v49 & v65))
    {
        v19.clone(a0[1] + 48);
        uucore::format_usage(&v9, "{} [OPTION]... [FILE]...compare each pair of source and destination files, and in some cases, do not modify the destination at alltreat all arguments as directory names. create all components of the specified directoriescreate all leading components of DES", 24);
        v35 = v23;
        *((int128_t *)&v32) = *((int128_t *)&v19);
        memcpy(&v36, &v9, 16);
        v37 = v12;
        v30 = 17;
        v51 = v30.new();
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
        return v51;
    }
    v52 = v50->field_30;
    if ((char)(((0 ^ v52) & (0 ^ -(v52))) >> 63))
    {
        v49 -= 1;
        a0[2] = v49;
        v53 = a0[1];
        v54 = v49 * 3;
        v55 = *((long long *)(v53 + v54 * 8));
        if (v55 == 0x8000000000000000)
            core::option::unwrap_failed(&g_5023f0); /* do not return */
        *((int128_t *)&v11) = *((int128_t *)(v53 + v54 * 8 + 8));
        v10 = v55;
        if (v49)
        {
            v3 = v13;
            v1 = v10;
            v2 = v11;
        }
        else
        {
            core::str::converts::from_utf8(&(char)v30, v11, v12);
            if (((char)v30 & 1))
                core::option::unwrap_failed(&g_502408); /* do not return */
            v19 = v32;
            v21 = v33;
            v16 = &v19;
            v17 = <&T as core::fmt::Display>::fmt;
            *((unsigned long long **)&v31) = &g_502328;
            v32 = 2;
            v36 = 0;
            v33 = &v16;
            v35 = 1;
            v41.map_or_else(&(unsigned long long)v31);
            v35 = 1;
            v31 = v41;
            v33 = v42;
            v51 = (unsigned long long)v31.new();
            core::ptr::drop_in_place<std::path::PathBuf>(&v10);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
            return v51;
        }
    }
    else
    {
        (char)v31.to_vec(v50->field_38, v50->field_40);
        v3 = v34;
        *((int128_t *)&v1) = (int128_t)v31;
        v53 = a0[1];
    }
    v27.collect(v53, v53 + v49 * 24);
    if (v50->field_65)
    {
        if (v52 != 0x8000000000000000)
        {
            v57 = v2;
            v4 = v3;
            goto LABEL_46782d;
        }
        if (v29 <= 1 && !(char)uu_install::is_potential_directory_path(v2, v3))
        {
            v56 = v2.parent(v3);
            if (v56)
            {
                v57 = v56;
LABEL_46782d:
                v7 = v57;
                v5 = v4;
                v30.from_utf8_lossy(v57, v4);
                v38 = v52;
                v9 = 0;
                v58 = core::slice::<impl [T]>::ends_with(v32, v34, ::0x462e00::core::char::methods::encode_utf8_raw(47, &v9));
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v30);
                v59 = v38;
                v8 = v7;
                v6 = v5;
                if (v58)
                {
                    core::str::converts::from_utf8(&v30, v7, v5);
                    if (((char)v30 & 1))
                        core::option::unwrap_failed(&g_502420); /* do not return */
                    v8 = core::str::<impl str>::trim_end_matches(v32, v34);
                }
                v25 = v8;
                v26 = v6;
                std::fs::metadata(&v30, v8, v6);
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v30);
                if ((unsigned int)v30 == 2)
                {
                    if (v50->field_61)
                    {
                        v0 = v65;
                        v16 = 0;
                        v17 = 1;
                        v18 = 0;
                        v43.components(v25, v26);
                        v37 = v46;
                        v36 = v45;
                        v33 = v44;
                        v31 = v43;
                        while (true)
                        {
                            v47.next(&v30);
                            if (v47 == 10)
                                break;
                            v16.push((unsigned long long)v47.as_os_str(), v63);
                            if (!(char)1.is_dir(0))
                            {
                                v20 = 1;
                                *((int128_t *)&v22) = *((int128_t *)&v17);
                                v24 = 1;
                                v39 = &v20;
                                v40 = <os_display::Quoted as core::fmt::Display>::fmt;
                                v10 = &g_502348;
                                v11 = 2;
                                v15 = 0;
                                v13 = &v39;
                                v14 = 1;
                                std::io::stdio::_print(&v10);
                            }
                        }
                        core::ptr::drop_in_place<std::path::PathBuf>(&v16);
                        v65 = v0;
                        v59 = v38;
                    }
                    v16 = std::fs::create_dir_all(v25, v26);
                    if (v16)
                    {
                        v19 = v16;
                        std::sys::pal::unix::os::split_paths::bytes_to_path(&v10, v25, v26);
                        v36 = v13;
                        *((int128_t *)&v33) = *((int128_t *)&v10);
                        v32 = v19;
                        v30 = 2;
                        v64 = v30.new();
                        goto LABEL_467efa;
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v16);
                    }
                }
                if (v59 != 0x8000000000000000)
                {
                    std::fs::metadata(&v30, v7, v5);
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v30);
                    if ((unsigned int)v30 == 2 || !(char)v7.is_dir(v5))
                    {
                        std::sys::pal::unix::os::split_paths::bytes_to_path(&v10, v7, v5);
                        v35 = v13;
                        *((int128_t *)&v32) = *((int128_t *)&v10);
                        v30 = 14;
                        v64 = v30.new();
LABEL_467efa:
                        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v27);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v1);
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
                        return v64;
                    }
                }
            }
        }
    }
    if (v29 > 1)
    {
        v51 = uu_install::copy_files_into_dir(v28, v29, v2, v3, v50);
        goto LABEL_467c91;
    }
    if (v29 != 1)
        core::option::unwrap_failed(&g_502438); /* do not return */
    v66 = v28;
    if ((char)v66[1].is_dir(v66[2]))
    {
        v10.clone(v66[1], v66[2]);
        v35 = v13;
        *((int128_t *)&v32) = *((int128_t *)&v10);
        v30 = 13;
        v64 = v30.new();
        goto LABEL_467efa;
    }
    else
    {
        v67 = v2;
        v68 = v3;
        if (v65)
        {
            std::fs::metadata(&v30, v67, v68);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v30);
            if ((unsigned int)v30 == 2)
                goto LABEL_467d59;
            v30.clone(v67, v68);
            v23 = v34;
            memcpy(&v20, &v30, 16);
            v10.clone(v66[1], v66[2]);
            v37 = v13;
            memcpy(&v36, &v9, 16);
            *((int128_t *)&v32) = *((int128_t *)&v20);
            v35 = v23;
            v30 = 15;
            v64 = v30.new();
        }
        else
        {
LABEL_467d59:
            if ((char)uu_install::is_potential_directory_path(v67, v68))
            {
                v64 = uu_install::copy_files_into_dir(v66, 1, v67, v68, v50);
                goto LABEL_467efa;
            }
            else
            {
                if (!(char)v67.is_file(v68) && !(char)uu_install::is_new_file_path(v67, v68))
                {
                    v35 = v3;
                    *((int128_t *)&v32) = *((int128_t *)&v1);
                    v30 = 5;
                    v51 = v30.new();
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v27);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
                    return v51;
                }
                v51 = uu_install::copy(v66[1], v66[2], v67, v68, v50);
LABEL_467c91:
                core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v27);
                core::ptr::drop_in_place<std::path::PathBuf>(&v1);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
                return v51;
            }
        }
    }
}
