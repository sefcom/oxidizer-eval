fn starship::logger::get_log_dir(a0: void*) -> long long {
    let v0: struct24;  // [bp-0x20]
    let v1: u64;  // [bp-0x20]

    v0 = std::env::var_os("STARSHIP_CACHE");
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        return struct24 {
            field_0: v0.field_0
            field_8: v0.field_8
        };
    }
    starship::logger::get_log_dir::{{closure}}(a0);
    return a0;
}
