fn turborepo_lsp::Backend::new(a0: i64, a1: u64) -> long long {
    let v0: u64;  // [bp-0x1d8]
    let v1: u64;  // [bp-0x1d0]
    let v2: struct24;  // [bp-0x1c8], Other Possible Types: u64
    let v3: u64;  // [bp-0x1c8]
    let v4: u64;  // [bp-0x1c0]
    let v5: u64;  // [bp-0x1b8]
    let v6: u64;  // [bp-0x1b0]
    let v7: u64;  // [bp-0x1a8]
    let v8: u64;  // [bp-0x1a0]
    let v9: u64;  // [bp-0x198]
    let v10: u128;  // [bp-0x195]
    let v11: u64;  // [bp-0x190]
    let v12: u32;  // [bp-0x188]
    let v13: u128;  // [bp-0x185]
    let v14: u8;  // [bp-0x184]
    let v15: u64;  // [bp-0x180]
    let v17: u64;  // rax
    let v18: iNone;  // xmm1
    let v19: u64;  // rdx

    v0 = a1;
    v9 = 2;
    v2 = tokio::sync::watch::channel(&v9);
    v1 = v2.field_0;
    v7 = v4;
    v8 = v5;
    v6 = a1;
    v9 = 1;
    v11 = 1;
    v12 = 0;
    v14 = 0;
    v15 = 0x8000000000000000;
    v2 = alloc::boxed::Box<T>::new(&v9) as u64;
    v17 = std::thread::local::LocalKey<T>::with();
    v13 = g_d269a8.field_0;
    v10 = g_d26998.field_0;
    v18 = *((&v10 as &char + 13) as &i128);
    return struct120 {
        field_0: a1
        field_8: v2
        field_16: v3
        field_24: v4
        field_32: v5
        field_40: 0
        field_44: 0
        field_45: <UNKNOWN>
        field_61: <UNKNOWN>
        field_76: v17
        field_80: v19
        field_88: 0
        field_96: 0x8000000000000000
        field_100: <UNKNOWN>
        field_104: <UNKNOWN>
    };
}
