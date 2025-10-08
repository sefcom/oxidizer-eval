fn uu_nl::nl(a0: u64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0x169]
    let v1: struct24;  // [bp-0x168]
    let v2: u64;  // [bp-0x160]
    let v3: u64;  // [bp-0x130]
    let v4: u64;  // [bp-0x128]
    let v5: u64;  // [bp-0x120]
    let v6: u64;  // [bp-0x118]
    let v7: u64;  // [bp-0x110]
    let v8: u64;  // [bp-0xb8]
    let v9: u64;  // [bp-0xb0]
    let v10: u64;  // [bp-0xa8]
    let v11: u64;  // [bp-0xa0]
    let v12: u64;  // [bp-0x98]
    let v13: u64;  // [bp-0x90]
    let v14: u64;  // [bp-0x88]
    let v15: u64;  // [bp-0x80]
    let v16: u64;  // [bp-0x78]
    let v17: i64;  // [bp-0x70]
    let v18: u64;  // [bp-0x68]
    let v19: u64;  // [bp-0x60]
    let v20: u64;  // [bp-0x58]
    let v21: u64;  // [bp-0x50]
    let v22: struct24;  // [bp-0x48]
    let v23: u64;  // [bp-0x20]
    let v25: u64;  // r13
    let v26: i64;  // rbp

    v23 = v25;
    v21 = a0;
    v22 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(a0);
    if v22.field_0 as i64 == 9223372036854775809 {
        return 0;
    }
    v3 = *(a1 as &i64);
    v19 = *((a2 + 56) as &i64);
    v18 = *((a2 + 64) as &i64);
    v14 = a2 + 32;
    v0 = *((a2 + 128) as &i8);
    v16 = *((a2 + 96) as &i64);
    v8 = *((a2 + 112) as &i64);
    v12 = *((a2 + 120) as &i64);
    v13 = *((a2 + 120) as &i64) + 1;
    v11 = a2 + 129;
    v10 = a2 + 72;
    v17 = a2;
    v9 = *((a2 + 104) as &i64);
    v4 = *((a1 + 8) as &i64);
    v20 = 0x8000000000000000;
    v15 = a2 + 16;
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v22);
    if v1.field_0 as i64 == 0x8000000000000000 {
        return v2;
    }
    v5 = v1.field_0;
    v6 = v2;
    v7 = v1.field_16;
    v26 = *((a1 + 16) as &i64) + 1;
    *((a1 + 16) as &unsigned long) = v26;
    goto ((&g_44ee90.field_0)[uu_nl::SectionDelimiter::parse(v6, v7, v19, v18)] + &g_44ee90.field_0) as i64;
}
