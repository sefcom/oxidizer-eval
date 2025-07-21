fn uu_nl::nl(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0x161]
    let v1: u64;  // [bp-0x160]
    let v2: struct24;  // [bp-0x158]
    let v3: u64;  // [bp-0x150]
    let v4: u64;  // [bp-0x128]
    let v5: u64;  // [bp-0x120]
    let v6: u64;  // [bp-0x118]
    let v7: u64;  // [bp-0x110]
    let v8: u64;  // [bp-0xd8]
    let v9: u64;  // [bp-0xd0]
    let v10: u64;  // [bp-0xc8]
    let v11: u64;  // [bp-0xc0]
    let v12: u64;  // [bp-0xb8]
    let v13: u64;  // [bp-0xb0]
    let v14: u64;  // [bp-0xa8]
    let v15: u64;  // [bp-0xa0]
    let v16: u64;  // [bp-0x98]
    let v17: u64;  // [bp-0x90]
    let v18: u64;  // [bp-0x88]
    let v19: u64;  // [bp-0x80]
    let v20: struct24;  // [bp-0x78]
    let v21: struct24;  // [bp-0x78]
    let v22: struct24;  // [bp-0x48]
    let v24: u64;  // rbp

    v7 = a0;
    v21 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v21.field_0 as i64 == 9223372036854775809 {
        return 0;
    }
    v18 = *((a2 + 56) as &i64);
    v17 = *((a2 + 64) as &i64);
    v14 = a2 + 32;
    v0 = *((a2 + 128) as &i8);
    v16 = *((a2 + 96) as &i64);
    v8 = *((a2 + 112) as &i64);
    v12 = *((a2 + 120) as &i64);
    v13 = *((a2 + 120) as &i64) + 1;
    v11 = a2 + 129;
    v10 = a2 + 72;
    v9 = *((a2 + 104) as &i64);
    v1 = *((a1 + 8) as &i64);
    v19 = 0x8000000000000000;
    v15 = a2 + 16;
    v22 = v20;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v22);
    if v2.field_0 as i64 == 0x8000000000000000 {
        return v3;
    }
    v4 = v2.field_0;
    v5 = v3;
    v6 = v2.field_16;
    v24 = *((a1 + 16) as &i64) + 1;
    *((a1 + 16) as &u64) = v24;
    goto ((&g_4618e0.field_0)[uu_nl::SectionDelimiter::parse(v5, v6, v18, v17) as i32] + &g_4618e0.field_0) as i64;
}
