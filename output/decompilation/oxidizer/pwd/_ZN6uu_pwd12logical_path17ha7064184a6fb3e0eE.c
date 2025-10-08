fn uu_pwd::logical_path() -> : struct24 {
    let a0: u32;  // rdi
    let v0: struct24;  // [bp-0x38]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v4: u64;  // r12

    v0 = std::env::var_os();
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        v4 = *((&v0.field_8 as &char + 8) as &i64);
        if uu_pwd::logical_path::looks_reasonable(v2, v4) {
            return struct24 {
                field_0: v0.field_0
                field_8: v2
                field_16: v4
            };
        }
    }
    std::env::current_dir(a0);
    return;
}
