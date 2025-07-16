fn uu_fold::handle_obsolete(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: i64;  // [bp-0xa0]
    let v1: iNone;  // [bp-0x90], Other Possible Types: unsigned int
    let v2: i64;  // [bp-0x90]
    let v3: iNone;  // [bp-0x90]
    let v4: iNone;  // [bp-0x90]
    let v5: i64;  // [bp-0x80]
    let v6: iNone;  // [bp-0x78]
    let v7: i64;  // [bp-0x68]
    let v8: i64;  // [bp-0x60]
    let v9: i64;  // [bp-0x58]
    let v10: i64;  // [bp-0x50]
    let v11: i8;  // [bp-0x48]
    let v13: i64;  // rax
    let v14: i64;  // rdx
    let v15: i64;  // rdx
    let v16: i64;  // r13
    let v17: i64;  // r12
    let v19: i64;  // rdi
    let v21: iNone;  // rax:rax
    let v22: iNone;  // rax:rdx

    v8 = a1;
    v9 = a1 + a2 * 24;
    v10 = 0;
    v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
    if v14 {
        do {
            v16 = *((v15 + 8) as &i64);
            v17 = *((v15 + 16) as &i64);
            v1 = 0;
            v2 = *(&v1 as &i64) & -0x100000000;
            v22 = core::char::methods::encode_utf8_raw(45, &v2, v15);
            if core::slice::<impl [T]>::starts_with(v16, v17, v22 as i64, (&v22)[8] as i64) {
                v3 = struct16 {
                    field_0: v16
                    field_8: v17 + v16
                };
                v19 = 0x110000;
                if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v3) {
                    v21 = core::str::validations::next_code_point(&v3) as u128;
                }
                if core::option::Option<T>::map_or(v19) as i8 {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(&v11, a1, a2);
                    v4 = alloc::vec::Vec<T,A>::remove(&v11, v13, "src/uu/fold/src/fold.rs");
                    v7 = (&v4)[88] as i64;
                    memcpy(&v4 as u8, &v11, 16);
                    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v16, v17, a2) as u64, a2);
                    *((v0 + 40) as &unsigned long) = v5;
                    *((v0 + 24) as &i128) = v1 as i128;
                    *((v0 + 16) as &unsigned long) = v7;
                    *(v0 as void*) = v6;
                    return a0;
                }
            }
            v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
            v15 = v14;
        } while (v15);
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(v0, a1, a2);
    *((v0 + 24) as &i64) = 0x8000000000000000;
    return a0;
}
