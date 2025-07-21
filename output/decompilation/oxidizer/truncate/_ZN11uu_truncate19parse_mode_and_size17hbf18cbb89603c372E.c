fn uu_truncate::parse_mode_and_size(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x188]
    let v1: core::fmt::Arguments;  // [bp-0x60]
    let v2: struct32;  // [bp-0x58]
    let v3: u32;  // [bp-0x50]
    let v4: u128;  // [bp-0x48]
    let v5: u128;  // [bp-0x38]
    let v6: i8;  // [bp-0x28]
    let v8: u64;  // rdx
    let v10: i64;  // rdi
    let v11: core::option::Option<&str>;  // rax
    let v12: u64;  // r14
    let v13: u64;  // rdi
    let v14: u128;  // xmm0
    let v15: i64;  // rdi
    let v16: i64;  // rdi
    let v17: core::option::Option<u32>;  // rax:rax
    let v18: &str;  // rax:rdx

    v18 = core::str::<impl str>::trim_matches(a0, a1);
    v1 = &v18.data_ptr[v18.length];
    v17 = core::str::validations::next_code_point(&v18.data_ptr) as u128;
    match v17 {
        None => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(v18.data_ptr, v18.length, a2);
            *(v10 as &i64) = 1;
            *((v10 + 8) as &u128) = v5;
            *((v10 + 24) as &i64) = *(&v6 as &i64);
            return;
        },
        Some(_) => {
            if v8 as u32 <= 62 {
                v0 = 0x5000a82000000000;
                if ((*((&v0 as &u8 + ((v8 as u32 & 63) as u64 >> 3)) as &i8) as u8 as u64 >> (v8 as u32 as u8 & 63 & 7) as u64) as u8 & 1) {
                    core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v18.data_ptr, v18.length, a1);
                }
            }
            v2 = uucore::parser::parse_size::parse_size_u64(v11, v12);
            match (v8 as u32) {
                37 => {
                    if v2.field_0 as i32 != 3 {
                        v14 = v2.field_0;
                        *((v15 + 16) as &u128) = v4;
                        *(v15 as &u128) = v14;
                        return;
                    }
                    break;
                }
                43 => {
                    if v2.field_0 as i32 != 3 {
                        v14 = v2.field_0;
                        *((v15 + 16) as &u128) = v4;
                        *(v15 as &u128) = v14;
                        return;
                    }
                    break;
                }
                45 => {
                    if v2.field_0 as i32 != 3 {
                        v14 = v2.field_0;
                        *((v15 + 16) as &u128) = v4;
                        *(v15 as &u128) = v14;
                        return;
                    }
                    break;
                }
                47 => {
                    break;
                }
                60 => {
                    if v2.field_0 as i32 != 3 {
                        v14 = v2.field_0;
                        *((v15 + 16) as &u128) = v4;
                        *(v15 as &u128) = v14;
                        return;
                    }
                    break;
                }
                62 => {
                    if v2.field_0 as i32 != 3 {
                        v14 = v2.field_0;
                        *((v15 + 16) as &u128) = v4;
                        *(v15 as &u128) = v14;
                        return;
                    }
                    break;
                }
                _ => {
                    if v2.field_0 as i32 != 3 {
                        v14 = v2.field_0;
                        *((v15 + 16) as &u128) = v4;
                        *(v15 as &u128) = v14;
                        return;
                    }
                }
            }
            *((v16 + 8) as &u64) = core::ops::function::FnOnce::call_once(v13, v3) as u64;
            *((v16 + 16) as &u64) = v8;
            *(v16 as &i64) = 3;
            return;
        },
    }
}
