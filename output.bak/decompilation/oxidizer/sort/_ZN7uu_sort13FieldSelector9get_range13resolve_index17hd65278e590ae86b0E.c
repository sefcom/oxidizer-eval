fn uu_sort::FieldSelector::get_range::resolve_index(a0: u32, a1: u32, a2: &u64, a3: u32, a4: void*) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: void*;  // [sp-0x30]
    let v4: u64;  // rdi
    let v5: u64;  // rax
    let v6: u64;  // r12
    let v7: void*;  // r14
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v11: u64;  // rax
    let v12: u64;  // rsi

    v4 = a4->field_0;
    if a2 && v4 > a3 {
        return 3;
    }
    v6 = a4->field_8;
    if !v6 {
        if !a2 {
            core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
        }
        v5 = 1 + (a2[1 + 2 * v4] < 1);
        return v5;
    }
    if v4 == 1 {
        v7 = 0;
        if !a4->field_10 {
            goto LABEL_521f06;
        }
    } else {
        if !a2 {
            core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
        }
        v7 = a2[2 + 2 * v4];
        if !a4->field_10 {
LABEL_521f06:
            v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v7, a0, a1);
            if !v11 {
                core::str::slice_error_fail(a0, a1, v7, a1, "src/uu/sort/src/sort.rs"); /* do not return */
            }
            v2 = 0;
            v0 = v11;
            v1 = v11 + v9;
            if core::iter::traits::iterator::Iterator::advance_by(v6 - 1) {
                v12 = 0x110000;
            } else {
                v12 = v9;
            }
            v5 = (-0x100 | a1 <= core::option::Option<T>::map_or(<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(), v12, v9) + v7) * 3;
            return v5;
        }
    }
    v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v7, a0, a1);
    if !v8 {
        core::str::slice_error_fail(a0, a1, v7, a1, "src/uu/sort/src/sort.rs"); /* do not return */
    }
    v2 = 0;
    v0 = v8;
    v1 = v8 + v9;
    v7 += core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v0), v9, v9);
    goto LABEL_521f06;
}
