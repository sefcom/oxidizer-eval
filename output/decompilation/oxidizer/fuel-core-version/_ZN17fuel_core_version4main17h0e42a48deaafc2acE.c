fn fuel_core_version::main() -> long long {
    let v0: struct32;  // [bp-0xa8], Other Possible Types: struct40, u128
    let v1: Result<struct24, struct16>;  // [bp-0xa8], Other Possible Types: u640
    let v2: struct24;  // [bp-0xa8]
    let v3: core::fmt::rt::Argument;  // [bp-0xa0]
    let v4: u128;  // [bp-0x98]
    let v5: u64;  // [bp-0x88]
    let v6: struct24;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: u64;  // [bp-0x60]
    let v9: core::fmt::rt::Argument;  // [bp-0x58]
    let v10: iNone;  // [bp-0x50]
    let v11: u64;  // [bp-0x40]
    let v12: struct24;  // [bp-0x38]
    let v14: u8;  // bpl
    let v15: core::fmt::rt::Argument;  // rbx
    let v16: u64;  // r14
    let v17: u128;  // xmm0
    let v18: u64;  // r15
    let v19: u64;  // rax

    v0 = clap_builder::derive::Parser::parse();
    v14 = *((&v0.field_16 as &char + 8) as &i8);
    v6 = v2;
    v1 = fuel_core_version::read_fuel_core_version(&v6);
    v15 = v3;
    if let Ok(_) = v1 {
        v11 = v5;
        v10 = *((&v1 as &char + 16) as &i128);
        v8 = v1 as i64;
        v9 = v15;
        v0 as u640 = fuel_core_version::get_version_file_path(&v6);
        v16 = v1 as i64;
        v15 = v3;
        if !((((0 ^ v16) & (0 ^ -(v16))) >> 63) as char) {
            if v14 {
                v5 = v11;
                v17 = *((&v1 as &char + 72) as &i128);
                *(&v4 as void*) = v10;
                v0 = v17;
                v18 = fuel_core_version::verify_version_from_file(&v0 as u640);
                core::mem::drop(v16, v15);
                if v18 {
                    v15 = v18;
                }
            } else {
                v19 = *((&v1 as &char + 16) as &i64);
                v0 = struct40 {
                    field_0: *((&v1 as &char + 72) as &i128)
                    field_16: v10
                    field_32: v11
                };
                v12 = struct24 {
                    field_0: v16
                    field_8: v15
                    field_16: v19
                };
                v15 = fuel_core_version::write_version_to_file(&v0, &v12);
            }
        }
    }
    core::mem::drop(*((&v1 as &char + 48) as &i64), v7);
    return v15;
}
