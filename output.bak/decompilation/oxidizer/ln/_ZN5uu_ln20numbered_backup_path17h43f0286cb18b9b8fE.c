fn uu_ln::numbered_backup_path(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: i64;  // [sp-0x138]
    let v1: struct24;  // [sp-0x128], Other Possible Types: i192
    let v2: i64;  // [sp-0x110]
    let v3: i64;  // [sp-0x108]
    let v4: i8;  // [bp-0x100]
    let v5: i8;  // [bp-0xf0]
    let v6: i128;  // [sp-0xe8], Other Possible Types: struct16
    let v7: i64;  // [sp-0xe0]
    let v8: i64;  // [sp-0xd8]
    let v9: i64;  // [sp-0xd0]
    let v10: i64;  // [sp-0xc8]
    let v14: i256;  // ymm0
    let v15: i128;  // xmm0
    let v16: i256;  // ymm0

    v0 = 1;
    loop {
        v2 = &v0;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v6 = ".~";
        v7 = 2;
        v10 = 0;
        v8 = &v2;
        v9 = 1;
        core::option::Option<T>::map_or_else();
        v15 = v4;
        v16 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
        v6 = v15;
        v8 = v5;
        v1 = uu_ln::simple_backup_path(a1, a2, v7, v5);
        v6 = std::fs::metadata(*((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
        return struct24 {
            field_0: v12 as u128
            field_16: *((&v1 as &char + 16) as &i64)
        };
        v0 += 1;
        v14 = v16;
    }
}
