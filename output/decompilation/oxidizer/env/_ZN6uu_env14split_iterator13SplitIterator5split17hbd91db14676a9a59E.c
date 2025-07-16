fn uu_env::split_iterator::SplitIterator::split(a1: i64) -> Result<struct40, struct28> {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x38], Other Possible Types: char
    let v1: u128;  // [bp-0x28]
    let v2: i8;  // [bp-0x18]
    let v4: u64;  // rdx

    uu_env::split_iterator::SplitIterator::state_root(a1, v4);
    if *(&v0 as &i32) != 8 {
        return Ok(struct40 {
            field_0: v0
            field_16: v1
            field_32: *(&v2 as &i64)
        });
    }
    return struct40 {
        field_0: 8
        field_8: <UNKNOWN>
        field_24: <UNKNOWN>
    };
}
