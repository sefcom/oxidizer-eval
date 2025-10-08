fn starship::context::Context::get_cmd_duration(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<u128, core::num::error::ParseIntError>;  // [bp-0x28]
    let v2: u32;  // ecx
    let v4: u64;  // rax
    let v5: u64;  // rax

    if !((((0 ^ *((a1 + 136) as &i64)) & (0 ^ -(*((a1 + 136) as &i64)))) >> 63) as char) {
        v0 = core::num::<impl u128>::from_ascii_radix(*((a1 + 144) as &i64), *((a1 + 152) as &i64), v2);
        v4 = 1;
        return struct32 {
            field_0: v5
            field_8: 0
            field_16: v0 as i128
        };
    }
    return struct16 {
        field_0: 0
    };
}
