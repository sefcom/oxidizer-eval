fn uu_cp::verify_target_type(a1: i64, a2: i64, a3: i64) -> : struct8 {
    let a0: u64;  // rsi
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x80]
    let v6: u64;  // [bp-0x50], Other Possible Types: struct24
    let v7: u64;  // [bp-0x48]
    let v8: i64;  // [bp-0x40]
    let v9: u64;  // [bp-0x38]
    let v10: void*;  // [bp-0x30]
    let v12: u8;  // al
    let v13: u64;  // rcx
    let v14: u64;  // rax
    let v15: i64;  // rdi

    v12 = std::path::Path::is_dir(a0, a1);
    if *(a2 as &i8) {
        v13 = 13;
        if !(!v12) {
            goto LABEL_5088ac;
        }
    } else {
        v13 = 13;
        if !v12 {
LABEL_5088ac:
            v6 = v14;
            v7 = 2;
            v10 = 0;
            v8 = &v0;
            v9 = 1;
            v6 = core::option::Option<T>::map_or_else(a1);
        }
    }
    *(v15 as &u64) = v13;
    return;
}
