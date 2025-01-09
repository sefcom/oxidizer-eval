fn uu_env::split_iterator::SplitIterator::state_root(a0: &Option<struct40>, a1: u32) -> u64 {
    let v0: i320;  // [sp-0x40], Other Possible Types: Option<struct40>

    loop {
        v0 = uu_env::split_iterator::SplitIterator::state_delimiter(a1);
        if v0 != 7 {
            break;
        }
    }
    return Some(struct40 {
        field_0: v4
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: v3
    });
}
