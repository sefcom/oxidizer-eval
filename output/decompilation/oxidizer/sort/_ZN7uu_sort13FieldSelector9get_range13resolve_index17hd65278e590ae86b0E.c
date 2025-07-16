fn uu_sort::FieldSelector::get_range::resolve_index(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: void*;  // [bp-0x30]
    let v4: u64;  // rdi
    let v5: core::option::Option<&str>;  // r14
    let v6: struct8;  // rdi
    let v7: struct8;  // rdi
    let v8: core::option::Option<&str>;  // rax
    let v9: u64;  // rdx
    let v10: core::option::Option<&str>;  // rax
    let v11: struct24;  // rsi
    let v12: struct8;  // rax

    v4 = *(a4 as &i64);
    if a2 && v4 > a3 {
        return 3;
    }
    if *((a4 + 8) as &i64) {
        if v4 == 1 {
            v5 = 0;
            if !(!*((a4 + 16) as &i8)) {
                goto LABEL_521eb9;
            }
        } else {
            if !a2 {
                core::option::unwrap_failed(); /* do not return */
            }
            v7 = v4 - 1;
            v5 = *((a2 + v7 * 16) as &i64);
            if *((a4 + 16) as &i8) {
LABEL_521eb9:
                v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v5, a0, a1) as u64;
                v2 = 0;
                v0 = v8;
                v1 = v8 + v9;
                v5 += core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v0), v9, v9);
            }
        }
        v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v5, a0, a1) as u64;
        v0 = struct24 {
            field_0: v10
            field_8: v10 + v9
            field_16: 0
        };
        if core::iter::traits::iterator::Iterator::advance_by(&v0, *((a4 + 8) as &i64) - 1) {
            return (a1 <= core::option::Option<T>::map_or(v12, v11, v9) + v5) * 3;
        }
        v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1);
        return (a1 <= core::option::Option<T>::map_or(v12, v11, v9) + v5) * 3;
    } else if a2 {
        v6 = v4 - 1;
        return 1 + (*((a2 + v6 * 16 + 8) as &i64) < 1);
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
}
