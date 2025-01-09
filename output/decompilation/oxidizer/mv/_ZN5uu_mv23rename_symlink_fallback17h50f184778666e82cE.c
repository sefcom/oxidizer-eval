fn uu_mv::rename_symlink_fallback(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u128;  // [sp-0x50], Other Possible Types: struct16
    let v2: struct24;  // [sp-0x38], Other Possible Types: u64
    let v5: u64;  // rax
    let v6: u64;  // rcx

    v0 = std::fs::read_link(a0, a1);
    v5 = *((&v0 as &char + 8) as &i64);
    if v2 == 0x8000000000000000 {
        return v5;
    }
    v2 = struct24 {
        field_0: v4
        field_8: v5
        field_16: v1
    };
    v5 = std::os::unix::fs::symlink(&v2, a2, v6);
    if !v5 {
        return std::fs::remove_file(a0, a1);
    }
    return v5;
}
