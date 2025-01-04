fn uu_cp::copydir::path_has_prefix(a0: &struct_0, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i8;  // [bp-0x78]
    let v1: i8;  // [bp-0x70]
    let v2: i8;  // [bp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: u64;  // [sp-0x58]
    let v5: u64;  // [sp-0x50]
    let v6: u64;  // [sp-0x48]
    let v7: u64;  // [sp-0x40]
    let v8: u64;  // [sp-0x38]
    let v10: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rcx
    let v14: u64;  // rax
    let v15: u64;  // rax

    uucore::features::fs::canonicalize();
    v10 = v0;
    if v3 == 0x8000000000000000 {
        v12 = v10;
        return struct9 {
            field_0: 1
            field_8: <UNKNOWN>
        };
    }
    v3 = v10;
    v4 = v1;
    v5 = v2;
    uucore::features::fs::canonicalize();
    v13 = v0;
    v14 = v1;
    if v6 == 0x8000000000000000 {
        a0->field_8 = v7;
        a0->field_0 = 1;
    } else {
        v6 = v13;
        v7 = v14;
        v8 = v2;
        a0->field_1 = std::path::Path::starts_with(v4, v5, &v6) as i8;
        a0->field_0 = 0;
    }
    v12 = v15;
    return v12;
}
