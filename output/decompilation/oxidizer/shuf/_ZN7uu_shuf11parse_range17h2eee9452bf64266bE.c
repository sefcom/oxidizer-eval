fn uu_shuf::parse_range(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: u8;  // [bp-0x69]
    let v1: u8;  // [bp-0x68]
    let v2: u8;  // [bp-0x67]
    let v3: u64;  // [bp-0x60]
    let v4: struct24;  // [bp-0x58]
    let v5: u64;  // [bp-0x48]
    let v6: core::option::Option<(&str, &str)>;  // [bp-0x40]
    let v7: u64;  // [bp-0x38]
    let v8: u64;  // [bp-0x30]
    let v10: u8;  // cl
    let v11: void*;  // rax
    let v12: u64;  // rax
    let v14: u64;  // rax
    let v15: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v16: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v6 = core::str::<impl str>::split_once(a1, a2, v10);
    match v6 {
        None => {
            v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, "missing '-'");
            return struct8 {
                field_0: 1
            };
        },
        Some(_) => {
            v15 = core::num::<impl usize>::from_ascii_radix(&v1, v6 as i64, v7 as u32);
            if !v1 {
                v16 = core::num::<impl usize>::from_ascii_radix(&v1, v8, *((&v6 as &char + 24) as &i64) as i32);
                if v1 != 1 {
                    v11 = 0;
                    return struct32 {
                        field_0: v12
                        field_8: v3
                        field_16: v3
                        field_24: 0
                    };
                }
            }
            v0 = v2;
            v4 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            return struct32 {
                field_0: 1
                field_8: v4.field_0
                field_24: v5
            };
        },
    }
}
