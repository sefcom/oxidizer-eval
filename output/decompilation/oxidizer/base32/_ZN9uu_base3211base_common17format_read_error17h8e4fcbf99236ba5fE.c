fn uu_base32::base_common::format_read_error() -> u64 {
    let v0: struct1;  // [bp-0xd9]
    let v1: struct8;  // [sp-0xd8], Other Possible Types: unsigned long
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: struct32;  // [sp-0xc0], Other Possible Types: Result<struct16, struct16>
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: iNone;  // [sp-0x88], Other Possible Types: struct12
    let v8: iNone;  // [sp-0x78]
    let v9: struct24;  // [sp-0x60]
    let v10: i64;  // [sp-0x48]
    let v11: i64;  // [sp-0x40]
    let v12: i64;  // [sp-0x38]
    let v15: i64;  // r14
    let v16: struct8;  // rax
    let v17: i32;  // edx
    let v18: i32;  // edx
    let v19: i32;  // edx
    let v20: iNone;  // ymm0
    let v21: iNone;  // ymm1
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm1
    let v24: struct8;  // eax
    let v25: i64;  // rdi

    v0 = struct1 {
        field_0: v14
    };
    v9 = <T as alloc::string::ToString>::to_string(&v0);
    v15 = v9.field_16;
    v4 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v15, 0);
    v1 = v5;
    v2 = v6;
    v3 = 0;
    v10 = *((&v9.field_0 as &char + 8) as &i64);
    v11 = v15 + v10;
    v12 = 0;
    v16 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
    if v17 != 0x110000 {
        do {
            v18 = v19;
            if v16 {
                v1 = alloc::string::String::push(v18 as u64);
            } else {
                v7 = core::unicode::unicode_data::conversions::to_upper(v18 as u64);
                v4 = core::char::CaseMappingIter::new(&v7);
                v22 = *(&v4.field_0 as &i128);
                v20 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256;
                v23 = *(&v4.field_16 as &i128);
                v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256;
                v8 = v23;
                v7 = v22;
                loop {
                    v24 = <core::char::ToLowercase as core::iter::traits::iterator::Iterator>::next();
                    if v24 == 0x110000 {
                        break;
                    }
                    v1 = alloc::string::String::push(v24 as u64);
                }
            }
        } while ((v16 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(), v19 = v17, v17 != 0x110000));
    }
    format!("read error: {}", &v1);
    return v25;
}
