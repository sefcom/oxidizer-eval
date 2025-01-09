fn uu_cp::backup_dest(a0: &Option<struct8>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v1: u64;  // rax

    if !a5 {
        v1 = std::fs::copy(a1, a2, a3, a4);
        return Some(struct8 {
            field_0: v2
        });
    } else {
        v1 = std::fs::rename(a1, a2, a3, a4);
        return Some(struct8 {
            field_0: v1
        });
    }
    v1 = std::sys::os_str::bytes::Slice::to_owned(a0 + 8, a3, a4);
    return struct8 {
        field_0: 13
    };
}
