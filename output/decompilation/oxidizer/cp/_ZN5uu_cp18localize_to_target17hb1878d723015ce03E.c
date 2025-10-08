fn uu_cp::localize_to_target(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> u64 {
    let v0: u64;  // r15
    let v1: u64;  // rax
    let v2: u64;  // rdx

    v0 = 9223372036854775814;
    v1 = std::path::Path::strip_prefix(a3, a4, a1, a2);
    if v1 {
        std::path::Path::join(a0 + 8, a5, a6, v1, v2);
    }
    return struct8 {
        field_0: v0
    };
}
