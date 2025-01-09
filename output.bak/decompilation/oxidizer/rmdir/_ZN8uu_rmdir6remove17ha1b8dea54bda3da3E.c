fn uu_rmdir::remove(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x48]
    let v2: i64;  // rax
    let v4: i64;  // r15
    let v5: i64;  // rdx
    let v6: i64;  // r15

    v0 = uu_rmdir::remove_single(a1, a2, a3);
    return v0;
    return struct8 {
        field_0: 0
    };
    v2 = std::path::Path::parent(a1, a2);
    return struct8 {
        field_0: 0
    };
    return struct8 {
        field_0: 0
    };
    loop {
        v4 = v6;
        v0 = uu_rmdir::remove_single(v2, v4, a3);
        return v0;
        v2 = std::path::Path::parent(v2, v4);
        return struct8 {
            field_0: 0
        };
        v6 = v5;
    }
}
