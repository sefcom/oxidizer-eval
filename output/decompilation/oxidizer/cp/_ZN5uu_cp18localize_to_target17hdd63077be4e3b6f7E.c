fn uu_cp::localize_to_target(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rax

    v0 = v1;
    v2 = std::path::Path::strip_prefix(a3, a4, a1, a2);
    if v2 {
        std::path::Path::join(a0 + 8, a5, a6, v2, v3);
    }
    return struct8 {
        field_0: v4
    };
}
