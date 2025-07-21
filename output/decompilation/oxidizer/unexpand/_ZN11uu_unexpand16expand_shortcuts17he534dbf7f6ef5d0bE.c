fn uu_unexpand::expand_shortcuts(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0xd0]
    let v1: u32;  // [bp-0xcc]
    let v2: struct24;  // [bp-0xc8]
    let v3: u32;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc8]
    let v5: u64;  // [bp-0xc8]
    let v6: alloc::string::String;  // [bp-0xc8], Other Possible Types: u64
    let v7: u64;  // [bp-0xc8]
    let v8: u64;  // [bp-0xc0]
    let v9: u64;  // [bp-0xb8]
    let v11: struct16;  // [bp-0xb0]
    let v12: u64;  // [bp-0xb0]
    let v13: u64;  // [bp-0xa8]
    let v14: void*;  // [bp-0xa0]
    let v15: u128;  // [bp-0x98]
    let v16: u64;  // [bp-0x98]
    let v17: u64;  // [bp-0x90]
    let v18: u64;  // [bp-0x88]
    let v19: struct16;  // [bp-0x78]
    let v20: u16;  // [bp-0x38]
    let v22: core::fmt::rt::Argument;  // rax
    let v23: u64;  // rdx
    let v24: u64;  // rbx
    let v25: u64;  // r12
    let v27: core::option::Option<&str>;  // rax
    let v28: u64;  // rdx
    let v29: u64;  // rax
    let v30: i64;  // r15
    let v31: &str;  // rax:rdx

    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(a1, 0);
    v12 = v8;
    v13 = v9;
    v14 = 0;
    v16 = a0;
    v17 = a0 + a1 * 24;
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
    if v22 {
        do {
            v24 = *((v22 + 8) as &i64);
            v25 = *((v22 + 16) as &i64);
            v3 = 0;
            v4 = v2.field_0 & -0x100000000;
            v31 = core::char::methods::encode_utf8_raw(45, &v4, v23);
            v5 = v4;
            if core::slice::<impl [T]>::starts_with(v24, v25, v31.data_ptr, 1) && !((v27 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v24, v25, a1) as u64, v5 as u128 = struct16 {
    field_0: v27
    field_8: v27 + v28
}, v5 = v7, !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5 as u128) as i32 as u32 as u64, a0) as u8)) {
                v19 = struct16 {
                    field_0: 0
                    field_8: v28
                };
                v20 = 1;
                v0 = <char as core::str::pattern::Pattern>::into_searcher(v5, v28, a2) & -0x100 | 1;
                core::iter::traits::iterator::Iterator::fold(&v19, &v12);
                v6 = v7;
            } else {
                v6 = <alloc::string::String as core::clone::Clone>::clone(v22);
                v12 = alloc::vec::Vec<T,A>::push(&v6);
                v29 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v25, "--all");
                if v29 || (v29 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v25, "-a"), v6 = v5, v29 as u8) {
                    v1 = v29 & -0x100 | 1;
                    v6 = v5;
                }
            }
            v5 = v6;
            v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
        } while (v22);
        if (v0 as i8 & 1) && !(v1 & 1) {
            <T as alloc::slice::hack::ConvertVec>::to_vec("--first-only", a2);
            v18 = v9;
            v15 = *(&v6.vec.buf.cap as &i128);
            v11 = alloc::vec::Vec<T,A>::push(&v16);
        }
    }
    *((v30 + 16) as &i64) = 0;
    *(v30 as &i128) = *(&v11.field_0 as &i128);
    return;
}
