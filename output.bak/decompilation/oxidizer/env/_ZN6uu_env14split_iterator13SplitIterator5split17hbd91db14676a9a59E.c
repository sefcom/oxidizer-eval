fn uu_env::split_iterator::SplitIterator::split(a0: &Result<struct40, struct24>, a1: void*) -> u64 {
    let v0: Option<struct40>;  // [sp-0x38]

    v0 = uu_env::split_iterator::SplitIterator::state_root(a1);
    return Ok(struct40 {
        field_0: v2
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: *((&v0 as &char + 32) as &i64)
    });
}
