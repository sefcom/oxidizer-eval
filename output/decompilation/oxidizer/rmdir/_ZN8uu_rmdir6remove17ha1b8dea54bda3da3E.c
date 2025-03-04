fn uu_rmdir::remove(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x48]
    let v2: i64;  // rax
    let v3: i64;  // rdx
    let v4: i64;  // r15
    let v5: i64;  // r14
    let v6: i64;  // rax

    v0 = uu_rmdir::remove_single(a1, a2, a3);
    if v0.field_0 {
        return v0;
    }
    if !(a3 as u16 & 0x100) {
        return struct8 {
            field_0: 0
        };
    }
    v2 = std::path::Path::parent(a1, a2);
    if v2 {
        v4 = v3;
        if v3 {
            v5 = v2;
            do {
                v0 = uu_rmdir::remove_single(v5, v4, a3 as u64);
                if v0.field_0 {
                    return v0;
                }
            } while ((v6 = std::path::Path::parent(v5, v4), v6 && (v5 = v6, v4 = v3, v3)));
        }
    }
}
