fn uu_head::parse::parse_num(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x48]
    let v1: i8;  // [bp-0x40]
    let v4: u64;  // rdx
    let v5: u64;  // rax
    let v7: u8;  // bpl
    let v8: u64;  // r14
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u128;  // xmm0
    let v13: u64;  // rax
    let v14: core::option::Option<u32>;  // rax:rax
    let v15: &str;  // rax:rdx

    v15 = core::str::<impl str>::trim_matches(a1, a2, a2);
    v0 = &v15.data_ptr[v15.length];
    v14 = core::str::validations::next_code_point(&v15.data_ptr) as u128;
    match v14 {
        None => {
            v13 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a1, a2) as u64;
            return struct8 {
                field_0: 1
            };
        },
        Some(_) => {
            if v4 as u32 == 43 || v4 as u32 == 45 {
                v7 = (v4 as u32 == 45) as u8 as u8;
                v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v15.data_ptr, v15.length, a2) as u64;
            }
            v9 = core::str::<impl str>::trim_start_matches(v5, v8);
            if !v4 {
                return struct24 {
                    field_0: 4
                    field_8: 0
                    field_16: v7
                };
            }
            v10 = uucore::features::parser::parse_size::parse_size_u64_max(&v15.data_ptr, v9, a2);
            if v15.data_ptr as i32 != 4 {
                v12 = *(&v15.data_ptr as &i128);
                return struct32 {
                    field_0: v12
                    field_16: *(&v1 as &i128)
                };
            }
            v11 = v0;
            *((a0 + 8) as &u64) = v0;
        },
    }
}
