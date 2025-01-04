fn uu_head::parse::parse_num(a0: &Option<Result<struct32, struct17>>, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x50], Other Possible Types: Option<Result<struct32, struct16>>
    let v1: u64;  // [sp-0x48]
    let v3: u64;  // r15
    let v4: u32;  // rdx
    let v5: u64;  // rbp
    let v6: u8;  // bpl
    let v7: u64;  // r14
    let v8: u64;  // rax
    let v9: u128;  // xmm0

    v3 = core::str::<impl str>::trim_matches(a1, a2);
    v0 = v3;
    v1 = v3 + v4;
    if !core::str::validations::next_code_point(&v0) as i32 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&a0->padding_8 as &struct_0, a1, a2);
        a0->field_0 = 1;
        return struct32 {
            field_0: v9
            field_16: *((&v0 as &char + 16) as &i128)
        };
    }
    v5 = v4;
    if v4 == 43 || v5 == 45 {
        v3 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, v4);
        if !v3 {
            core::str::slice_error_fail(); /* do not return */
        }
        v6 = v5 | -0x100 | v5 == 45;
    } else {
        v6 = 0;
    }
    v8 = core::str::<impl str>::trim_start_matches(v3, v7);
    if !v4 {
        *(&a0->padding_8[0] as &i64) = 0;
    } else {
        v0 = uucore::parser::parse_size::parse_size_u64(v8, v4);
        if v0 as i32 != 3 {
            v9 = v0;
            return struct32 {
                field_0: v9
                field_16: *((&v0 as &char + 16) as &i128)
            };
        }
        a0->padding_8[0] = v1;
    }
    return struct32 {
        field_0: v9
        field_16: *((&v0 as &char + 16) as &i128)
    };
}
