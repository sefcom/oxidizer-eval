long long forc_fmt::format_workspace_at_dir(unsigned int a0, unsigned long long a1[14], unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x490]
    unsigned int v1;  // [bp-0x48c]
    int v2;  // [bp-0x488], Other Possible Types: char
    char v3;  // [bp-0x480], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x478]
    unsigned long long v5;  // [bp-0x468]
    char v6;  // [bp-0x460]
    unsigned long long v8;  // [bp-0x458]
    int v9;  // [bp-0x438]
    unsigned long long v10;  // [bp-0x438]
    int v11;  // [bp-0x430]
    char v12;  // [bp-0x428]
    int v13;  // [bp-0x420]
    int v14;  // [bp-0x418], Other Possible Types: char
    int v15;  // [bp-0x408], Other Possible Types: char
    int v16;  // [bp-0x3f8]
    int v17;  // [bp-0x3e8], Other Possible Types: char
    void* v18;  // [bp-0x3d8]
    unsigned long long v19;  // [bp-0x3d0]
    void* v20;  // [bp-0x3c8]
    char v21;  // [bp-0x3c0]
    int v22;  // [bp-0x3c0]
    unsigned long long v23;  // [bp-0x3b0]
    int v24;  // [bp-0x3a8]
    int v25;  // [bp-0x398], Other Possible Types: char
    int v26;  // [bp-0x388], Other Possible Types: char
    int v27;  // [bp-0x378], Other Possible Types: char
    int v28;  // [bp-0x368]
    int v29;  // [bp-0x358]
    int v30;  // [bp-0x348], Other Possible Types: char, unsigned long
    char v31;  // [bp-0x340], Other Possible Types: unsigned long long
    int v32;  // [bp-0x338], Other Possible Types: unsigned long long
    int v33;  // [bp-0x330], Other Possible Types: char
    int v34;  // [bp-0x328]
    char v35;  // [bp-0x320]
    int v36;  // [bp-0x318]
    char v37;  // [bp-0x310]
    int v38;  // [bp-0x308]
    int v39;  // [bp-0x300]
    char v40;  // [bp-0x2f0]
    char v41;  // [bp-0x2e0]
    unsigned long long v42;  // [bp-0x230]
    unsigned long long v43;  // [bp-0x228]
    unsigned long long v44;  // [bp-0x220]
    unsigned long long v45;  // [bp-0x218]
    char v46;  // [bp-0x210]
    char v47;  // [bp-0x200]
    unsigned long long v48;  // [bp-0x1e8]
    int v49;  // [bp-0x1e0], Other Possible Types: char
    int v50;  // [bp-0x1d0], Other Possible Types: char
    int v51;  // [sp-0x1c0]
    int v52;  // [sp-0x1b0]
    int v53;  // [sp-0x1a0]
    int v54;  // [bp-0x190]
    char v55;  // [bp-0x180]
    char v56;  // [bp-0xd8]
    unsigned long long v58;  // rbx
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // ymm0
    uint256_t v64;  // ymm0
    unsigned long long v65;  // rbx
    unsigned long long v66;  // r14
    unsigned long long v67;  // r15
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rbp
    unsigned long long v71;  // rax
    uint256_t v72;  // ymm0
    unsigned long long v74;  // rax
    int v75;  // xmm0
    char *v76;  // r13
    unsigned long long v77;  // r15
    int v78;  // xmm0
    int v79;  // xmm1

    v1 = a0;
    (char)v30.from_dir(a2, a3, a4);
    v58 = *((long long *)&v30);
    v59 = *((int128_t *)&v31);
    v9 = v59;
    memcpy(&v12, &v33, 16);
    memcpy(&v14, &v35, 16);
    memcpy(&v15, &v37, 16);
    v60 = v39;
    v16 = v60;
    memcpy(&v17, &v40, 16);
    if (v58 == 2)
    {
        memcpy(&(char)v39, &v17, 16);
        v38 = v16;
        v78 = (int128_t)v9;
        v79 = *((int128_t *)&v12);
        memcpy(&(char)v36, &v15, 16);
        v34 = v14;
        v32 = v79;
        v30 = v78;
        return (char)v30.from();
    }
    memcpy(&v55, &v41, 168);
    memcpy(&v49, &(char)v9, 16);
    memcpy(&v50, &v12, 16);
    v51 = v14;
    v52 = v15;
    v61 = v16;
    v53 = v61;
    v62 = v17;
    v64 = ...;
    v54 = v62;
    v48 = v58;
    v18 = 0;
    v19 = 8;
    v20 = 0;
    if (a1[6])
    {
        v65 = a1[5];
        v66 = a1[12];
        v67 = a1[13];
        v68 = a1[6] * 24;
        while (true)
        {
            v69 = v68;
            (char)v30.join(v66.dir(v67), a2, v65);
            v71 = *((long long *)&v30);
            v72 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v31);
            *((int128_t *)&v9) = *((int128_t *)&v31);
            if (v71 == 0x8000000000000000)
                break;
            v45 = v71;
            v64 = v72 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v9;
            memcpy(&v46, &v9, 16);
            v18.push(&v45, &g_c0a3f0);
            v65 += 24;
            v68 = v69 - 24;
            if (v69 == 24)
                break;
        }
    }
    std::fs::read_dir(&v2, a2, a3);
    v0 = (char)v1;
    if (v3 != 2)
    {
        v5 = *((long long *)&v2);
        v6 = v3;
        while (true)
        {
            (char)v30.try_fold(&v5);
            v74 = *((long long *)&v30);
            if (!v74)
                break;
            v75 = *((int128_t *)&v31);
            *((int128_t *)&v13) = *((int128_t *)&v33);
            v11 = v75;
            v10 = v74;
            v42.path(&v10);
            if (!(char)sway_utils::helpers::is_sway_file(v43, v44))
            {
                core::ptr::drop_in_place<std::path::PathBuf>(&v42);
            }
            else
            {
                forc_fmt::format_file(&(char)v30, v0, &v42, &v48);
                if (v30 == 1)
                {
                    core::ptr::drop_in_place<std::fs::DirEntry>(&v10);
                    core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,forc_fmt::get_sway_dirs::{{closure}}>>(&v5);
                    if (v3 != 2)
                    {
                        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v18);
                        core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v48);
                        return v77;
                    }
                    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v2);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v18);
                    core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v48);
                    return v77;
                }
            }
            core::ptr::drop_in_place<std::fs::DirEntry>(&v10);
        }
        core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<std::fs::DirEntry>>(&(char)v30);
        core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,forc_fmt::get_sway_dirs::{{closure}}>>(&v5);
        if (v3 != 2)
            goto LABEL_7d469c;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v2);
