fn uu_ln::relative_path(a0: u64, a1: u32, a2: u32, a3: &u8, a4: u64) -> void {
    let v0: Result<struct24, struct16>;  // [bp-0x60]
    let v1: Result<struct24, struct16>;  // [bp-0x48]
    let v3: u64;  // rax

    v0 = uucore::features::fs::canonicalize(a1, a2);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        v3 = std::path::Path::parent(a3, a4);
        core::option::unwrap(v3);
        v1 = uucore::features::fs::canonicalize(v3, a2);
        if let Ok(_) = v1 {
            uucore::features::fs::make_path_relative_to(a0, &v0, &v1);
            return;
        }
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: a1
        field_16: a2
    };
}
