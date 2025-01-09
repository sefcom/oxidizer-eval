fn uu_head::parse::parse_num(a0: &Option<Result<struct32, struct9>>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50], Other Possible Types: Option<Result<struct32, struct8>>
    let v1: i64;  // [sp-0x48]
    let v3: i64;  // r15
    let v4: i64;  // rdx
    let v6: i64;  // rax
    let v8: i64;  // r15
    let v9: i64;  // r14
    let v10: i64;  // rax

    v3 = core::str::<impl str>::trim_matches(a1, a2);
    v0 = v3;
    v1 = v3 + v4;
    if !core::str::validations::next_code_point(&v0) as i32 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a1, a2);
        return struct8 {
            field_0: 1
        };
    }
    if v4 as u32 == 43 || v4 as u32 == 45 {
        v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, v4);
        if !v6 {
            core::str::slice_error_fail(v3, v4, 1, v4, "src/uu/head/src/parse.rs"); /* do not return */
        }
        v8 = v6;
    } else {
        v8 = v3;
    }
    v10 = core::str::<impl str>::trim_start_matches(v8, v9, 48);
    return struct17 {
        field_0: 3
        field_8: 0
        field_16: v7
    };
    v0 = uucore::parser::parse_size::parse_size_u64(v10, v4);
    return struct17 {
        field_0: 3
        field_8: v1
        field_16: v7
    };
}
