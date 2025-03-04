fn uu_cp::localize_to_target(a0: &struct8, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // rdx

    v0 = v1;
    v2 = std::path::Path::strip_prefix(a3, a4, a1, a2);
    if v2 {
        std::path::Path::join(a0 + 8, a5, a6, v2, v3);
    }
    return struct8 {
        field_0: v4
    };
}
