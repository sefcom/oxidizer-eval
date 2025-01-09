fn uu_env::split_iterator::split(a0: &struct44, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [bp-0xb8]
    let v1: i128;  // [bp-0xb4]
    let v2: i128;  // [bp-0xac]
    let v3: i64;  // [sp-0xa4]
    let v4: Result<struct40, struct24>;  // [sp-0x90], Other Possible Types: i320
    let v5: struct24;  // [sp-0x68], Other Possible Types: i192
    let v9: i128;  // xmm0
    let v10: i64;  // rcx

    v5 = uu_env::split_iterator::SplitIterator::new(a1, a2);
    v4 = uu_env::split_iterator::SplitIterator::split(&v5) as u320;
    match v4 {
        Err(_) => {
            v3 = *((&v4 as &char + 24) as &i64);
            v1 = *((&v4 as &char + 8) as &i128);
            return struct28 {
                field_0: v7
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
            };
        },
        Ok(_) => {
            v9 = *((&v4 as &char + 4) as &i128);
            v2 = *((&v4 as &char + 16) as &i128);
            v0 = v9;
            v10 = *((&v4 as &char + 32) as &i64);
            return struct44 {
                field_0: v7
                field_4: v0
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
            };
        },
    }
}
