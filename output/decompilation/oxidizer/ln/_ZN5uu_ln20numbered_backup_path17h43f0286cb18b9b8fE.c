fn uu_ln::numbered_backup_path(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: i64;  // [sp-0x138]
    let v1: struct24;  // [sp-0x128]
    let v2: String;  // [sp-0x100]
    let v3: iNone;  // [bp-0xe8], Other Possible Types: unsigned long, Result<struct176, struct8>
    let v4: i64;  // [sp-0xe0]
    let v5: i64;  // [sp-0xd8]
    let v9: iNone;  // ymm0
    let v10: iNone;  // xmm0
    let v11: iNone;  // ymm0
    let v12: iNone;  // xmm0

    v0 = 1;
    loop {
        v2 = format!(".~{}~", &v0);
        v10 = *(&v2.ptr as &i128);
        v11 = v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10 as u256;
        v3 = v10;
        v5 = v2.len;
        v1 = uu_ln::simple_backup_path(a1, a2, v4, v2.len);
        v3 = std::fs::metadata(*((&v1.field_0 as &char + 8) as &i64), v1.field_16);
        if v3 == 2 {
            break;
        }
        v9 = v11;
    }
    v12 = v1.field_0;
    return struct24 {
        field_0: v12
        field_16: v1.field_16
    };
}
