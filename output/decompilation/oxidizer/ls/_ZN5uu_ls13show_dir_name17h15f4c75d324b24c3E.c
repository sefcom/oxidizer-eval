fn uu_ls::show_dir_name(a0: i64, a1: i64, a2: i64) -> int {
    let v0: core::fmt::rt::Argument;  // [bp-0x98]
    let v1: u128;  // [bp-0x98]
    let v2: u128;  // [bp-0x88]
    let v3: u64;  // [bp-0x78]
    let v4: struct24;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: u64;  // [bp-0x58]
    let v7: core::fmt::Arguments;  // [bp-0x50]

    v4 = uucore::features::quoting_style::escape_dir_name(*((a0 + 32) as &i64), *((a0 + 40) as &i64), a2 + 245);
    if (!*((a2 + 238) as &i8) & *((a2 + 239) as &i8)) {
        uu_ls::create_hyperlink(&v2, v5, v6, a0);
        v0 = core::fmt::rt::Argument {
            ty: &v2
        };
        v7 = core::fmt::Arguments {
            pieces: [&g_612550, ":"]
            args: [v1]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(a1, &v7));
    } else {
        v3 = v6;
        v2 = v4.field_0;
        v0 = core::fmt::rt::Argument {
            ty: &v2
        };
        v7 = core::fmt::Arguments {
            pieces: [&g_612550, ":"]
            args: [v1]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(a1, &v7));
    }
    return;
}
