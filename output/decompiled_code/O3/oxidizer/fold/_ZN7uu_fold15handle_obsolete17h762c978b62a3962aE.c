fn uu_fold::handle_obsolete(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [bp-0x90], Other Possible Types: struct24
    let v1: i64;  // [sp-0x88]
    let v2: i128;  // [bp-0x78]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x50]
    let v7: i192;  // [sp-0x48], Other Possible Types: struct24
    let v9: i64;  // r15
    let v10: struct8;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rdx
    let v13: i64;  // r13
    let v14: i64;  // r12
    let v15: i64;  // rdi
    let v16: i64;  // rsi
    let v17: i64;  // rbx
    let v18: i64;  // rax

    v9 = a1;
    v4 = a1;
    v5 = a1 + a2 * 24;
    v6 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if v11 {
        do {
            v13 = *((v12 + 8) as &i64);
            v14 = *((v12 + 16) as &i64);
            v0 = 0;
            if core::slice::<impl [T]>::starts_with(v13, v14, core::char::methods::encode_utf8_raw(45, &v0), v11) as i8 {
                v0 = v13;
                v1 = v14 + v13;
                v15 = 0x110000;
                if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v16, v11) {
                    v15 = (!core::str::validations::next_code_point(&v0) as i32 ? 0x110000 : v11 as u32);
                }
                if core::option::Option<T>::map_or(v15) as i8 {
                    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v9, a2);
                    v0 = alloc::vec::Vec<T,A>::remove(&v7, v10, "src/uu/fold/src/fold.rs");
                    v2 = v7;
                    v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, v14);
                    if v18 {
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v18, v11);
                        v17 = a0;
                        *((v17 + 40) as &i64) = *((&v0 as &char + 16) as &i64);
                        *((v17 + 24) as &i192) = v0;
                        *((v17 + 16) as &i64) = v3;
                        *(v17 as &i128) = v2;
                        return v17;
                    }
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        } while ((v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(), v11));
    }
    v17 = a0;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v17, v9, a2);
    *((v17 + 24) as &i64) = 0x8000000000000000;
    return v17;
}
