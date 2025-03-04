fn uu_fold::handle_obsolete(a0: &struct48, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x90], Other Possible Types: unsigned int, unsigned long
    let v1: i64;  // [sp-0x88]
    let v2: struct24;  // [sp-0x78]
    let v4: struct24;  // [bp-0x60]
    let v5: struct24;  // [sp-0x48]
    let v8: i64;  // rdx
    let v9: i64;  // rbp
    let v10: i64;  // rdx
    let v11: i64;  // r13
    let v12: i64;  // r12
    let v13: i64;  // rdi
    let v14: i64;  // rbx

    v4 = struct24 {
        field_0: a1
        field_8: a1 + a2 * 24
        field_16: 0
    };
    if !v8 {
        v14 = a0;
        <T as alloc::slice::hack::ConvertVec>::to_vec(v14, a1, a2);
        *((v14 + 24) as &i64) = 0x8000000000000000;
    }
    v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v4);
    do {
        v11 = *((v10 + 8) as &i64);
        v12 = *((v10 + 16) as &i64);
        *(&v0 as &i32) = 0;
        if core::slice::<impl [T]>::starts_with(v11, v12, core::char::methods::encode_utf8_raw(45, &v0), v8) as i8 {
            v0 = v11;
            v1 = v12 + v11;
            v13 = 0x110000;
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by() {
                v13 = (!core::str::validations::next_code_point(&v0) as i32 ? 0x110000 : v8 as u32);
            }
            if core::option::Option<T>::map_or(v13) as i8 {
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v0 = alloc::vec::Vec<T,A>::remove(&v5, v9, "src/uu/fold/src/fold.rs");
                v2 = v5;
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v11, v12), a2);
                return struct48 {
                    field_0: v2
                    field_16: v3
                    field_24: *(&v0.field_0 as &i128)
                    field_40: v0.field_16
                };
            }
        }
    } while ((v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v4), v10 = v8, v8));
}
