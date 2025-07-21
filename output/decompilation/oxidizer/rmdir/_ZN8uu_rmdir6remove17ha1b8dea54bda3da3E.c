fn uu_rmdir::remove(a1: i64, a2: i64, a3: i32) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x48], Other Possible Types: u192
    let v3: core::option::Option<&std::path::Path>;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // r15
    let v6: u64;  // r15
    let v7: i64;  // rdi
    let v8: i64;  // rdi

    v0 = uu_rmdir::remove_single(a0, a1, a2);
    if !v0.field_0 {
        if !(a2 & 0x100) || !((v3 = std::path::Path::parent(a0, a1) as u64, v3 && v4)) {
LABEL_4aa3d2:
            *(v8 as &i64) = 0;
            return;
        }
        loop {
            v6 = v5;
            v0 = uu_rmdir::remove_single(v3, v6, a2);
            if v0.field_0 {
                break;
            }
            v3 = std::path::Path::parent(v3, v6) as u64;
            if v3 && (v4 = v4, v5) || !((v4 = v4, v5)) {
                goto LABEL_4aa3d2;
            }
        }
    }
    *((v7 + 16) as &i64) = *((&v0 as &char + 16) as &i64);
    *(v7 as &i128) = v0;
    return;
}
