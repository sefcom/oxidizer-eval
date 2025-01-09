fn uu_ln::relative_path(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct16;  // [sp-0xd8], Other Possible Types: i128
    let v1: i8;  // [bp-0xc8]
    let v2: i128;  // [sp-0xc0], Other Possible Types: struct16
    let v3: struct16;  // [sp-0xa8], Other Possible Types: i128
    let v4: i64;  // [sp-0x98]
    let v5: i192;  // [sp-0x88]
    let v6: i192;  // [sp-0x68]
    let v7: i192;  // [sp-0x48], Other Possible Types: struct24
    let v9: i64;  // rax
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v13: i64;  // rax

    v0 = uucore::features::fs::canonicalize(a1, a2, 2, 1);
    if v0 == 0x8000000000000000 {
        goto LABEL_0x4ba2f3;
    }
    v4 = v1;
    v3 = v0;
    v9 = std::path::Path::parent(a3, a4);
    if !v9 {
        core::option::unwrap_failed("src/uu/ln/src/ln.rs"); /* do not return */
    }
    v2 = uucore::features::fs::canonicalize(v9, v10, 2, 1);
    if v2 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: a1
            field_16: a2
        };
    }
    v5 = v2;
    v6 = v3;
    v7 = uucore::features::fs::make_path_relative_to(&v6, &v5);
    v11 = *((&v7 as &char + 16) as &i64);
    *((a0 + 16) as &i64) = v11;
    *(a0 as &i192) = v7;
    v12 = v11;
    v12 = v13;
}
