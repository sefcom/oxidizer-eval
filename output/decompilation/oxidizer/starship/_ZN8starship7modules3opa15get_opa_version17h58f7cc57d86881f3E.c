fn starship::modules::opa::get_opa_version(a0: u64, a1: void*) -> int {
    let v0: Option<struct24>;  // [bp-0x68]
    let v1: u128;  // [bp-0x60]
    let v2: struct40;  // [bp-0x58]
    let v3: struct24;  // [bp-0x50]
    let v4: u128;  // [bp-0x48]
    let v5: Option<struct48>;  // [bp-0x38]

    v5 = starship::context::Context::exec_cmd(a1, "opa", "version", 1);
    if !((((0 ^ v5 as i64) & (0 ^ -(v5 as i64))) >> 63) as char) {
        v3 = starship::utils::get_command_string_output(&v5);
        v1 = v4;
        v0 = v3.field_0 as i64;
        starship::modules::opa::parse_opa_version(a0, v1, v2);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
