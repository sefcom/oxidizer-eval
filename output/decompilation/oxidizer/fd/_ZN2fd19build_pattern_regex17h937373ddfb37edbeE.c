fn fd::build_pattern_regex(a0: i64, a1: void*, a2: u64, a3: u8, a4: u8) -> long long {
    let v0: struct24;  // [bp-0xf8], Other Possible Types: struct48
    let v1: Result<struct4, struct8>;  // [bp-0xf8]
    let v2: struct9;  // [bp-0xd8]
    let v3: struct24;  // [bp-0xc8], Other Possible Types: struct48, struct76
    let v4: struct24;  // [bp-0xc8]
    let v5: u128;  // [bp-0xa0]
    let v6: struct33;  // [bp-0x90]
    let v7: i64;  // [bp-0x80]
    let v8: struct20;  // [bp-0x78]
    let v9: Option<struct312>;  // [bp-0x60]
    let v10: struct32;  // [bp-0x58]
    let v11: u128;  // [bp-0x48]
    let v12: i64;  // [bp-0x40]
    let v13: struct16;  // [bp-0x38]
    let v14: struct33;  // [bp-0x28]
    let v15: core::option::Option<&str>;  // [bp-0x18]
    let v17: struct40;  // rax
    let v19: i64;  // rdi
    let v21: core::result::Result<u64, core::num::error::ParseIntError>;  // [bp-0xe8]

    if (a3 & a2) {
        v8 = struct20 {
            field_0: a1
            field_8: a2
            field_16: 0x10100
        };
        v3 = globset::glob::GlobBuilder::build(&v8);
        v17 = v3.field_0 as i64;
        v1 = *((&v3.field_0 as &char + 8) as &i128);
        v21 = *(&v3.field_24 as &i128);
        v2 = v5;
        if (((0 ^ v17) & (0 ^ -(v17))) >> 63) as char {
            v3 = v0;
            return struct16 {
                field_0: 0x8000000000000000
                field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v3)
            };
        }
        v15 = v7;
        v14 = v6;
        *(&v11 as &core::result::Result<u64, core::num::error::ParseIntError>) = v21;
        v10 = v1;
        v13 = v2;
        v9 = v17;
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12, v13.field_0);
        v0 = v4;
    } else {
        v19 = &v0 as u8;
        if (a4 & 1) {
            regex::escape(v19, a1, a2);
        } else {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v19, a1, a2);
        }
    }
    return v0;
}
