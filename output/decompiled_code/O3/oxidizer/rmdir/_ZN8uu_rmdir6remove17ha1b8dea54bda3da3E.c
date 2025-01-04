fn uu_rmdir::remove(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x48], Other Possible Types: i192
    let v2: i64;  // rdx
    let v3: i64;  // rcx
    let v4: i64;  // rax
    let v6: i64;  // r15
    let v7: i64;  // r15

    v0 = uu_rmdir::remove_single(a1, a2, a3);
    if !v0 {
        if !((a3 & 0x100)) || !(v4) || !(v2) {
            return struct8 {
                field_0: 0
            };
        }
        loop {
            v6 = v7;
            v0 = uu_rmdir::remove_single(v4, v6, a3);
            if v0 {
                break;
            }
            v4 = std::path::Path::parent(v4, v6, v2, v3);
            if !v4 {
                return struct8 {
                    field_0: 0
                };
            } else if !v2 {
                return struct8 {
                    field_0: 0
                };
            }
        }
    }
    return struct8 {
        field_0: 0
    };
}
