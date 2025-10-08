fn uu_stat::get_quoted_file_name(a0: u64, a1: u64, a2: u64, a3: u64, a4: u32, a5: u8) -> int {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xf0], Other Possible Types: struct24
    let v1: u64;  // [bp-0xe8]
    let v2: u64;  // [bp-0xe0]
    let v4: u64;  // [bp-0xb8]
    let v5: u64;  // [bp-0xb0]
    let v6: struct24;  // [bp-0x90]
    let v7: u64;  // [bp-0x78]
    let v8: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x78]
    let v9: u64;  // [bp-0x70]
    let v10: u64;  // [bp-0x68]
    let v11: struct24;  // [bp-0x60]
    let v12: alloc::string::String;  // [bp-0x48]
    let v14: u8;  // al
    let v15: u8;  // bpl
    let v16: u64;  // rdx

    v0 = std::env::var(a1, a2);
    if let Ok(_) = v0 {
        v4 = *((&v0 as &char + 16) as &i128) as u128;
    }
    if (a4 & 0xf000) != 0xa000 {
        uu_stat::quote_file_name(a0, a1, a2, (a5 ? v14 : 3));
        return;
    }
    v15 = v14;
    v11 = uu_stat::quote_file_name(a1, a2, v15);
    v8 = std::fs::read_link(a3, a2);
    if !((((0 ^ v8 as i64) & (0 ^ -(v7))) >> 63) as char) {
        v0 = alloc::string::String::from_utf8_lossy(v9, v10);
        v6 = uu_stat::quote_file_name(v1, v2, v15);
        v12 = format!("{} -> {}", &v11, &v6);
        return struct24 {
            field_0: *(&v12.vec.buf.inner.cap as &i128)
            field_16: v12.vec.len
        };
    }
    v4 = uucore::util_name();
    v5 = v16;
    eprint!("{}: ", &v4);
    eprintln!("{}", &v3);
    return struct16 {
        field_0: 0x8000000000000000
        field_8: 1
    };
}
