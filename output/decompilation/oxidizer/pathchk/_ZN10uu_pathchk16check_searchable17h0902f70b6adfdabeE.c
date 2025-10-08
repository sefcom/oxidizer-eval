fn uu_pathchk::check_searchable(a0: &std::path::Path) -> u64 {
    let v0: u64;  // [bp-0x110]
    let v1: std::io::stdio::Stderr;  // [bp-0x108]
    let v2: core::fmt::rt::Argument;  // [bp-0x100]
    let v3: u128;  // [bp-0x100]
    let v4: core::fmt::Arguments;  // [bp-0xf0]
    let v5: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]
    let v7: u64;  // rbx
    let v8: u64;  // rbx
    let v9: u64;  // r14
    let v10: u8;  // al

    v5 = std::fs::symlink_metadata(a0);
    v8 = v7 & -0x100 | 1;
    if let Err(v9) = v5 {
        v0 = v9;
        v10 = std::io::error::Error::kind(v9) as u8;
        v8 = v8 & -0x100 | (!v10) as u8 as u64;
        if v10 {
            v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v2 = core::fmt::rt::Argument {
                ty: &v0
            };
            v4 = core::fmt::Arguments {
                pieces: [&g_4deae8, "\n"]
                args: [v3]
                fmt: 0
            };
            <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v1, &v4);
        }
    }
    return v8 & 4294967295;
}
