fn uu_cp::backup_dest(a0: &u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u32) -> u64 {
    let v1: u64;  // rax

    if !a5 {
        v1 = std::fs::copy(a1, a2, a3, a4);
        if v1 {
            return struct16 {
                field_0: 2
                field_8: v2
            };
        }
    } else {
        v1 = std::fs::rename(a1, a2, a3, a4);
        if v1 {
            return struct16 {
                field_0: 2
                field_8: v1
            };
        }
    }
    v1 = std::sys::os_str::bytes::Slice::to_owned(a0 + 1, a3, a4);
    *(a0) = 13;
    return v1;
}
