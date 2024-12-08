fn uu_env::split_iterator::split(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [bp-0xb8]
    let v1: i128;  // [bp-0xb4]
    let v2: i128;  // [bp-0xac]
    let v3: i64;  // [sp-0xa4]
    let v4: Result<struct40, struct28>;  // [sp-0x90], Other Possible Types: i320
    let v5: i192;  // [sp-0x68], Other Possible Types: struct24
    let v7: i64;  // rdx
    let v8: i32;  // eax
    let v9: i128;  // xmm0
    let v10: i128;  // xmm0
    let v11: i64;  // rcx

    v5 = uu_env::split_iterator::SplitIterator::new(a1, a2);
    v4 = uu_env::split_iterator::SplitIterator::split(&v5, v7);
    v8 = v4;
    match v4 {
        Ok(_) => {
            v10 = *((&v4 as &char + 4) as &i128);
            v2 = *((&v4 as &char + 16) as &i128);
            v0 = v10;
            v11 = *((&v4 as &char + 32) as &i64);
            *((a0 + 16) as &i128) = *((&v0 as &char + 12) as &i128);
            *((a0 + 4) as &i128) = v0;
            *((a0 + 32) as &i64) = v11;
        },
        Err(_) => {
            v3 = *((&v4 as &char + 24) as &i64);
            v9 = *((&v4 as &char + 8) as &i128);
            v1 = v9;
            *((a0 + 24) as &i64) = v3;
            *((a0 + 8) as &i128) = v9;
        },
    }
    return struct4 {
        field_0: v8
    };
}
