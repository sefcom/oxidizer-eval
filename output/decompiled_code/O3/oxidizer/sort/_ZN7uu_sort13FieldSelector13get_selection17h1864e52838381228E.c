fn uu_sort::FieldSelector::get_selection(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i200;  // [sp-0x60], Other Possible Types: struct25, struct9
    let v1: struct9;  // [bp-0x3c]
    let v3: i64;  // cc_ndep
    let v4: i64;  // rdx
    let v5: i64;  // rax
    let v6: i64;  // r15
    let v7: i64;  // rax
    let v8: i64;  // r12
    let v9: i64;  // rax
    let v10: i64;  // xmm0lq

    v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(uu_sort::FieldSelector::get_range(a1, a2, a3, 0, a5), v4, a2, a3);
    if !v5 {
        goto LABEL_520d38;
    }
    v6 = v5;
    v7 = *((a1 + 53) as &i8);
    if v7 < 2 {
        v1 = struct9 {
            field_0: 0x2e00110000
            field_8: (v7 as i8 == 1) as u8 as u8
        };
        v0 = uu_sort::numeric_str_cmp::NumInfo::parse(v6, v4, &v1);
        v8 = v0;
        v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(*((&v0 as &char + 16) as &i64), v0, v6, v4);
        if !v7 {
            goto LABEL_520d38;
        } else {
            a0 = a0;
            *(a0 as &i64) = v7;
            *((a0 + 8) as &i64) = v4;
            *((a0 + 16) as &i64) = v8;
        }
    } else if v7 != 2 {
        a0 = a0;
        *(a0 as &i64) = v6;
        *((a0 + 8) as &i64) = v4;
    } else {
        v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(uu_sort::get_leading_gen(v6, v4, v4), v4, v6, v4);
        if !v9 {
LABEL_520d38:
            core::str::slice_error_fail(); /* do not return */
        }
        v0 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(v9, v4);
        if v0 {
            v7 = 0;
            goto LABEL_520ca6;
        } else {
            v10 = v0;
            if !((BinaryOp CmpF & 69) >> 2 & 1) {
                v7 = ((BinaryOp CmpF & 69 & 1) ? 4 - (amd64g_calculate_rflags_c(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v3) & 1) : 2);
            } else {
                v7 = 1;
LABEL_520ca6:
            }
        }
        *(a0 as &i64) = v7;
        *((a0 + 8) as &i64) = v10;
    }
    *((a0 + 24) as &i8) = 4;
    return v7;
}
