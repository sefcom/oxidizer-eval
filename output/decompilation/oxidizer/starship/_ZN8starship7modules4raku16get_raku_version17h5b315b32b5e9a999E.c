fn starship::modules::raku::get_raku_version(a0: u64, a1: void*) -> int {
    let v0: Option<struct48>;  // [bp-0x68], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x60]
    let v2: Option<struct48>;  // [bp-0x58]
    let v3: u128;  // [bp-0x48]
    let v4: struct24;  // [bp-0x38]
    let v5: u128;  // [bp-0x28]
    let v6: struct16;  // [bp-0x18]
    let v8: &mut [u8];  // xmm0

    v0 = starship::context::Context::exec_cmd(a1, "raku", "--version", 1);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        v8 = v0 as i128;
        v6 = v3;
        v5 = *((&v0 as &char + 16) as &i128);
        v4 = v8;
        v0 = v4;
        v2 = v5 as i64;
        starship::modules::raku::parse_raku_version(a0, v1, v2);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
