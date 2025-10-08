fn uu_cp::context_for(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u64;  // [bp-0x70]
    let v1: u64;  // [bp-0x68]
    let v2: u64;  // [bp-0x60]
    let v3: u8;  // [bp-0x58]
    let v4: struct16;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v6: u64;  // [bp-0x40]
    let v7: u8;  // [bp-0x38]

    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v4 = 1;
    v5 = a3;
    v6 = a4;
    v7 = 1;
    return format!("{} -> {}", &v0, &v4);
}
