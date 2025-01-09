fn uu_base32::base_common::format_read_error() -> u64 {
    let v0: struct1;  // [bp-0xd9]
    let v1: struct8;  // [sp-0xd8], Other Possible Types: i64
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0], Other Possible Types: Result<struct16, struct16>, struct32
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: i64;  // [sp-0xa8]
    let v8: i64;  // [sp-0xa0]
    let v9: i96;  // [sp-0x88], Other Possible Types: struct12
    let v10: i64;  // [sp-0x80]
    let v11: i128;  // [sp-0x78]
    let v12: i192;  // [sp-0x60], Other Possible Types: struct24
    let v13: i64;  // [sp-0x48]
    let v14: i64;  // [sp-0x40]
    let v15: i64;  // [sp-0x38]
    let v18: i64;  // r14
    let v19: struct8;  // rax
    let v20: i32;  // edx
    let v21: i32;  // edx
    let v22: i32;  // edx
    let v23: i256;  // ymm0
    let v24: i256;  // ymm1
    let v25: i128;  // xmm0
    let v26: i128;  // xmm1
    let v27: struct8;  // eax
    let v28: i64;  // rdi

    v0 = struct1 {
        field_0: v17
    };
    v12 = <T as alloc::string::ToString>::to_string(&v0);
    v18 = *((&v12 as &char + 16) as &i64);
    v4 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v18, 0);
    v1 = v5;
    v2 = v6;
    v3 = 0;
    v13 = *((&v12 as &char + 8) as &i64);
    v14 = v18 + v13;
    v15 = 0;
    v19 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
    if v20 != 0x110000 {
        do {
            v21 = v22;
            if v19 {
                v1 = alloc::string::String::push(v21);
            } else {
                v9 = core::unicode::unicode_data::conversions::to_upper(v21);
                v4 = core::char::CaseMappingIter::new(&v9);
                v25 = v4;
                v23 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
                v26 = *((&v4 as &char + 16) as &i128);
                v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
                v11 = v26;
                v9 = v25;
                loop {
                    v27 = <core::char::ToLowercase as core::iter::traits::iterator::Iterator>::next();
                    if v27 == 0x110000 {
                        break;
                    }
                    v1 = alloc::string::String::push(v27 as u64);
                }
            }
        } while ((v19 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(), v22 = v20, v20 != 0x110000));
    }
    v9 = &v1;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = "read error: ";
    v5 = 1;
    v8 = 0;
    v6 = &v9;
    v7 = 1;
    core::option::Option<T>::map_or_else();
    return v28;
}
