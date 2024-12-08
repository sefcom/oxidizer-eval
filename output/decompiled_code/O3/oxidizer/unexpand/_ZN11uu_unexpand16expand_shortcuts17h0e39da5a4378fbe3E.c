fn uu_unexpand::expand_shortcuts(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i32;  // [sp-0xd0]
    let v1: i32;  // [sp-0xcc]
    let v2: i192;  // [sp-0xc8], Other Possible Types: struct24, Result<struct16, struct8>
    let v3: i64;  // [sp-0xc0]
    let v4: i8;  // [bp-0xb8]
    let v5: i64;  // [sp-0xb0], Other Possible Types: struct16
    let v6: i64;  // [sp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: i128;  // [sp-0x98]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: struct16;  // [bp-0x78]
    let v12: i8;  // [bp-0x68]
    let v13: i16;  // [sp-0x38]
    let v15: struct8;  // rax
    let v16: i64;  // rbx
    let v17: i64;  // r12
    let v18: i64;  // rax
    let v19: i64;  // rbp
    let v20: i64;  // rsi
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i128;  // xmm0
    let v24: i256;  // ymm0
    let v26: i128;  // xmm0

    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a2, 0);
    v5 = v3;
    v6 = v4;
    v7 = 0;
    v8 = a1;
    v9 = a1 + a2 * 24;
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v15 {
        *((a0 + 16) as &i64) = v7;
        v26 = v5;
        *(a0 as &i128) = v26;
        return v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
    }
    v1 = 0;
    v0 = 0;
    do {
        v16 = *((v15 + 8) as &i64);
        v17 = *((v15 + 16) as &i64);
        v2 = 0;
        if core::slice::<impl [T]>::starts_with(v16, v17, core::char::methods::encode_utf8_raw(45, &v2), 1) as i8 {
            v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v16, v17);
            if !v18 {
                core::str::slice_error_fail(); /* do not return */
            }
            v19 = v18;
            v2 = v19;
            v2.field_8 = vvar_128{reg 16} + vvar_133{reg 32};
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v2, v20, v21) as i32) {
                v11 = struct16 {
                    field_0: 0
                    field_8: v21
                };
                v13 = 1;
                v0 = <char as core::str::pattern::Pattern>::into_searcher(&v12, v19, v21) | -0x100 | 1;
                core::iter::traits::iterator::Iterator::fold(&v11, &v5, v21);
                continue;
            }
        }
        v2 = <alloc::string::String as core::clone::Clone>::clone(v15);
        v5 = alloc::vec::Vec<T,A>::push(&v2);
        v22 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "--all");
        if v22 || (v22 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "-a"), v22 as i8) {
            v1 = v22 | -0x100 | 1;
        }
    } while ((v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v15));
    if (v0 & 1) && !(v1 & 1) {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("--first-only");
        v10 = *((&v2 as &char + 16) as &i64);
        v23 = v2;
        v8 = v23;
        v5 = alloc::vec::Vec<T,A>::push(&v8);
    }
}
