fn uu_env::split_iterator::SplitIterator::split(a0: i64, a1: i64) -> long long {
    let v0: Option<struct40>;  // [bp-0x38]
    let v1: u128;  // [bp-0x28]

    v0 = uu_env::split_iterator::SplitIterator::state_root(a1 as u32);
    match v0 {
        Some(_) => {
            return struct40 {
                field_0: v0 as i128
                field_16: v1
                field_32: *((&v0 as &char + 32) as &i64)
            };
        },
        None => {
            return struct32 {
                field_0: 12
                padding_4: <UNKNOWN>
                field_8: *((a1 + 64) as &i128)
                field_24: *((a1 + 80) as &i64)
            };
        },
    }
}
