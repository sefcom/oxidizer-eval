fn uu_runcon::errors::write_full_error(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: i64;  // [bp-0x90], Other Possible Types: struct_7 *
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: i64;  // [bp-0x68]
    let v6: &str;  // [bp-0x60], Other Possible Types: u64
    let v7: u64;  // [bp-0x58]
    let v8: i64;  // [bp-0x50], Other Possible Types: struct_5 *
    let v9: u64;  // [bp-0x48]
    let v10: void*;  // [bp-0x40]
    let v12: u64;  // rax
    let v13: i64;  // rdx
    let v14: u64;  // rax
    let v15: u32;  // ebp

    v2 = a2;
    v3 = &g_4ebde0;
    v0 = &v2;
    v1 = <&T as core::fmt::Display>::fmt;
    v6 = "\x01";
    v10 = 0;
    v8 = &v0;
    v9 = 1;
    if core::fmt::Formatter::write_fmt(a0, a1, &v6 as u64) {
        return vvar_26{reg 56} & -0x100 | 1;
    }
    v12 = g_4ebe10.field_0(v2) as i64;
    if !v12 {
        return 0;
    }
    loop {
        v4 = v12;
        v5 = v13;
        v0 = &v4;
        v1 = <&T as core::fmt::Display>::fmt;
        v6 = ": ";
        v7 = 1;
        v10 = 0;
        v8 = &v0;
        v9 = 1;
        v14 = core::fmt::Formatter::write_fmt(a0, a1, &v6);
        v15 = v14;
        if v14 {
            return v15;
        }
        v12 = *((v5 + 48) as &i64)(v4) as i64;
        if !v12 {
            return v15;
        }
    }
}
