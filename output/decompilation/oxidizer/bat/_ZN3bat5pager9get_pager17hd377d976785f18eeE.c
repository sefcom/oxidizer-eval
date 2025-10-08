fn bat::pager::get_pager(a1: i64, a2: i64) -> : struct56 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0xd8]
    let v1: i64;  // [bp-0xd0]
    let v2: u64;  // [bp-0xc8]
    let v3: void*;  // [bp-0xb8]
    let v4: struct72;  // [bp-0xb0]
    let v5: Option<struct8>;  // [bp-0xa8]
    let v6: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xa0]
    let v7: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x80]
    let v8: u64;  // [bp-0x70]
    let v9: u64;  // [bp-0x68]
    let v10: struct24;  // [bp-0x60]
    let v11: u128;  // [bp-0x50]
    let v12: u128;  // [bp-0x40]
    let v13: i8;  // [bp-0x30]
    let v15: u64;  // 4096
    let v16: u64;  // 4096
    let v17: struct24;  // bpl
    let v18: u8;  // r12b
    let v19: Result<struct16, struct64>;  // rax

    v6 = std::env::var("BAT_PAGER");
    v7 = std::env::var("PAGER");
    v16 = a2;
    if !v15 && (v6 as i8 & 1) && !(v7 as i8 & 1) {
        v17 = 2;
        v18 = 1;
        v15 = v8;
        v16 = v9;
    }
    v10 = shell_words::split(a1, v16);
    if (((0 ^ v10.field_0 as i64) & (0 ^ -(v10.field_0 as i64))) >> 63) as char {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    v2 = v10.field_16;
    v0 = v10.field_0;
    if !v2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = bat::pager::PagerKind::from_bin(*((v1 + 8) as &i64), *((v1 + 16) as &i64));
    if v18 && (v19 & 255) <= 3 && v19 as u32 != 1 {
        v3 = 0;
        v4 = 8;
        v5 = 0;
        bat::pager::Pager::new(&v10, "less", 8, 0, 1, 2);
    } else {
        bat::pager::Pager::new(&v10, *((v1 + 8) as &i64), *((v1 + 16) as &i64), v1 + 24, v2 - 1, v19 as u8, v17);
    }
    return struct56 {
        field_0: v10.field_0
        field_16: v11
        field_32: v12
        field_48: *(&v13 as &i64)
    };
}
