fn uu_ln::relative_path(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct16;  // [sp-0xd8]
    let v1: i8;  // [bp-0xc8]
    let v2: struct16;  // [sp-0xc0]
    let v3: struct16;  // [sp-0xa8]
    let v4: i64;  // [sp-0x98]
    let v5: iNone;  // [sp-0x88]
    let v6: iNone;  // [sp-0x68]
    let v7: struct24;  // [sp-0x48]
    let v9: i64;  // rax

    v0 = uucore::features::fs::canonicalize(a1, a2, 2, 1);
    if v0.field_0 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: a1
            field_16: a2
        };
    }
    v4 = *(&v1 as &i64);
    v3 = v0;
    v9 = std::path::Path::parent(a3, a4);
    if !v9 {
        core::option::unwrap_failed("src/uu/ln/src/ln.rs"); /* do not return */
    }
    v2 = uucore::features::fs::canonicalize(v9, a2, 2, 1);
    if v2.field_0 != 0x8000000000000000 {
        v5 = *(&v2 as &i192);
        v6 = *(&v3 as &i192);
        v7 = uucore::features::fs::make_path_relative_to(&v6, &v5);
        *((a0 + 16) as &u64) = v7.field_16;
        *(a0 as &u128) = v7.field_0;
    }
}
