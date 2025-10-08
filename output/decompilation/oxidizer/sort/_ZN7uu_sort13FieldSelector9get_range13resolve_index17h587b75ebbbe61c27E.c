fn uu_sort::FieldSelector::get_range::resolve_index(a0: &str, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct24;  // [bp-0x40]
    let v2: u64;  // rdi
    let v3: void*;  // r14
    let v4: core::fmt::Arguments;  // rdi
    let v5: core::option::Option<&str>;  // rax
    let v6: u64;  // rdx
    let v7: core::option::Option<&str>;  // rax
    let v8: u64;  // rsi
    let v9: struct8;  // rax
    let v10: u64;  // rsi
    let v12: core::fmt::Arguments;  // rdi

    v2 = *(a3 as &i64);
    if (a2 < v2 & a1) {
        return 3;
    } else if *((a3 + 8) as &i64) {
        if v2 == 1 {
            v3 = 0;
            if *((a3 + 16) as &i8) {
                goto LABEL_4d3dc1;
            }
        } else {
            core::option::unwrap(a1);
            v4 = v2 - 1;
            v3 = *((a1 + v4 * 16) as &i64);
            if *((a3 + 16) as &i8) {
LABEL_4d3dc1:
                v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, a0) as u64;
                v0 = struct24 {
                    field_0: v5
                    field_8: v5 + v6
                    field_16: 0
                };
                v3 += core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v0), v6, v6);
            }
        }
        v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, a0) as u64;
        v0 = struct24 {
            field_0: v7
            field_8: v7 + v6
            field_16: 0
        };
        v0 = struct24 {
            field_0: v7
            field_8: v7 + v6
            field_16: 0
        };
        if core::iter::traits::iterator::Iterator::advance_by(&v0, *((a3 + 8) as &i64) - 1) {
            return (v10 <= core::option::Option<T>::map_or(v9, v8, v6) + v3) * 3;
        }
        v9 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
        return (v10 <= core::option::Option<T>::map_or(v9, v8, v6) + v3) * 3;
    } else {
        core::option::unwrap(a1);
        v12 = v2 - 1;
        return 1 + (*((a1 + v12 * 16 + 8) as &i64) < 1);
    }
}