LABEL_7d469c:
    std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v30, a2, a3);
    forc_fmt::get_sway_dirs(&v5, &(char)v30);
    (char)v9.into_iter(&v5);
    (char)v22.next(&(char)v9);
    if (*((long long *)&v21) != 0x8000000000000000)
    {
        v76 = &v56;
        do
        {
            v4 = v23;
            v2 = v22;
            v5.join(v3, v4, "Forc.tomlmissing field `workspace`Cannot get parent dir of /capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.42/src/util/flat_map.rs", 9);
            std::fs::metadata(&(char)v30, *((long long *)&v6), v8);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v30);
            core::ptr::drop_in_place<std::path::PathBuf>(&v5);
            if ((int)*((long long *)&v30) != 2)
            {
                (char)v30.from_dir(v3, v4, a4);
                memcpy(&v24, &v31, 16);
                memcpy(&v25, &v33, 16);
                memcpy(&v26, &v35, 16);
                memcpy(&v27, &v37, 16);
                v28 = v39;
                memcpy(&v29, &v40, 16);
                if (*((long long *)&v30) == 2)
                {
                    memcpy(&(char)v39, &v29, 16);
                    v38 = v28;
                    v36 = v27;
                    v34 = v26;
                    v32 = v25;
                    v30 = v24;
                    v77 = (char)v30.from();
LABEL_7d49f1:
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v22);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&(char)v9);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v18);
                    core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v48);
                    return v77;
                }
                memcpy(v76, &v41, 168);
                core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v48);
                v48 = *((long long *)&v30);
                memcpy(&v54, &v29, 16);
                v53 = v28;
                v52 = v27;
                v51 = v26;
                v50 = v25;
                v49 = v24;
                memcpy(&v55, v76, 168);
                v76 = v76;
            }
            v77 = forc_fmt::format_pkg_at_dir(v0, v3, v4, &v48);
            if (v77)
                goto LABEL_7d49f1;
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v22);
            (char)v22.next(&(char)v9);
        } while (*((long long *)&v21) != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&(char)v9);
    v47.join(a2, a3, "Forc.tomlmissing field `workspace`Cannot get parent dir of /capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.42/src/util/flat_map.rs", 9);
    forc_fmt::format_manifest(&(char)v30, v0, &v47);
    if (v30)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v18);
        core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v48);
        return v31;
    }
    if (((char)v1 & 1) && ((&v30)[1] & 1))
    {
        v30 = &g_c0a3e0;
        v31 = 1;
        v32 = 8;
        *((uint128_t *)&v33) = 0;
        v77 = ::0x7d0470::anyhow::__private::format_err(&(char)v30);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v18);
        core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v48);
        return v77;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v18);
    core::ptr::drop_in_place<swayfmt::formatter::Formatter>(&v48);
    return 0;
}
