fn uu_sort::FieldSelector::get_selection(a0: &struct25, a1: &u64, a2: u32, a3: u32, a4: void*, a5: u32) -> u64 {
    let v0: i200;  // [sp-0x60], Other Possible Types: struct25, struct9
    let v1: struct9;  // [bp-0x3c]
    let v4: i64;  // rax
    let v5: i64;  // rdx
    let v6: i64;  // rax
    let v8: i64;  // r8
    let v9: i64;  // 4096
    let v11: i64;  // r14
    let v12: i64;  // rax

    v4 = uu_sort::FieldSelector::get_range(a1, a2, a3, 0, a5);
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v4, v5, a2, a3);
    if !v6 {
        v8 = "src/uu/sort/src/sort.rs";
        goto LABEL_521caa;
    } else {
        a2 = v6;
        if *((a1 + 53) as &i8) < 2 {
            v1 = struct9 {
                field_0: 0x2e00110000
                field_8: (v7 as i8 == 1) as u8 as u8
            };
            v0 = uu_sort::numeric_str_cmp::NumInfo::parse(a2, v5, &v1);
            v4 = *((&v0 as &char + 16) as &i64);
            v11 = v0;
            core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v4, v11, a2, v9);
            return struct25 {
                field_0: v7
                field_8: v5
                field_16: v10
                field_24: 4
            };
            v8 = "src/uu/sort/src/sort.rs";
        } else {
            return struct17 {
                field_0: a2
                field_8: v5
                field_24: <UNKNOWN>
            };
            v4 = uu_sort::get_leading_gen(a2, v5);
            v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v4, v11, a2, v5);
            if !v12 {
                v8 = "src/uu/sort/src/sort.rs";
            } else {
                v0 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(v12, v5);
                if v0 {
                    goto LABEL_521cd4;
                } else if ((BinaryOp CmpF & 69) >> 2 & 1) {
LABEL_521cd4:
                }
                return struct17 {
                    field_0: v7
                    field_8: v13
                    field_24: <UNKNOWN>
                };
            }
LABEL_521caa:
        }
        core::str::slice_error_fail(a2, v9, v4, v11, v8); /* do not return */
    }
}
