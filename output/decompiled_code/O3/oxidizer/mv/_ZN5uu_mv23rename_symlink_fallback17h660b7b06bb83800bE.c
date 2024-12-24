fn uu_mv::rename_symlink_fallback(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct24, struct16>;  // [sp-0x50], Other Possible Types: i192
    let v1: struct24;  // [sp-0x38]
    let v3: i64;  // rax
    let v5: i64;  // rdx

    v0 = std::fs::read_link(a0, a1);
    v3 = *((&v0 as &char + 8) as &i64);
    match v0 {
        Err(_) => {
            return v3;
        },
        Ok(_) => {
            v1 = struct24 {
                field_0: v4
                field_8: v3
                field_16: *((&v0 as &char + 16) as &i64)
            };
            v3 = std::os::unix::fs::symlink(&v1, a2, a3);
            if !v3 {
                return std::fs::remove_file(a0, a1, v5);
            }
            return v3;
        },
    }
}
