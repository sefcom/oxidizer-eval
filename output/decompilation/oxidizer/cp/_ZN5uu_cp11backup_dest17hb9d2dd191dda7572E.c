fn uu_cp::backup_dest(a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> Option<struct8> {
    let a0: u64;  // rdi
    let v1: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rax

    if a5 {
        v1 = std::fs::rename(a1, a2, a3, a4);
        if v1 {
            return Some(v1);
        }
    } else if std::fs::copy(a1, a2, a3, a4) {
        return Some(v3);
    }
    v4 = std::sys::os_str::bytes::Slice::to_owned(a0 + 8, a3, a4);
    return struct8 {
        field_0: 13
    };
}
