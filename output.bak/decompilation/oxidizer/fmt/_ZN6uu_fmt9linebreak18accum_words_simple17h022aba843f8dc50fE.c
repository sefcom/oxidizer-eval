fn uu_fmt::linebreak::accum_words_simple(a0: &struct9, a1: void*, a2: u32, a3: u8, a4: void*) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: &struct_0;  // rbp
    let v3: void*;  // rbx
    let v5: u8;  // cl
    let v7: u64;  // r13
    let v8: u64;  // rax
    let v10: u64;  // r12
    let v11: u64;  // rbx
    let v12: u64;  // rbp
    let v13: u64;  // rax
    let v14: u32;  // rdx

    v0 = a4->field_28;
    v2 = a1->field_0;
    v3 = 0;
    v5 = a4->field_3a;
    if !(!a1->field_30) || !(!v5) {
        v3 = (v5 & a3 | a4->field_38) + 1;
    }
    v7 = a1->field_18;
    if a2 + v0 + uu_fmt::linebreak::BreakArgs::compute_width(v2, a4, a2, 0) + v3 <= v2->field_30 {
        v8 = uu_fmt::linebreak::write_with_spaces(*(&a4->field_10 as &i64), *(&a4->field_18 as &i64), v3, v7);
        return struct9 {
            field_0: v6
            field_8: v15 as u8
        };
    } else {
        v8 = uu_fmt::linebreak::write_newline(*(&a1->field_8 as &i64), *(&a1->field_10 as &i64), v7);
        if !v8 {
            v10 = *(&a4->field_10 as &i64);
            v11 = *(&a4->field_18 as &i64);
            v12 = a4->field_20;
            v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v12, v10, v11);
            if !v13 {
                core::str::slice_error_fail(v10, v11, v12, v11, "src/uu/fmt/src/linebreak.rs"); /* do not return */
            }
            v8 = uu_fmt::linebreak::write_with_spaces(v13, v14, 0, v7);
            return struct9 {
                field_0: v0 + a1->field_28
                field_8: v15 as u8
            };
        }
    }
    *(a0) = v8;
}
