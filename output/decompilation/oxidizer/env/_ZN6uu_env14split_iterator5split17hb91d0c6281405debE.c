fn uu_env::split_iterator::split(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct40, struct28>;  // [bp-0x90]
    let v1: i64;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: Result<struct24, struct24>;  // [bp-0x68]
    let v4: u128;  // [bp-0x68]
    let v5: u128;  // [bp-0x64]
    let v6: u128;  // [bp-0x5c]
    let v7: Option<struct40>;  // [bp-0x54]
    let v9: core::option::Option<usize>;  // xmm0
    let v10: iNone;  // xmm0

    v3 = uu_env::split_iterator::SplitIterator::new(a1, a2);
    v0 = uu_env::split_iterator::SplitIterator::split(&v3);
    match v0 {
        Ok(_) => {
            v10 = *((&v0 as &char + 4) as &i128);
            v6 = *((&v0 as &char + 16) as &i128) as u128;
            *(&v4 as void*) = v10;
            return struct48 {
                field_0: v0 as i32
                field_4: <UNKNOWN>
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
            };
        },
        Err(_) => {
            v7 = v1;
            v9 = *((&v0 as &char + 8) as &i128);
            *(&v5 as &core::option::Option<usize>) = v9;
            *((a0 + 24) as &unsigned long) = v1;
            *((a0 + 8) as &core::option::Option<usize>) = v9;
        },
    }
}
