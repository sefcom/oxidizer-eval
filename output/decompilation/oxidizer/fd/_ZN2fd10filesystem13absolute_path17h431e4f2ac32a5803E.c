fn fd::filesystem::absolute_path(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]

    v0 = fd::filesystem::path_absolute_form(a1, a2);
    return struct24 {
        field_0: v0.field_0 as i64
        field_8: v1
        field_16: v0.field_16
    };
}
