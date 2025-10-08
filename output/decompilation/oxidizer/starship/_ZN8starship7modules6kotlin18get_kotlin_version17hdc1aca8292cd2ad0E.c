fn starship::modules::kotlin::get_kotlin_version(a0: u64, a1: void*, a2: u64, a3: u64) -> int {
    let v0: Option<struct48>;  // [bp-0x68]
    let v1: struct24;  // [bp-0x68], Other Possible Types: u64
    let v2: struct40;  // [bp-0x60]
    let v3: u128;  // [bp-0x58]
    let v4: iNone;  // [bp-0x48]
    let v5: Option<struct24>;  // [bp-0x38]
    let v6: struct24;  // [bp-0x28]
    let v7: Result<struct72, struct32>;  // [bp-0x18]

    v0 = starship::context::Context::exec_cmd(a1, a2, a3, "-version", 1);
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v7 = v4;
        v6 = v3;
        v5 = v0 as i128;
        v1 = starship::utils::get_command_string_output(&v5);
        starship::modules::kotlin::parse_kotlin_version(a0, v2, v1.field_16);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
