fn just::settings::Settings::shell_command(a1: i64, a2: i64) -> : struct224 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x118]
    let v1: struct157;  // [bp-0x100], Other Possible Types: struct16
    let v2: u64;  // [bp-0xf8]
    let v3: u192;  // [bp-0xf0]

    v1 = just::settings::Settings::shell(a1, a2);
    v1 = std::process::Command::new(v1.field_0, v2);
    v0 = v3;
    v1 = std::process::Command::args(&v0);
    memcpy(a0, &v1, 224);
    return;
}
