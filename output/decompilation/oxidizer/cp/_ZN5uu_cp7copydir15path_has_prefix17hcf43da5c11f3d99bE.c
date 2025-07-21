fn uu_cp::copydir::path_has_prefix(a1: i32, a2: i64, a3: i32, a4: i64) -> Result<struct1, struct8> {
    let a0: i64;  // rdi
    let v0: core::fmt::Arguments;  // [bp-0x78], Other Possible Types: struct24, u8
    let v1: core::fmt::rt::Argument;  // [bp-0x70]
    let v2: struct24;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u64;  // [bp-0x58]
    let v5: struct24;  // [bp-0x50]
    let v6: struct24;  // [bp-0x48]

    uucore::features::fs::canonicalize(&v0, a1, a2, 0, 2);
    if v0 == 0x8000000000000000 {
        return Err(v4);
    }
    v3 = v0;
    v4 = v1;
    v5 = v2;
    uucore::features::fs::canonicalize(&v0, a3, a4, 0, 2);
    if v0 != 0x8000000000000000 {
        v6 = v0;
        return Ok(std::path::Path::starts_with(v4, v5, &v6) as i8);
    }
    return Err(v1);
}
