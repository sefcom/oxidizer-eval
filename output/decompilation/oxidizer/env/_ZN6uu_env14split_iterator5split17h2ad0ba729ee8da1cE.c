fn uu_env::split_iterator::split(a1: i64, a2: i64) -> : struct44 {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0xb8]
    let v1: u128;  // [bp-0xb4]
    let v2: u8;  // [bp-0xac]
    let v3: struct44;  // [bp-0xa4]
    let v4: u32;  // [bp-0x90]
    let v5: i8;  // [bp-0x8c]
    let v6: u128;  // [bp-0x88]
    let v7: struct44;  // [bp-0x78]
    let v8: struct32;  // [bp-0x70]
    let v9: Result<struct40, struct28>;  // [bp-0x68]
    let v11: i64;  // rdi

    uu_env::split_iterator::SplitIterator::new(a0, a1, a2);
    v9 = uu_env::split_iterator::SplitIterator::split(a1);
    if v4 == 8 {
        v3 = v7;
        v1 = v6;
        *((v11 + 24) as &struct44) = v7;
        *((v11 + 8) as &u128) = v6;
    } else {
        memcpy(&v2, &v6, 16);
        v0 = *(&v5 as &i128);
        *((v11 + 16) as &i128) = *(&v2 as &i128);
        *((v11 + 4) as &u128) = v0;
        *((v11 + 32) as &struct32) = v8;
    }
    *(v11 as &u32) = v4;
    return;
}
