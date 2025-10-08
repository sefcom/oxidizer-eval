fn uu_env::print_env(a0: i8) {
    let v0: u8;  // [bp-0x159]
    let v1: Option<struct17>;  // [bp-0x158]
    let v2: std::io::stdio::Stdout;  // [bp-0x150]
    let v3: struct36;  // [bp-0x148]
    let v4: u64;  // [bp-0x138]
    let v5: struct24;  // [bp-0x128]
    let v6: struct24;  // [bp-0x118]
    let v7: struct32;  // [bp-0x108]
    let v8: core::fmt::rt::Argument;  // [bp-0xe0]
    let v9: iNone;  // [bp-0xe0]
    let v10: core::fmt::rt::Argument;  // [bp-0xd0]
    let v11: iNone;  // [bp-0xd0]
    let v12: core::fmt::rt::Argument;  // [bp-0xc0]
    let v13: struct40;  // [bp-0xc0]
    let v14: core::fmt::Arguments;  // [bp-0xb0]
    let v15: core::option::Option<(alloc::string::String, alloc::string::String)>;  // [bp-0x80]
    let v16: u64;  // [bp-0x70]
    let v17: iNone;  // [bp-0x68]
    let v18: u64;  // [bp-0x58]
    let v19: std::env::Vars;  // [bp-0x50]
    let v20: struct32;  // [bp-0x50]
    let v23: u128;  // [bp-0x80]

    v0 = a0;
    v2 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v2);
    v19 = std::env::vars();
    v7 = v20;
    loop {
        v15 = <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v7);
        if (((0 ^ v15 as i64) & (0 ^ -(v23 as i64))) >> 63) as char {
            break;
        }
        v4 = v16;
        v3 = v15 as i128;
        v6 = v18;
        v5 = v17;
        v8 = core::fmt::rt::Argument {
            ty: &v3
        };
        v10 = core::fmt::rt::Argument {
            ty: &v5
        };
        v12 = core::fmt::rt::Argument {
            ty: &v0
        };
        v14 = core::fmt::Arguments {
            pieces: [&g_510768, "=", &g_510788]
            args: [v9, v11, v13]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(&v1, &v14));
    }
    return;
}
