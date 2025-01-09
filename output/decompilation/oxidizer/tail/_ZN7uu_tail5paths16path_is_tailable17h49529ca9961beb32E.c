fn uu_tail::paths::path_is_tailable(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0xc8], Other Possible Types: struct16
    let v2: u64;  // rax
    let v3: u64;  // rax

    v2 = std::path::Path::is_file(a0, a1);
    v3 = v2 & -0x100 | 1;
    if v2 {
        return v3;
    }
    v0 = std::fs::metadata(a0, a1);
    if v0 == 2 {
        return 0;
    }
    v0 = std::fs::metadata(a0, a1);
    v3 = core::result::Result<T,E>::map_or(&v0);
    return v3;
}
