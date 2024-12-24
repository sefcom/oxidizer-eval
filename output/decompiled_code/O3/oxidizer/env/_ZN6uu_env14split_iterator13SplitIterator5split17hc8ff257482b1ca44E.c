fn uu_env::split_iterator::SplitIterator::split(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i320;  // [sp-0x38], Other Possible Types: Option<struct40>
    let v2: i128;  // xmm0

    v0 = uu_env::split_iterator::SplitIterator::state_root(a1, a2);
    match v0 {
        Some(_) => {
            v2 = v0;
            return struct28 {
                field_0: 8
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
            };
        },
        None => {
            return struct28 {
                field_0: 8
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
            };
        },
    }
}
