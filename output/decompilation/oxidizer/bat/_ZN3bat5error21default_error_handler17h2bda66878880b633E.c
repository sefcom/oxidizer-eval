fn bat::error::default_error_handler(a0: i64, a1: i64, a2: i64) {
    let v0: Result<struct80, struct9>;  // [bp-0xc0]
    let v1: Result<struct80, struct25>;  // [bp-0xb8], Other Possible Types: struct40
    let v2: struct56;  // [bp-0xb0]
    let v3: Result<struct24, struct16>;  // [bp-0xa8], Other Possible Types: struct_0 *
    let v4: struct24;  // [bp-0xa0], Other Possible Types: u64
    let v5: struct24;  // [bp-0x98], Other Possible Types: struct_1 *
    let v6: &std::path::Path;  // [bp-0x90], Other Possible Types: Result<struct40, struct16>
    let v7: Result<struct81, struct17>;  // [bp-0x88], Other Possible Types: u64
    let v8: &str;  // [bp-0x80]
    let v9: Result<struct24, struct16>;  // [bp-0x70], Other Possible Types: u64
    let v10: void*;  // [bp-0x58]
    let v11: u8;  // [bp-0x50]
    let v12: struct81;  // [bp-0x4f], Other Possible Types: u64
    let v13: u64;  // [bp-0x40]
    let v14: Result<struct81, struct17>;  // [bp-0x38], Other Possible Types: u64
    let v15: struct81;  // [bp-0x30], Other Possible Types: u64
    let v16: core::fmt::Arguments;  // [bp-0x28], Other Possible Types: struct24
    let v17: core::fmt::Arguments;  // [bp-0x20], Other Possible Types: struct32
    let v18: void*;  // [bp-0x18]

    v2 = a0;
    match (*(a0 as &i8)) {
        0 => {
            if std::io::error::Error::kind(*((a0 + 8) as &i64)) as u8 == 11 {
                std::process::exit(0); /* do not return */
            }
        }
        6 => {
            v11 = 0;
            v10 = 0;
            v12 = 90194313218;
            v7 = 0x8000000000000000;
            v8 = "[bat error]";
            v9 = 9223372036854775810;
            v3 = &v7;
            v4 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
            v5 = &v2;
            v6 = <&T as core::fmt::Display>::fmt;
            v14 = &g_ace428;
            v15 = 3;
            v18 = 0;
            v16 = &v3;
            v17 = 2;
            v1 = *((a2 + 72) as &i64)(a1, &v14) as i64;
            return;
        }
        _ => {
            v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v0 = std::io::stdio::Stdout::lock(&v1);
            v11 = 0;
            v10 = 0;
            v12 = 90194313218;
            v7 = 0x8000000000000000;
            v8 = "[bat error]";
            v9 = 9223372036854775810;
            v3 = &v7;
            v4 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
            v5 = &v2;
            v6 = <&T as core::fmt::Display>::fmt;
            v14 = &g_ace198;
            v15 = 3;
            v18 = 0;
            v16 = &v3;
            v17 = 2;
            v13 = std::io::Write::write_fmt(&v0, &v14);
            return;
        }
    }
}
