fn uu_cp::localize_to_target(a0: &struct8, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [bp+0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // rax

    v0 = v2;
    v3 = std::path::Path::strip_prefix(a3, a4, a1, a2);
    if !v3 {
        v5 = 7;
    } else {
        std::path::Path::join(a0 + 1, a5, v1, v3, v4);
        v5 = 13;
    }
    return struct8 {
        field_0: v5
    };
}
