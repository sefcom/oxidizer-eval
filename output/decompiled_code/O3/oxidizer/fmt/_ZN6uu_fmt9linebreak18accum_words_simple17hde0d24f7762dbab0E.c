fn uu_fmt::linebreak::accum_words_simple(a0: &struct_0, a1: &struct_2, a2: u64, a3: u8, a4: &struct_3) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: &struct_1;  // rbp
    let v3: void*;  // rbx
    let v5: u8;  // cl
    let v6: u64;  // r12
    let v7: &u64;  // r13
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: &struct_0;  // rcx
    let v12: u64;  // rdx

    v0 = a4->field_28;
    v2 = a1->field_0;
    v3 = 0;
    v5 = a4->field_3a;
    if !(!a1->field_30) || !(!v5) {
        v3 = (v5 & a3 | a4->field_38) + 1;
    }
    v6 = a2 + v0 + uu_fmt::linebreak::BreakArgs::compute_width(v2, a4, a2, 0) + v3;
    v7 = a1->field_18;
    if v6 <= v2->field_30 {
        v8 = uu_fmt::linebreak::write_with_spaces(a4->field_10, a4->field_18, v3, v7);
        if !v8 {
            v10 = a4->field_39;
            v11 = a0;
            v11->field_0 = v6;
            v11->field_8 = v10;
            return v10;
        }
    } else {
        v8 = uu_fmt::linebreak::write_newline(a1->field_8, a1->field_10, v7);
        if !v8 {
            v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4->field_20, a4->field_10, a4->field_18);
            if !v9 {
                core::str::slice_error_fail(); /* do not return */
            }
            v8 = uu_fmt::linebreak::write_with_spaces(v9, v12, 0, v7);
            if !v8 {
                v10 = a4->field_39;
                v11 = a0;
                v11->field_0 = v0 + a1->field_28;
                v11->field_8 = v10;
                return v10;
            }
        }
    }
    v11 = a0;
    v11->field_0 = v8;
    v10 = v8 | -0x100 | 2;
    v11->field_8 = v10;
    return v10;
}
