fn bat::run_controller(a0: u64, a1: i64, a2: i64, a3: u64, a4: u64) -> int {
    let v0: i64;  // [bp-0x188], Other Possible Types: u128
    let v1: i64;  // [bp-0x180]
    let v2: iNone;  // [bp-0x178]
    let v3: iNone;  // [bp-0x168]
    let v4: &std::path::Path;  // [bp-0x158]
    let v5: iNone;  // [bp-0x148]
    let v6: struct24;  // [bp-0x138], Other Possible Types: u8
    let v7: i8;  // [bp-0x130]
    let v8: iNone;  // [bp-0x120]
    let v9: iNone;  // [bp-0x110]
    let v10: &std::path::Path;  // [bp-0x100]
    let v11: iNone;  // [bp-0xf0]
    let v12: iNone;  // [bp-0xe0]
    let v13: iNone;  // [bp-0xd0]
    let v14: iNone;  // [bp-0xc0]
    let v15: struct24;  // [bp-0xb0]
    let v16: u64;  // [bp-0xa8]
    let v17: iNone;  // [bp-0xa0]
    let v18: struct24;  // [bp-0x90]
    let v19: struct24;  // [bp-0x80]
    let v20: iNone;  // [bp-0x70]
    let v21: Result<struct40, struct16>;  // [bp-0x60]
    let v22: iNone;  // [bp-0x50]
    let v23: iNone;  // [bp-0x40]
    let v24: iNone;  // [bp-0x30]
    let v25: struct24;  // [bp-0x20]
    let v27: u64;  // rax

    bat::assets::assets_from_cache_or_binary(&v6, *((a2 + 295) as &i8), a3, a4);
    v27 = *(&v6 as &i64);
    v0 = *(&v7 as &i128);
    v2 = v8;
    v3 = v9;
    v4 = v10;
    v5 = v11;
    if v27 == 9223372036854775809 {
        return struct80 {
            field_0: v0
            field_16: v2
            field_32: v3
            field_48: v4
            field_64: v5
        };
    }
    v25 = v15;
    v24 = v14;
    v23 = v13;
    v22 = v12;
    v17 = v0;
    v18 = v2;
    v19 = v3;
    v20 = v4;
    v21 = v5;
    v16 = v27;
    v0 = a2;
    v1 = &v16;
    if *((a2 + 298) as &i8) != 2 && *((a2 + 296) as &i8) {
        bat::get_new_terminal_title(&v6, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
        bat::set_terminal_title_to(&v6);
    }
    v6 = struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
    bat::controller::Controller::run(a0, &v0, &v6, 0);
    return;
}
