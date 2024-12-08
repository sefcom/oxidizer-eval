fn uu_more::search_pattern_in_file(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x50], Other Possible Types: i64
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: struct8;  // [sp-0x38], Other Possible Types: i64
    let v4: i64;  // [sp-0x30]
    let v5: i64;  // [sp-0x28]
    let v7: i64;  // r14
    let v8: i64;  // rdx

    if *(a2 as &i64) == 0x8000000000000000 {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v7 = 0;
    } else {
        v0 = <alloc::string::String as core::clone::Clone>::clone(a2);
        v7 = 0;
        if a1 && v0.field_16 {
            v3 = a0;
            v4 = a0 + a1 * 24;
            v5 = 0;
            do {
                v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                if !v8 {
                    return 0;
                }
            } while (!<&str as core::str::pattern::Pattern>::is_contained_in(v0.field_8, v0.field_16, *((v8 + 8) as &i64), *((v8 + 16) as &i64)) as i8);
            v7 = 1;
        }
    }
    return v7;
}
