fn uu_ln::relative_path(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i200;  // [sp-0xd8], Other Possible Types: Result<struct24, struct8>
    let v1: Result<struct24, struct8>;  // [sp-0xc0], Other Possible Types: i200
    let v2: i128;  // [sp-0xa8]
    let v3: i64;  // [sp-0x98]
    let v4: i192;  // [sp-0x88]
    let v5: struct24;  // [bp-0x68]
    let v6: i192;  // [sp-0x48], Other Possible Types: struct24
    let v8: i64;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // rax

    v0 = uucore::features::fs::canonicalize(a1, a2, 2, 1);
    if v0 == 0x8000000000000000 {
        goto LABEL_0x4ba2f3;
    }
    v3 = *((&v0 as &char + 16) as &i64);
    v2 = v0;
    v8 = std::path::Path::parent(a3, a4);
    if !v8 {
        core::option::unwrap_failed("src/uu/ln/src/ln.rs"); /* do not return */
    }
    v1 = uucore::features::fs::canonicalize(v8, v9, 2, 1);
    return struct24 {
        field_0: 0x8000000000000000
        field_8: a1
        field_16: a2
    };
    v4 = v1;
    v5 = struct24 {
        field_0: v2
        field_16: v3
    };
    v6 = uucore::features::fs::make_path_relative_to(&v5, &v4);
    v10 = *((&v6 as &char + 16) as &i64);
    *((a0 + 16) as &i64) = v10;
    *(a0 as &i192) = v6;
    v11 = v10;
    v11 = v12;
}
