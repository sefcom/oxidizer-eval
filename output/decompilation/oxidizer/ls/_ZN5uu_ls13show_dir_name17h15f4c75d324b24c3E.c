fn uu_ls::show_dir_name(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i64;  // [sp-0x90]
    let v2: i8;  // [bp-0x88], Other Possible Types: struct24
    let v3: i192;  // [sp-0x68], Other Possible Types: struct24
    let v4: i64;  // [sp-0x50]
    let v5: i64;  // [sp-0x48]
    let v6: i64;  // [sp-0x40]
    let v7: i64;  // [sp-0x38]
    let v8: i64;  // [sp-0x30]

    v3 = uucore::features::quoting_style::escape_dir_name(*((a0 + 32) as &i64), *((a0 + 40) as &i64), a2 + 245);
    if !(!*((a2 + 238) as &i8) & *((a2 + 239) as &i8)) {
        v2 = v3;
        v0 = &v2;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_612550;
        v5 = 2;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(a1, &v4));
    } else {
        uu_ls::create_hyperlink(&v2, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), a0);
        v0 = &v2;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_612550;
        v5 = 2;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(a1, &v4));
    }
    return;
}
