fn uu_sort::FieldSelector::get_range::resolve_index(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: struct24;  // [bp-0x40]
    let v2: u64;  // rdi
    let v3: core::option::Option<&str>;  // r14
    let v4: struct8;  // rdi
    let v5: struct8;  // rdi
    let v6: core::option::Option<&str>;  // rax
    let v7: u64;  // rdx
    let v8: core::option::Option<&str>;  // rax
    let v9: u64;  // rsi
    let v10: struct8;  // rax

    v2 = *(a4 as &i64);
    if a2 && v2 > a3 {
        return 3;
    }
    if *((a4 + 8) as &i64) {
        if v2 == 1 {
            v3 = 0;
            if !(!*((a4 + 16) as &i8)) {
                goto LABEL_521eb9;
            }
        } else {
            if !a2 {
                core::option::unwrap_failed(); /* do not return */
            }
            v5 = v2 - 1;
            v3 = *((a2 + v5 * 16) as &i64);
            if *((a4 + 16) as &i8) {
LABEL_521eb9:
                v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, a0, a1) as u64;
                v0 = struct24 {
                    field_0: v6
                    field_8: v6 + v7
                    field_16: 0
                };
                v3 += core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v0), v7, v7);
            }
        }
        v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, a0, a1) as u64;
        v0 = struct24 {
            field_0: v8
            field_8: v8 + v7
            field_16: 0
        };
        v0 = struct24 {
            field_0: v8
            field_8: v8 + v7
            field_16: 0
        };
        if core::iter::traits::iterator::Iterator::advance_by(&v0, *((a4 + 8) as &i64) - 1) {
            return (a1 <= core::option::Option<T>::map_or(v10, v9, v7) + v3) * 3;
        }
        v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1);
        return (a1 <= core::option::Option<T>::map_or(v10, v9, v7) + v3) * 3;
    } else if a2 {
        v4 = v2 - 1;
        return 1 + (*((a2 + v4 * 16 + 8) as &i64) < 1);
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
}
