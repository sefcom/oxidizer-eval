fn uu_cp::TargetType::determine(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    if a0 <= 1 {
        v0 = v2;
        v3 = std::path::Path::is_dir(a1, a2);
        if !v3 {
            return v3 | -0x100 | 1;
        }
    }
    return 0;
}
