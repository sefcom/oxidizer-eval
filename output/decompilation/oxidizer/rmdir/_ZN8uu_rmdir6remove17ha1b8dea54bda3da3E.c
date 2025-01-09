fn uu_rmdir::remove(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x48], Other Possible Types: struct24
    let v2: i64;  // rax
    let v3: i64;  // rdx
    let v5: i64;  // r15
    let v6: i64;  // r15

    v0 = uu_rmdir::remove_single(a1, a2, a3);
    if v0 {
        return v0;
    }
    if !(a3 & 0x100) {
        return struct8 {
            field_0: 0
        };
    }
    v2 = std::path::Path::parent(a1, a2);
    if v2 && v3 {
        do {
            v5 = v6;
            v0 = uu_rmdir::remove_single(v2, v5, a3);
            if v0 {
                return v0;
            }
        } while ((v2 = std::path::Path::parent(v2, v5), v2 && (v6 = v3, v3)));
    }
}
