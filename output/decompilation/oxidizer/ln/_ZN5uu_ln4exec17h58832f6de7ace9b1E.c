fn uu_ln::exec(a0: i64, a1: i64, a2: &struct56) -> u64 {
    let v0: struct24;  // [bp-0x80], Other Possible Types: u64
    let v1: struct24;  // [bp-0x78], Other Possible Types: u128
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: iNone;  // [bp-0x60]
    let v5: u64;  // [bp-0x50]
    let v6: struct24;  // [bp-0x48]
    let v7: u64;  // [bp-0x38]
    let v8: struct24;  // [bp-0x30]
    let v11: core::fmt::Arguments;  // rax
    let v12: u64;  // rax
    let v13: void*;  // rax
    let v14: u64;  // rdx

    if !((((0 ^ *((a2 + 24) as &i64)) & (0 ^ -(*((a2 + 24) as &i64)))) >> 63) as char) {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        v11 = uu_ln::link_files_in_dir(a0, a1, v0.field_8, v2, a2);
    } else if *((a2 + 51) as &i8) {
        if a1 == 1 {
            v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
        } else {
            if a1 > 2 {
                v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((a0 + 56) as &i64), *((a0 + 64) as &i64));
                v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(uucore::execution_phrase(), a2);
                v5 = v8.field_16;
                v4 = *(&v8.field_0 as &i128);
                v1 = *(&v6.field_0 as &i128);
                v3 = v7;
                v0 = 4;
            } else {
                if a1 {
                    return uu_ln::link(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64), a2);
                }
                core::panicking::panic("assertion failed: !files.is_empty()"); /* do not return */
                return uu_ln::link(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64), a2);
            }
        }
        return alloc::boxed::Box<T>::new(&v0) as u64;
    } else if a1 == 1 {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(".");
        v11 = uu_ln::link_files_in_dir(a0, 1, v0.field_8, v2, a2);
    } else {
        if !a1 {
            core::option::unwrap_failed(); /* do not return */
        }
        v12 = a1 * 3;
        if a0 + v12 * 8 == 24 {
            core::option::unwrap_failed(); /* do not return */
        }
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((a0 + v12 * 8 - 16) as &i64), *((a0 + v12 * 8 - 8) as &i64));
        if a1 <= 2 && !std::path::Path::is_dir(v0.field_8, v2) {
            goto LABEL_0x465d39;
        }
        v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1 - 1, a0, a1);
        v11 = uu_ln::link_files_in_dir(v13, v14, v0.field_8, v2, a2);
    }
    return v11;
}
