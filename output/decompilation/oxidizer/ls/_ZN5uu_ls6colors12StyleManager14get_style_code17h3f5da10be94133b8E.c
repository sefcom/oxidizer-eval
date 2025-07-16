fn uu_ls::colors::StyleManager::get_style_code(a1: &struct24, a2: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: struct17;  // [bp-0x79]
    let v1: core::option::Option<&std::ffi::os_str::OsStr>;  // [bp-0x71]
    let v2: u32;  // [bp-0x70]
    let v3: u16;  // [bp-0x6c]
    let v4: u8;  // [bp-0x6a]
    let v5: u8;  // [bp-0x69]
    let v6: struct24;  // [bp-0x68]
    let v7: u64;  // [bp-0x58]
    let v8: u256;  // [bp-0x50]
    let v9: u64;  // [bp-0x20]
    let v10: u8;  // [bp-0x18]
    let v11: u32;  // [bp-0x17]
    let v12: u16;  // [bp-0x13]
    let v13: u8;  // [bp-0x11]
    let v14: u8;  // [bp-0x10]
    let v16: i64;  // rdi

    *((a0 + 21) as &i64) = *((a1 + 13) as &i64);
    *((a0 + 8) as &i128) = *(a1 as &i128);
    v0 = lscolors::style::Style::to_nu_ansi_term_style(a1);
    v1 = 0;
    v14 = v5;
    v9 = *(&v0.field_0 as &i64);
    v10 = 0;
    v11 = v2;
    v12 = v3;
    v13 = v4;
    v8 = struct32 {
        field_0: 0x8000000000000000
        field_8: 1
        field_16: 0
        field_24: 9223372036854775810
    };
    v6 = <T as alloc::string::ToString>::to_string(&v8);
    alloc::string::String::truncate(&v6, v7 - 4);
    *((v16 + 16) as &u64) = v7;
    *(v16 as &u128) = v6.field_0;
    return;
}
