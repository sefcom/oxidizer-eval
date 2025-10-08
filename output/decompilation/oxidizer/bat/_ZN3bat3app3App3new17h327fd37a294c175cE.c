fn bat::app::App::new(a0: i64) -> long long {
    let v0: u128;  // [bp-0xa8]
    let v1: u128;  // [bp-0xa1]
    let v2: u128;  // [bp-0x98]
    let v3: u128;  // [bp-0x91]
    let v4: u128;  // [bp-0x88]
    let v5: u128;  // [bp-0x81]
    let v6: u128;  // [bp-0x79]
    let v7: u64;  // [bp-0x71]
    let v8: Option<struct80>;  // [bp-0x60]
    let v9: u64;  // [bp-0x28]
    let v11: u32;  // eax
    let v12: u64;  // rax
    let v13: iNone;  // xmm0
    let v14: u128;  // xmm1
    let v15: iNone;  // xmm2
    let v16: iNone;  // xmm0
    let v17: iNone;  // xmm1
    let v18: iNone;  // xmm2
    let v19: iNone;  // xmm0
    let v20: iNone;  // xmm1

    std::io::stdio::stdout();
    v11 = std::sys::io::is_terminal::isatty::is_terminal();
    v8 = bat::app::App::matches(v11);
    v12 = v8 as i8;
    if v12 != 13 {
        v16 = *((&v8 as &char + 1) as &i128);
        v17 = *((&v8 as &char + 17) as &i128);
        v18 = *((&v8 as &char + 33) as &i128);
        v6 = *((&v8 as &char + 48) as &i128);
        *(&v4 as void*) = v18;
        *(&v2 as void*) = v17;
        *(&v0 as void*) = v16;
        v19 = v0;
        v20 = v2;
        return struct88 {
            field_0: v12 as u8
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_33: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
    }
    v7 = v9;
    v13 = *((&v8 as &char + 8) as &i128);
    v14 = *((&v8 as &char + 24) as &i128);
    v15 = *((&v8 as &char + 40) as &i128);
    *(&v5 as void*) = v15;
    v3 = v14;
    *(&v1 as void*) = v13;
    *((a0 + 56) as &u64) = v9;
    *((a0 + 40) as void*) = v15;
    *((a0 + 24) as &u128) = v14;
    *((a0 + 8) as void*) = v13;
    *((a0 + 64) as &u8) = v11;
}
