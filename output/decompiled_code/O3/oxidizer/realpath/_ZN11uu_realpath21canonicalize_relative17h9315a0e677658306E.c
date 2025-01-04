fn uu_realpath::canonicalize_relative(a0: &Result<struct24, struct16>, a1: u32, a2: u32, a3: u8) -> u64 {
    let v0: i64;  // [sp-0x68]
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i8;  // [bp-0x50], Other Possible Types: struct9
    let v4: i8;  // [bp-0x48]
    let v5: i8;  // [bp-0x40]
    let v6: i64;  // [sp-0x38]
    let v7: i8;  // [sp-0x30]
    let v9: i64;  // rax
    let v11: i64;  // rax
    let v14: i64;  // rax

    uucore::features::fs::canonicalize();
    v9 = v3;
    if v0 == 0x8000000000000000 {
        v11 = v9;
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v1
        };
    }
    v0 = v9;
    v1 = v4;
    v2 = v5;
    if a3 == 1 && !std::path::Path::is_dir(v1, v2) as i8 {
        v3 = std::fs::read_dir(v1, v2);
        if v7 == 2 {
            *((a0 + 8) as &i64) = v6;
            *(a0 as &i64) = 0x8000000000000000;
            v11 = v14;
            return v11;
        }
        v6 = v3;
        v7 = *((&v3 as &char + 8) as &i8);
    }
    v11 = v1;
    return struct24 {
        field_0: v0
        field_8: v11
        field_16: v2
    };
}
