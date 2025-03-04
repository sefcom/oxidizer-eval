fn uu_env::split_iterator::SplitIterator::state_root(a0: &struct40, a1: u32) -> u64 {
    let v0: Option<struct40>;  // [sp-0x40]
    let v2: i32;  // eax
    let v3: i64;  // rax
    let v4: iNone;  // xmm0

    loop {
        v0 = uu_env::split_iterator::SplitIterator::state_delimiter(a1);
        v2 = v0 as i32;
        if v2 != 7 {
            break;
        }
    }
    if v2 != 6 {
        v3 = *((&v0 as &char + 32) as &i64);
        v4 = v0 as i128;
        return struct40 {
            field_0: v4
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: v3
        };
    }
}
