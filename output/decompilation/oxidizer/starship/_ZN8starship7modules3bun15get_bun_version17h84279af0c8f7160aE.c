fn starship::modules::bun::get_bun_version(a0: u64, a1: void*) -> long long {
    let v0: struct24;  // [bp-0x68]
    let v1: u192;  // [bp-0x68]
    let v2: struct24;  // [bp-0x50]
    let v3: Option<struct48>;  // [bp-0x38]

    v3 = starship::context::Context::exec_cmd(a1, "bun", "--version", 1);
    if !((((0 ^ v3 as i64) & (0 ^ -(v3 as i64))) >> 63) as char) {
        v0 = starship::utils::get_command_string_output(&v3);
        v2 = v1;
        return starship::modules::bun::get_bun_version::{{closure}}(a0, &v2) as u64;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
