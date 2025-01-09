fn uu_more::search_pattern_in_file(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x40]
    let v1: i128;  // [sp-0x38]
    let v2: i64;  // [sp-0x30]
    let v3: i64;  // [sp-0x28], Other Possible Types: struct24, struct8
    let v4: i64;  // [sp-0x20]
    let v5: i64;  // [sp-0x18]
    let v8: i64;  // rdx
    let v9: i64;  // r14

    if *(a2 as &i64) == 0x8000000000000000 {
        v1 = 1;
        v2 = 0;
    } else {
        v3 = <alloc::string::String as core::clone::Clone>::clone(a2);
        v1 = *((&v3 as &char + 8) as &i128);
    }
    v0 = 0;
    if a1 && v2 {
        v3 = a0;
        v4 = a0 + a1 * 24;
        v5 = 0;
        loop {
            v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v8 {
                return 0;
            } else if <&str as core::str::pattern::Pattern>::is_contained_in(v1, v2, *((v8 + 8) as &i64), *((v8 + 16) as &i64)) {
                return v9;
            }
        }
    }
    return v9;
}
