fn uu_cp::show_debug(a0: i64) -> long long {
    let v0: struct16;  // [bp-0x90]
    let v1: struct16;  // [bp-0x80]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v5: i64;  // rax
    let v6: i64;  // rax
    let v7: u64;  // rax

    v5 = *(a0 as &i8) * 8;
    v0 = struct16 {
        field_0: *(&(&g_55ef28)[v5] as &i64)
        field_8: *(&(&g_424f28)[v5] as &i64)
    };
    v6 = *((a0 + 1) as &i8) * 8;
    v1 = struct16 {
        field_0: *(&(&g_55ef28)[v6] as &i64)
        field_8: *(&(&g_424f28)[v6] as &i64)
    };
    v7 = *((a0 + 2) as &i8);
    v2 = (&g_424ee0.field_0)[v7] + &g_424ee0.field_0;
    v3 = (&g_424ef8.field_0)[v7];
    return println!("copy offload: {}, reflink: {}, sparse detection: {}", &v0, &v1, &v2);
}
