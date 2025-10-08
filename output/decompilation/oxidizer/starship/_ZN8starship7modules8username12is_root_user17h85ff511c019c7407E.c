fn starship::modules::username::is_root_user() -> u8 {
    let v0: &str;  // [bp-0x8]
    let v2: &str;  // rax

    v0 = v2;
    return !geteuid();
}
