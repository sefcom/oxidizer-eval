fn uu_env::split_iterator::SplitIterator::state_root(a0: i64, a1: u32) -> int {
    let v0: struct40;  // [bp-0x40]
    let v1: u128;  // [bp-0x30]
    let v2: i8;  // [bp-0x20]

    do {
        uu_env::split_iterator::SplitIterator::state_delimiter(&v0, a1);
    } while (v0.field_0 as i32 == 10);
    if v0.field_0 as i32 != 9 {
        return struct40 {
            field_0: v0
            field_16: v1
            field_32: *(&v2 as &i64)
        };
    }
    return struct4 {
        field_0: 12
    };
}
