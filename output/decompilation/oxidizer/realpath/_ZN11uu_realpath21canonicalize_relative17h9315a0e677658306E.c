fn uu_realpath::canonicalize_relative(a1: i64, a2: i64, a3: i32, a4: i64) -> Result<struct24, struct16> {
    let a0: u32;  // rsi
    let v0: u64;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u8;  // [bp-0x50], Other Possible Types: struct9
    let v4: u64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v9: i64;  // rdi
    let v10: i64;  // rdi
    let v11: i64;  // rdi

    uucore::features::fs::canonicalize(&v3, a0, a1, a2, a3);
    if v3 == 0x8000000000000000 {
        *((v9 + 8) as &u64) = v1;
        *(v9 as &i64) = 0x8000000000000000;
        return;
    }
    v0 = v3;
    v1 = v4;
    v2 = v5;
    if a2 == 1 && !std::path::Path::is_dir(v1, v2) {
        v3 = std::fs::read_dir(v1, v2);
        if v3.field_8 == 2 {
            *((v10 + 8) as &u64) = v3.field_0;
            *(v10 as &i64) = 0x8000000000000000;
            return;
        }
    }
    *((v11 + 16) as &u64) = v2;
    *(v11 as &u64) = v0;
    *((v11 + 8) as &u64) = v1;
    return;
}
