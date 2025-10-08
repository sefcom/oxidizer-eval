long long forc_fmt::format_pkg_at_dir(char a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x108], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x100]
    unsigned long long v2;  // [bp-0xf8]
    uint128_t v3;  // [bp-0xf0]
    char v4;  // [bp-0xd0]
    int v5;  // [bp-0xcf]
    char v6;  // [bp-0xc8]
    int v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    char v10;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    int v13;  // [bp-0x78], Other Possible Types: char
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15[1][3];  // [bp-0x60]
    char v16;  // [bp-0x48]
    char v18;  // bpl
    char v19;  // bl
    unsigned long long v20;  // rbx

    sway_utils::helpers::find_parent_dir_with_file(&v10, a1, a2);
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
    {
        v0 = &g_c0a450;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        return ::0x7d0470::anyhow::__private::format_err(&v0);
    }
    (char)v0.spec_to_string(v11, v12);
    v9 = v2;
    *((int128_t *)&v7) = *((int128_t *)&v0);
    v13.join(v8, v2, "Forc.tomlmissing field `workspace`Cannot get parent dir of /capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.42/src/util/flat_map.rs", 9);
    v2 = v12;
    *((int128_t *)&v0) = *((int128_t *)&v10);
    sway_utils::helpers::get_sway_files(&v16, &(char)v0);
    (char)v0.into_iter(&v16);
    v15.next(&(char)v0);
    v18 = a0;
    if (v15[0] != 0x8000000000000000)
    {
        do
        {
            forc_fmt::format_file(&v4, v18, &v15, a3);
            if (v4 == 1)
            {
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&(char)v0);
                core::ptr::drop_in_place<std::path::PathBuf>(&v13);
                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v7);
                return *((long long *)&v6);
            }
            v19 |= (char)v5;
            v15.next(&(char)v0);
        } while (v15[0] != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&(char)v0);
    v2 = v14;
    v0 = v13;
    forc_fmt::format_manifest(&v4, v18, &(char)v0);
    if (v4 == 1)
    {
        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v7);
        return *((long long *)&v6);
    }
    if ((a0 & 1) && ((v19 | (char)v5) & 1))
    {
        v0 = &g_c0a3e0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v20 = ::0x7d0470::anyhow::__private::format_err(&v0);
        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v7);
        return v20;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v7);
    return 0;
}
