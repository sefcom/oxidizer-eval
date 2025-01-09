fn uu_fold::handle_obsolete(a0: &struct48, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [bp-0x90], Other Possible Types: i32
    let v1: i64;  // [sp-0x88]
    let v2: struct24;  // [sp-0x78]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x50]
    let v7: struct24;  // [sp-0x48], Other Possible Types: i192
    let v9: i64;  // r15
    let v10: struct8;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rdx
    let v13: i64;  // r13
    let v14: i64;  // r12
    let v15: i64;  // rdi
    let v16: i64;  // rbx

    v9 = a1;
    v4 = a1;
    v5 = a1 + a2 * 24;
    v6 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if !v11 {
        v16 = a0;
        <T as alloc::slice::hack::ConvertVec>::to_vec(v16, v9, a2);
        *((v16 + 24) as &i64) = 0x8000000000000000;
    }
    do {
        v13 = *((v12 + 8) as &i64);
        v14 = *((v12 + 16) as &i64);
        v0 = 0;
        if core::slice::<impl [T]>::starts_with(v13, v14, core::char::methods::encode_utf8_raw(45, &v0), v11) as i8 {
            v0 = v13;
            v1 = v14 + v13;
            v15 = 0x110000;
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by() {
                v15 = (!core::str::validations::next_code_point(&v0) as i32 ? 0x110000 : v11 as u32);
            }
            if core::option::Option<T>::map_or(v15) as i8 {
                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v9, a2);
                v0 = alloc::vec::Vec<T,A>::remove(&v7, v10, "src/uu/fold/src/fold.rs");
                v2 = v7;
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, v14), v11);
                return struct48 {
                    field_0: v2
                    field_16: v3
                    field_24: v0
                    field_40: *((&v0 as &char + 16) as &i64)
                };
            }
        }
    } while ((v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(), v12 = v11, v11));
}
