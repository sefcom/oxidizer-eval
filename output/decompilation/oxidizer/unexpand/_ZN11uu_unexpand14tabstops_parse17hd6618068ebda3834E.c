fn uu_unexpand::tabstops_parse(a0: void*, a1: u8, a2: u64) -> int {
    let v0: struct16;  // [bp-0xb8]
    let v1: void*;  // [bp-0xb8]
    let v2: alloc::string::String;  // [bp-0xb0]
    let v3: void*;  // [bp-0xa8]
    let v4: u8;  // [bp-0xa0]
    let v5: u8;  // [bp-0x9f]
    let v6: u64;  // [bp-0x98]
    let v7: struct24;  // [bp-0x90]
    let v8: u64;  // [bp-0x80]
    let v9: core::fmt::Arguments;  // [bp-0x78]
    let v10: core::fmt::rt::Argument;  // [bp-0x70]
    let v11: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v12: u16;  // [bp-0x38]
    let v14: u64;  // rcx
    let v15: u64;  // rbp
    let v16: u64;  // rax
    let v17: u64;  // rax
    let v18: u64;  // rdx
    let v20: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v11 = <char as core::str::pattern::Pattern>::into_searcher(a1, a2, v14);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v9 = 0;
    v10 = a2;
    v12 = 1;
    loop {
        v15 = core::str::iter::SplitInternal<P>::next(&v9);
        if !v15 {
            if <usize as core::slice::cmp::SliceContains>::slice_contains(v2, v3) {
                *(&a0[8] as &u64) = v16;
            } else if (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v2, v2 + v3 * 8) & 1) {
                v17 = a0 + 8;
                *((v17 + 16) as &void*) = v3;
                *(v17 as &i128) = *(&v0.field_0 as &i128);
                return struct8 {
                    field_0: 0
                };
            } else {
                *(&a0[8] as &u64) = v16;
            }
        }
        v20 = core::num::<impl usize>::from_ascii_radix(&v4, v15, a2);
        if v4 {
            break;
        }
        v0 = alloc::vec::Vec<T,A>::push(v6);
    }
    if v5 == 2 {
        *(&a0[8] as &u64) = v16;
    }
    v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::<impl str>::trim_start_matches(v15, v18), a2);
    return struct32 {
        field_0: 1
        field_8: *(&v7.field_0 as &i128)
        field_24: v8
    };
}
