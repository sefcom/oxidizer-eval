fn uu_head::parse::parse_num(a0: &Option<Result<struct32, struct9>>, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x50], Other Possible Types: Option<Result<struct32, struct8>>
    let v1: u64;  // [sp-0x48]
    let v3: u64;  // r15
    let v4: u32;  // rdx
    let v5: u64;  // r14
    let v6: u64;  // rbp
    let v7: u8;  // bpl
    let v8: u64;  // rax
    let v9: u128;  // xmm0

    v3 = core::str::<impl str>::trim_matches(a1, a2);
    v5 = v4;
    v0 = v3;
    v1 = v3 + v4;
    if !core::str::validations::next_code_point(&v0) as i32 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&a0->field_8, a1, a2);
        return struct8 {
            field_0: 1
        };
    }
    v6 = v4;
    if v4 == 43 || v6 == 45 {
        v7 = v6 & -0x100 | v6 == 45;
        v3 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, v4);
        v5 = v4;
    } else {
        v7 = 0;
    }
    v8 = core::str::<impl str>::trim_start_matches(v3, v5, 48);
    if !v4 {
        return struct17 {
            field_0: 3
            field_8: 0
            field_16: v7
        };
    }
    v0 = uucore::parser::parse_size::parse_size_u64(v8, a2);
    if v0 as i32 != 3 {
        v9 = v0 as i128;
        return Some(struct32 {
            field_0: v9
            field_16: *((&v0 as &char + 16) as &i128)
        });
    }
    a0->field_8 = v1;
}
