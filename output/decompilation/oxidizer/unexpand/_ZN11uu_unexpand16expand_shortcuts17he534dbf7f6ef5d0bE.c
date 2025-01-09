fn uu_unexpand::expand_shortcuts(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: i32;  // [sp-0xd0]
    let v1: i32;  // [sp-0xcc]
    let v2: i192;  // [sp-0xc8], Other Possible Types: struct24, Result<struct16, struct8>
    let v3: i64;  // [sp-0xc0]
    let v4: i128;  // [sp-0xb0], Other Possible Types: struct16
    let v5: i64;  // [sp-0xa0]
    let v6: i128;  // [sp-0x98]
    let v7: i64;  // [sp-0x90]
    let v8: i64;  // [sp-0x88]
    let v9: struct16;  // [bp-0x78]
    let v10: i16;  // [sp-0x38]
    let v12: struct8;  // rax
    let v13: i64;  // rbx
    let v14: i64;  // r12
    let v15: i64;  // rax
    let v16: i64;  // rbp
    let v17: i64;  // rdx
    let v18: i64;  // rax

    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v4 = *((&v2 as &char + 8) as &i128);
    v5 = 0;
    v6 = a1;
    v7 = a1 + a2 * 24;
    v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v12 {
        return struct24 {
            field_0: v22
            field_16: v5
        };
    }
    v0 = 0;
    v1 = 0;
    do {
        v13 = *((v12 + 8) as &i64);
        v14 = *((v12 + 16) as &i64);
        v2 = 0;
        if core::slice::<impl [T]>::starts_with(v13, v14, core::char::methods::encode_utf8_raw(45, &v2), 1) as i8 {
            v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, v14);
            v16 = v15;
            v2 = v16;
            v3 = v15 + v17;
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v2)) {
                v9 = struct16 {
                    field_0: 0
                    field_8: v17
                };
                v10 = 1;
                v0 = (<char as core::str::pattern::Pattern>::into_searcher(v16, v17) & -0x100 | 1) as u32;
                core::iter::traits::iterator::Iterator::fold(&v9, &v4);
                continue;
            }
        }
        v2 = <alloc::string::String as core::clone::Clone>::clone(v12);
        v4 = alloc::vec::Vec<T,A>::push(&v2);
        v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "--all");
        if v18 || (v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, "-a"), v18 as i8) {
            v1 = v18 & -0x100 | 1;
        }
    } while ((v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v12));
    if (v0 & 1) && !(v1 & 1) {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("--first-only");
        v8 = *((&v2 as &char + 16) as &i64);
        v6 = v2;
        v4 = alloc::vec::Vec<T,A>::push(&v6);
    }
}
