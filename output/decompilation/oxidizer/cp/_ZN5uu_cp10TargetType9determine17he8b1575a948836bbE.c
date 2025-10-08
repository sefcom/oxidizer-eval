fn uu_cp::TargetType::determine(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    if a0 > 1 {
        return 0;
    }
    v0 = v2;
    return std::path::Path::is_dir(a1, a2) & -0x100 | 1;
}
