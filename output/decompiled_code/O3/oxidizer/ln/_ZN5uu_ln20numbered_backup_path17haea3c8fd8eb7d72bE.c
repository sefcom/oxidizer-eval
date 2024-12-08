fn uu_ln::numbered_backup_path(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i64;  // [sp-0x138]
    let v1: struct24;  // [sp-0x128], Other Possible Types: i192
    let v2: i192;  // [sp-0x100]
    let v3: i64;  // [bp-0xe8], Other Possible Types: Result<struct176, struct16>
    let v4: i64;  // [sp-0xe0]
    let v5: i64;  // [sp-0xd8]
    let v8: i256;  // ymm0
    let v9: i256;  // ymm0
    let v10: i128;  // xmm0
    let v12: i128;  // xmm0

    v0 = 1;
    loop {
        v8 = v9;
        v2 = format!(".~{:?}~", &v0);
        v10 = v2;
        v3 = v10;
        v5 = *((&v2 as &char + 16) as &i64);
        v1 = uu_ln::simple_backup_path(a1, a2, v4, *((&v2 as &char + 16) as &i64));
        v3 = std::fs::metadata(*((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
        if v3 == 2 {
            break;
        }
        v0 += 1;
        v9 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10;
    }
    v12 = v1;
    return struct24 {
        field_0: v12
        field_16: *((&v1 as &char + 16) as &i64)
    };
}
