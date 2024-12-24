fn uu_base32::base_common::format_read_error(a0: u32, a1: u8) -> u64 {
    let v0: struct1;  // [bp-0xd9]
    let v1: struct8;  // [sp-0xd8], Other Possible Types: i64
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: struct32;  // [sp-0xc0], Other Possible Types: Result<struct16, struct24>, i256
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: i96;  // [sp-0x88], Other Possible Types: struct12
    let v8: i128;  // [sp-0x78]
    let v9: struct24;  // [sp-0x60], Other Possible Types: i192
    let v10: i64;  // [sp-0x48]
    let v11: i64;  // [sp-0x40]
    let v12: i64;  // [sp-0x38]
    let v14: i64;  // r14
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: struct8;  // rax
    let v18: i64;  // rdx
    let v19: i64;  // rdx
    let v20: i256;  // ymm0
    let v21: i256;  // ymm1
    let v22: i128;  // xmm0
    let v23: i128;  // xmm1
    let v24: struct8;  // eax
    let v25: i64;  // rsi

    v0 = struct1 {
        field_0: a1
    };
    v9 = <T as alloc::string::ToString>::to_string(&v0);
    v14 = *((&v9 as &char + 16) as &i64);
    v4 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v14, 0);
    v1 = v5;
    v2 = v6;
    v3 = 0;
    v10 = *((&v9 as &char + 8) as &i64);
    v11 = v14 + v10;
    v12 = 0;
    v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v15, v16);
    if v16 == 0x110000 {
        format!("read error: {:?}", &v1);
        return a0;
    }
    do {
        v18 = v19;
        if v17 {
            v1 = alloc::string::String::push(v18 & 4294967295, v18);
        } else {
            v7 = core::unicode::unicode_data::conversions::to_upper(v18 & 4294967295);
            v4 = core::char::CaseMappingIter::new(&v7, v16);
            v22 = v4;
            v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
            v23 = *((&v4 as &char + 16) as &i128);
            v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
            v8 = v23;
            v7 = v22;
            loop {
                v24 = <core::char::ToLowercase as core::iter::traits::iterator::Iterator>::next();
                if v24 == 0x110000 {
                    break;
                }
                v1 = alloc::string::String::push(v24 as u64, v16);
            }
        }
    } while ((v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v25, v16), v16 as i32 != 0x110000));
}
