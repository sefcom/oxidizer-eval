fn uu_env::split_iterator::split(a0: &struct44, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [bp-0xb8]
    let v1: i128;  // [bp-0xb4]
    let v2: i128;  // [bp-0xac]
    let v3: i64;  // [sp-0xa4]
    let v4: i8;  // [bp-0x90]
    let v5: i8;  // [bp-0x8c]
    let v6: i8;  // [bp-0x88]
    let v7: i128;  // [bp-0x80]
    let v8: i8;  // [bp-0x78]
    let v9: i8;  // [bp-0x70]
    let v10: struct24;  // [sp-0x68], Other Possible Types: i192
    let v14: i128;  // xmm0
    let v15: i64;  // rcx

    v10 = uu_env::split_iterator::SplitIterator::new(a1, a2);
    uu_env::split_iterator::SplitIterator::split(&v4, &v10);
    if v4 == 8 {
        v3 = v8;
        v1 = v6;
        return struct28 {
            field_0: v12
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    }
    v14 = v5;
    v2 = v7;
    v0 = v14;
    v15 = v9;
    *((a0 + 16) as &i128) = *((&v0 as &char + 12) as &i128);
    *((a0 + 4) as &i128) = v0;
    *((a0 + 32) as &i64) = v15;
}
