fn uu_more::search_pattern_in_file(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x40]
    let v1: i64;  // [sp-0x38], Other Possible Types: int
    let v2: i64;  // [sp-0x30]
    let v3: i64;  // [sp-0x28], Other Possible Types: struct8, struct24
    let v4: i64;  // [sp-0x20]
    let v5: i64;  // [sp-0x18]
    let v7: i64;  // rax
    let v9: i64;  // rdx

    if *(a2 as &i64) == 0x8000000000000000 {
        v1 = 1;
        v2 = 0;
        v7 = 0;
    } else {
        v3 = <alloc::string::String as core::clone::Clone>::clone(a2);
        v7 = v3;
        *(&v1 as &i128) = *(&v3.field_8 as &i128);
    }
    v0 = v7;
    if a1 && v2 {
        v3 = a0;
        v4 = a0 + a1 * 24;
        v5 = 0;
        loop {
            v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v9 {
                return 0;
            } else if <&str as core::str::pattern::Pattern>::is_contained_in(v1, v2, *((v9 + 8) as &i64), *((v9 + 16) as &i64)) {
                return 1;
            }
        }
    }
    return 0;
}
