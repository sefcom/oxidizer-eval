fn starship::utils::internal_exec_cmd(a1: i64, a2: i64, a3: i64, a4: i64) -> Option<struct48> {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x1e0]
    let v1: u8;  // [bp-0x1d8]
    let v2: struct16;  // [bp-0x100], Other Possible Types: u8
    let v3: u8;  // [bp-0xf8]

    starship::utils::create_command(&v2, a1, a2);
    if !((((0 ^ v2) & (0 ^ -(v2))) >> 63) as char) {
        memcpy(&v1, &v3, 216);
        v0 = v2;
        std::process::Command::args(&v0, a3, a4);
        starship::utils::exec_timeout(a0, &v0, 0, 0x1dcd6500);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
