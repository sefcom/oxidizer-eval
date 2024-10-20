fn uu_ls::show_dir_name() -> u32 {
    let v0: i192;  // [sp-0x98], Other Possible Types: struct24
    let v1: i64;  // [sp-0x88]
    let v2: struct40;  // [bp-0x80], Other Possible Types: i64
    let v3: i64;  // [sp-0x50]
    let v4: i64;  // [sp-0x48]
    let v5: i8;  // [bp-0x40]
    let v6: i8;  // [bp-0x38]
    let v7: i8;  // [bp-0x30]
    let v9: i64;  // rdx
    let v10: i64;  // rdi
    let v11: i64;  // rsi
    let v12: i64;  // rax
    let v13: i64;  // rsi
    let v14: i64;  // rax

    uucore::features::quoting_style::escape_name_inner();
    if !(!*((v9 + 238) as &i8) & *((v9 + 239) as &i8)) {
        v1 = v7;
        v0 = v5;
        v3 = &v0;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = struct40 {
            field_0: &g_5ac710
            field_8: 2
            field_16: &v3
            field_24: 1
            field_32: 0
        };
        v12 = std::io::Write::write_fmt(v11, &v2);
        if v12 {
            v2 = v12;
            core::result::unwrap_failed(); /* do not return */
        }
        if v0 {
LABEL_4cec3b:
        }
    } else {
        v0 = uu_ls::create_hyperlink(v6, v7, v10);
        v3 = &v0;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = struct40 {
            field_0: &g_5ac710
            field_8: 2
            field_16: &v3
            field_24: 1
            field_32: 0
        };
        v14 = std::io::Write::write_fmt(v13, &v2);
        if v14 {
            v2 = v14;
            core::result::unwrap_failed(); /* do not return */
        }
        if v5 {
            goto LABEL_4cec3b;
        }
    }
    return;
}
