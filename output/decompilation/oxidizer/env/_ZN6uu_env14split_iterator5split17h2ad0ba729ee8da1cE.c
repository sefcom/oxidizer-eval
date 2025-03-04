fn uu_env::split_iterator::split(a0: &struct44, a1: u32, a2: u32) -> u64 {
    let v0: iNone;  // [bp-0xb8]
    let v1: iNone;  // [bp-0xb4]
    let v2: iNone;  // [bp-0xac]
    let v3: i64;  // [sp-0xa4]
    let v4: i8;  // [bp-0x90]
    let v5: i8;  // [bp-0x8c]
    let v6: i8;  // [bp-0x88]
    let v7: iNone;  // [bp-0x80]
    let v8: i8;  // [bp-0x78]
    let v9: i8;  // [bp-0x70]
    let v10: struct24;  // [sp-0x68]
    let v13: iNone;  // xmm0
    let v14: iNone;  // xmm0
    let v15: i64;  // rcx

    v10 = uu_env::split_iterator::SplitIterator::new(a1, a2);
    uu_env::split_iterator::SplitIterator::split(&v4, &v10);
    if *(&v4 as &i32) != 8 {
        v14 = *(&v5 as &i128);
        *(&v2 as &i128) = v7 as i128;
        v0 = v14;
        v15 = *(&v9 as &i64);
        return struct44 {
            field_0: v12
            field_4: v0 as i128
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
        };
    }
    v3 = *(&v8 as &i64);
    v13 = *(&v6 as &i128);
    v1 = v13;
    *((a0 + 24) as &unsigned long) = v3;
    *((a0 + 8) as void*) = v13;
}
