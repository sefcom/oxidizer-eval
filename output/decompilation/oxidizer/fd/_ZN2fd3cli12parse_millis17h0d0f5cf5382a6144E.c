fn fd::cli::parse_millis(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: u8;  // [bp-0x18]
    let v1: u8;  // [bp-0x17]
    let v2: i8;  // [bp-0x10]
    let v4: u64;  // rdx
    let v6: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx

    v6 = core::num::<impl u64>::from_ascii_radix(&v0, a1, a2);
    if v0 != 1 {
        v4 = (*(&v2 as &i64) >> 3) / 125;
        return struct16 {
            field_0: v4
            field_8: (*(&v2 as &i64) - (v4 as u32 * 1000) as u64) as u32 * 1000000
        };
    }
    return struct8 {
        field_0: v1
        padding_1: <UNKNOWN>
        field_8: <UNKNOWN>
    };
}
