fn uu_env::split_iterator::split(a1: i64, a2: i64) -> : struct44 {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0xb8]
    let v1: u128;  // [bp-0xb4]
    let v2: u128;  // [bp-0xac]
    let v3: u64;  // [bp-0xa4]
    let v4: u32;  // [bp-0x90]
    let v5: i8;  // [bp-0x8c]
    let v6: i8;  // [bp-0x88]
    let v7: u128;  // [bp-0x80]
    let v8: u64;  // [bp-0x78]
    let v9: struct40;  // [bp-0x70]
    let v10: Result<struct40, struct28>;  // [bp-0x68]
    let v12: u128;  // xmm0
    let v13: i64;  // rdi
    let v14: u128;  // xmm0

    uu_env::split_iterator::SplitIterator::new(a0, a1, a2);
    v10 = uu_env::split_iterator::SplitIterator::split(a1);
    if v4 == 8 {
        v3 = v8;
        v12 = *(&v6 as &i128);
        v1 = v12;
        *((v13 + 24) as &u64) = v8;
        *((v13 + 8) as &u128) = v12;
    } else {
        v14 = *(&v5 as &i128);
        v2 = v7;
        v0 = v14;
        *((v13 + 16) as &i128) = *((&v0 as &char + 12) as &i128);
        *((v13 + 4) as &u128) = v0;
        *((v13 + 32) as &struct40) = v9;
    }
    *(v13 as &u32) = v4;
    return;
}
