fn uu_more::search_pattern_in_file(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x40]
    let v1: u128;  // [bp-0x38]
    let v2: core::option::Option<&u8>;  // [bp-0x30]
    let v3: alloc::string::String;  // [sp-0x28], Other Possible Types: struct8
    let v7: u64;  // rax
    let v8: u64;  // r14
    let v9: i64;  // rdx

    if *(a2 as &i64) != 0x8000000000000000 {
        v3 = <alloc::string::String as core::clone::Clone>::clone(a2);
        v7 = v3.vec.buf.ptr.pointer.pointer;
        v1 = *(&v3.vec.buf.cap as &i128);
    }
    v0 = v7;
    if a1 && v2 {
        do {
            v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v9 {
                return 0;
            }
        } while (!<&str as core::str::pattern::Pattern>::is_contained_in(v1, v2, *((v9 + 8) as &i64), *((v9 + 16) as &i64)));
    }
    return v8;
}
