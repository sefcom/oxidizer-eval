fn uu_test::isatty(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x50], Other Possible Types: struct25
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: struct24;  // [bp-0x30]
    let v4: u128;  // [bp-0x2c]
    let v8: core::result::Result<i32, core::num::error::ParseIntError>;  // rax:rax

    v0 = core::str::converts::from_utf8(a1, a2);
    if let Ok(_) = v0 {
        v8 = core::num::<impl i32>::from_ascii_radix(v1, v2, a2 as u32) as u128;
        if !(v8 as u8 & 1) {
            return struct16 {
                field_0: 7
                field_8: (isatty((v8 >> 32) as u32) as u64 as u32 == 1) as u8 as u8
            };
        }
    }
    v0 = struct25 {
        field_0: 1
        field_8: a1
        field_16: a2
        field_24: 1
    };
    v3 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
    return struct40 {
        field_0: 5
        field_8: v3.field_0 as i32
        field_12: <UNKNOWN>
        field_28: <UNKNOWN>
    };
}
