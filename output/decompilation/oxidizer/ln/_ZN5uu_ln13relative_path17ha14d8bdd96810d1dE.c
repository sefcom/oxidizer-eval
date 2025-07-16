fn uu_ln::relative_path(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xd8]
    let v1: u64;  // [bp-0xc8]
    let v2: u192;  // [bp-0xc0]
    let v3: u128;  // [bp-0xa8]
    let v4: u192;  // [bp-0xa8]
    let v5: u64;  // [bp-0x98]
    let v6: u192;  // [bp-0x88]
    let v7: u192;  // [bp-0x68]
    let v8: struct24;  // [bp-0x48]
    let v10: core::option::Option<&std::path::Path>;  // rax
    let v11: u64;  // rax

    uucore::features::fs::canonicalize(&v0, a1, a2, 2, 1);
    if *(&v0 as &i64) == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: a1
            field_16: a2
        };
    }
    v5 = v1;
    v3 = v0;
    v10 = std::path::Path::parent(a3, a4) as u64;
    match v10 {
        None => {
            core::option::unwrap_failed(); /* do not return */
        },
        Some(_) => {
            uucore::features::fs::canonicalize(&v2, v10, a2, 2, 1);
            if *(&v2 as &i64) != 0x8000000000000000 {
                v6 = v2;
                v7 = v4;
                v8 = uucore::features::fs::make_path_relative_to(&v7, &v6);
                v11 = v8.field_16;
                return struct24 {
                    field_0: v8.field_0
                    field_16: v11
                };
                return;
            }
        },
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: a1
        field_16: a2
    };
}
