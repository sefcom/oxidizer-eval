fn uu_rmdir::remove(a1: i64, a2: i64, a3: i32) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x48]
    let v1: struct24;  // [bp-0x48]
    let v3: &u8;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // r15
    let v6: u64;  // r15

    v0 = uu_rmdir::remove_single(a1, a2, a3);
    if v0.field_0 {
        return Some(struct24 {
            field_0: *(&v1.field_0 as &i128)
            field_16: v1.field_16
        });
    }
    if !(a3 & 0x100) {
        return struct8 {
            field_0: 0
        };
    }
    v3 = std::path::Path::parent(a1, a2);
    if !!v4 && !!v3 {
        loop {
            v6 = v5;
            v1 = uu_rmdir::remove_single(v3, v6, a3);
            if v1.field_0 {
                return Some(struct24 {
                    field_0: *(&v1.field_0 as &i128)
                    field_16: v1.field_16
                });
            }
            v3 = std::path::Path::parent(v3, v6);
            if !v3 {
                break;
            }
            v4 = v4;
            if !v5 {
                break;
            }
        }
    }
    return struct8 {
        field_0: 0
    };
}
