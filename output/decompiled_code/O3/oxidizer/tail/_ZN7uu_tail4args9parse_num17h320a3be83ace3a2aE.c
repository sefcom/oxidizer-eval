fn uu_tail::args::parse_num(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i256;  // [sp-0x58], Other Possible Types: Option<Result<struct32, struct16>>
    let v1: i64;  // [sp-0x50]
    let v2: struct24;  // [sp-0x38], Other Possible Types: i192
    let v4: i64;  // r15
    let v5: i64;  // rdx
    let v6: i8;  // bpl
    let v7: i64;  // r14
    let v8: i64;  // rax
    let v9: i64;  // rax

    v4 = core::str::<impl str>::trim_matches(a1, a2);
    v0 = v4;
    v1 = v5 + v4;
    if !core::str::validations::next_code_point(&v0) as i32 {
LABEL_4faf9b:
        v6 = 0;
        goto LABEL_4fafbc;
    } else {
        if v5 as u32 == 43 {
            v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v4, v5);
            if !v4 {
                core::str::slice_error_fail(); /* do not return */
            }
            v6 = vvar_49{reg 56} | -0x100 | 1;
        } else {
            if !(v5 as u32 == 45) {
                goto LABEL_4faf9b;
            }
            v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v4, v5);
            if !v4 {
                core::str::slice_error_fail(); /* do not return */
            }
            v6 = 0;
        }
LABEL_4fafbc:
        v0 = uucore::parser::parse_size::parse_size_u64(v4, v7);
        if v0 != 3 {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(v4, v7);
            *((a0 + 24) as &i64) = *((&v2 as &char + 16) as &i64);
            *((a0 + 8) as &i192) = v2;
            v9 = 1;
        } else {
            v8 = v1;
            if v8 {
                if !v6 {
                    *((a0 + 8) as &i64) = 0;
                    *((a0 + 16) as &i64) = v8;
                } else {
                    *((a0 + 8) as &i64) = 1;
                    *((a0 + 16) as &i64) = v8;
                }
            } else {
                if v6 {
                    *((a0 + 8) as &i64) = 2;
                } else {
                    *((a0 + 8) as &i64) = 3;
                }
            }
            v9 = 3;
        }
        *(a0 as &i64) = v9;
    }
}
