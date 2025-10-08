fn uu_expand::expand_shortcuts(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0xe8], Other Possible Types: u32
    let v1: u64;  // [bp-0xe8]
    let v2: u64;  // [bp-0xe0]
    let v3: u64;  // [bp-0xe0]
    let v4: u64;  // [bp-0xd8]
    let v5: u64;  // [bp-0xd8]
    let v6: u64;  // [bp-0xd0]
    let v7: struct16;  // [bp-0xd0]
    let v8: u64;  // [bp-0xc8]
    let v9: void*;  // [bp-0xc0]
    let v10: i64;  // [bp-0xb8]
    let v11: Option<struct24>;  // [bp-0xb0]
    let v12: u64;  // [bp-0xb0]
    let v13: u64;  // [bp-0xb0]
    let v14: u64;  // [bp-0xa8]
    let v15: u64;  // [bp-0xa0]
    let v16: struct32;  // [bp-0x98]
    let v17: struct16;  // [bp-0x78]
    let v18: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v19: u16;  // [bp-0x38]
    let v21: u64;  // rdx
    let v22: i64;  // r12
    let v23: u64;  // r14
    let v25: u64;  // rcx
    let v26: core::option::Option<&str>;  // rax
    let v27: &mut [u8];  // rax:rdx

    v6 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*((a1 + 16) as &i64), 8, 24, "src/uu/expand/src/expand.rs");
    v8 = v21;
    v9 = 0;
    v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16);
    if !((((0 ^ v11 as i64) & (0 ^ -(v12))) >> 63) as char) {
        v22 = &v0;
        v13 = v12;
        do {
            v23 = v13;
            core::str::converts::from_utf8(v22, v14, v15);
            if v0 == 1 {
LABEL_45cb90:
                v0 = struct24 {
                    field_0: v23
                    field_8: v14
                    field_16: v15
                };
                v22 = &v0;
                v7 = alloc::vec::Vec<T,A>::push(&v0, "src/uu/expand/src/expand.rs");
                v2 = v3;
                v4 = v5;
            } else {
                v1 = 0;
                v27 = core::char::methods::encode_utf8_raw(45, v22, v21);
                if !core::slice::<impl [T]>::starts_with(v2, v4, v27.data_ptr, v25) {
                    goto LABEL_45cb90;
                }
                v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v2, v4, v21) as u64;
                v1 = v26;
                v2 = v26 + v21;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v1), a1) {
                    goto LABEL_45cb90;
                }
                v18 = <char as core::str::pattern::Pattern>::into_searcher(v1, v21, v25);
                v17 = struct16 {
                    field_0: 0
                    field_8: v21
                };
                v19 = 1;
                core::iter::traits::iterator::Iterator::fold(&v17, &v7);
                v2 = v2;
                v4 = v4;
            }
            v11 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16);
            v13 = v12;
        } while (v13 != 0x8000000000000000);
    }
    *((v10 + 16) as &i64) = 0;
    *(v10 as &i128) = *(&v7.field_0 as &i128);
    return v10;
}
