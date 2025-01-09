fn uu_truncate::parse_mode_and_size(a0: &Result<struct32, struct24>, a1: u64, a2: u64) -> u64 {
    let v0: i64;  // [sp-0x188]
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60]
    let v3: i8;  // [bp-0x58]
    let v4: i8;  // [bp-0x50]
    let v6: struct24;  // [sp-0x38]
    let v8: i64;  // r15
    let v9: i64;  // rdx
    let v10: i64;  // r15
    let v12: i64;  // rax
    let v13: i64;  // r14
    let v15: i64;  // rdi

    v8 = core::str::<impl str>::trim_matches(a1, a2);
    v1 = v8;
    v2 = v9 + v8;
    if !core::str::validations::next_code_point(&v1) as i32 {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v8, v9);
        return Err(struct24 {
            field_0: v6
            field_16: v11
        });
    }
    if v9 as u32 <= 62 {
        v0 = 0x5000a82000000000;
        if (*((&v0 as &u8 + ((v9 as u32 & 63) >> 3)) as &i8) >> (v9 as u32 & 63 & 7) & 1) {
            v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v8, v9);
            if !v12 {
                core::str::slice_error_fail(v8, v9, 1, v9, "src/uu/truncate/src/truncate.rs"); /* do not return */
            }
        }
    }
    uucore::parser::parse_size::parse_size_u64(v10, v13);
    v15 = uu_truncate::TruncateMode::Absolute;
    switch (v9 as u32) {
    case 37:
        v15 = uu_truncate::TruncateMode::RoundUp;
        if v3 != 3 {
            return Ok(struct32 {
                field_0: v16
                field_16: v5
            });
        }
    case 43:
        v15 = uu_truncate::TruncateMode::Extend;
        if v3 != 3 {
            return Ok(struct32 {
                field_0: v16
                field_16: v5
            });
        }
    case 45:
        v15 = uu_truncate::TruncateMode::Reduce;
        if v3 != 3 {
            return Ok(struct32 {
                field_0: v16
                field_16: v5
            });
        }
    case 47:
        v15 = uu_truncate::TruncateMode::RoundDown;
        goto LABEL_4ae4aa;
    case 60:
        v15 = uu_truncate::TruncateMode::AtMost;
        if v3 != 3 {
            return Ok(struct32 {
                field_0: v16
                field_16: v5
            });
        }
    case 62:
        v15 = uu_truncate::TruncateMode::AtLeast;
        if v3 != 3 {
            return Ok(struct32 {
                field_0: v16
                field_16: v5
            });
        }
    default:
LABEL_4ae4aa:
        if v3 != 3 {
            return Ok(struct32 {
                field_0: v16
                field_16: v5
            });
        }
    }
    core::ops::function::FnOnce::call_once(v15, v4);
    return struct24 {
        field_0: 3
        field_8: v11
        field_16: v9
    };
}
