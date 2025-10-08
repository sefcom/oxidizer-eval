fn bat::app::env_no_color() -> long long {
    let v0: struct24;  // [bp-0x20]
    let v1: u64;  // [bp-0x20]
    let v3: u32;  // ebx

    v0 = std::env::var_os("NO_COLOR");
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        return v3 & -0x100 | *((&v0.field_8 as &char + 8) as &i64);
    }
    return 0;
}
