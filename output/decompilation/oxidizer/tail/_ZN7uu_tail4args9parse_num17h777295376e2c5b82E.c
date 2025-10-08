fn uu_tail::args::parse_num(a1: &str) -> : struct32 {
    let a0: void*;  // rdi
    let v0: u64;  // [bp-0x50]
    let v1: struct24;  // [bp-0x38]
    let v3: u64;  // rdx
    let v4: u64;  // rax
    let v5: core::option::Option<&str>;  // rax
    let v6: u8;  // bpl
    let v7: u64;  // rdx
    let v9: alloc::string::String;  // r15
    let v10: u64;  // rax
    let v11: &str;  // rax:rdx
    let v12: core::option::Option<u32>;  // rax:rax

    v11 = core::str::<impl str>::trim_matches(a1, v3);
    v0 = &v11.data_ptr[v11.length];
    v12 = core::str::validations::next_code_point(&v11.data_ptr) as u128;
    if let Some(_) = v12 {
        match (v3 as u32) {
            43 => {
                v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v11.data_ptr, v11.length) as u64;
            }
            45 => {
                v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v11.data_ptr, v11.length) as u64;
            }
            _ => {
                goto LABEL_4a0136;
            }
        }
    }
LABEL_4a0136:
    v9 = v5;
    uucore::features::parser::parse_size::parse_size_u64(&v11.data_ptr, v9, v7);
    if v11.data_ptr as i32 != 4 {
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, v7);
        *(&a0[24] as &u64) = v1.field_16;
        *(&a0[8] as &i128) = *(&v1.field_0 as &i128);
        v10 = 1;
    } else if v0 {
        if v6 {
            return struct24 {
                field_0: v4
                field_8: 1
                field_16: v0
            };
        }
        *(&a0[8] as &i64) = 0;
        *(&a0[16] as &u64) = v0;
    } else {
        if v6 {
            *(&a0[8] as &i64) = 2;
        }
        *(&a0[8] as &i64) = 3;
    }
}
