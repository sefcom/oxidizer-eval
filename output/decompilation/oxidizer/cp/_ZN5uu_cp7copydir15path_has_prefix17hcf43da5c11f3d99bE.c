fn uu_cp::copydir::path_has_prefix(a0: &Result<struct1, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct16;  // [sp-0x78]
    let v1: i8;  // [bp-0x68]
    let v2: u64;  // [sp-0x60]
    let v3: u64;  // [sp-0x58]
    let v4: u64;  // [sp-0x50]
    let v5: u64;  // [sp-0x48]
    let v6: u64;  // [sp-0x40]
    let v7: u64;  // [sp-0x38]
    let v9: u64;  // rax
    let v11: u64;  // rax
    let v15: u64;  // rax

    v0 = uucore::features::fs::canonicalize(a1, a2, 0, 2);
    v9 = v0.field_0;
    if v2 == 0x8000000000000000 {
        a0->field_8 = v3;
        a0->field_0 = 1;
        v11 = v9;
        return v11;
    }
    v2 = v9;
    v3 = v0.field_8;
    v4 = *(&v1 as &i64);
    v0 = uucore::features::fs::canonicalize(a3, a4, 0, 2);
    if v5 == 0x8000000000000000 {
        a0->field_8 = v6;
        a0->field_0 = 1;
        v11 = v15;
        return v11;
    }
    v5 = v0.field_0;
    v6 = v0.field_8;
    v7 = *(&v1 as &i64);
    a0->field_1 = std::path::Path::starts_with(v3, v4, &v5) as i8;
    a0->field_0 = 0;
    return v11;
}
