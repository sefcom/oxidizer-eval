fn flealib::keylogger::get_key_logger_content(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v1: Result<struct24, struct16>;  // [bp-0x20]
    let v2: u64;  // [bp-0x20]
    let v3: u64;  // [bp-0x18]

    v1 = std::fs::read_to_string(a1);
    if !((((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char) {
        return struct24 {
            field_0: v1 as i128
            field_16: *((&v1 as &char + 16) as &i64)
        };
    }
    v0 = v3;
    <T as alloc::string::SpecToString>::spec_to_string(a0, &v0);
    return a0;
}
