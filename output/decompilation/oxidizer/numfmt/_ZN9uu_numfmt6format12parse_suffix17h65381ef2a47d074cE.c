fn uu_numfmt::format::parse_suffix(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0xa0]
    let v1: core::fmt::rt::Argument;  // [bp-0x90]
    let v2: u64;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v5: std::io::stdio::Stdout;  // [bp-0x60], Other Possible Types: u8
    let v6: u64;  // [bp-0x58]
    let v7: u64;  // [bp-0x50]
    let v8: u8;  // [bp-0x48]
    let v11: u64;  // rbp
    let v12: u32;  // edx
    let v13: u8;  // r13b
    let v14: u64;  // r12
    let v15: u8;  // bpl
    let v18: core::option::Option<u32>;  // rax:rax
    let v19: &mut [u8];  // rax:rdx
    let v20: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rax:rdx
    let v21: core::option::Option<u32>;  // rax:rax

    if !a2 {
        return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "invalid number: ''");
    }
    v1 = 0;
    v19 = core::char::methods::encode_utf8_raw(105, &v1 as u64, a2);
    v11 = core::slice::<impl [T]>::ends_with(a1, a2, v19.data_ptr, 1);
    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    if v11 {
        v18 = core::str::validations::next_code_point_reverse(&v0) as u128;
    }
    v21 = core::str::validations::next_code_point_reverse(&v0) as u128;
    match v21 {
        None => {
            v5 = 0;
            v6 = a1;
            v7 = a2;
            v8 = 1;
            return format!("invalid suffix in input: {}", &v5);
        },
        Some(_) => {
            match (v12) {
                69 => {
                    break;
                }
                _ => {
                    if v11 as u8 || v12 - 58 < -10 {
                        v5 = 0;
                        v6 = a1;
                        v7 = a2;
                        v8 = 1;
                        return format!("invalid suffix in input: {}", &v5);
                    }
                }
            }
            v20 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v5, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v14 + a2, a1, a2) as u64);
            if !v5 {
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: v3
                    field_16: v13
                    field_17: v15
                };
            }
            uu_numfmt::format::parse_suffix::{{closure}}(&v1 as u64, a1, a2);
            if v2 != 0x8000000000000000 {
                return struct24 {
                    field_0: v2
                    field_8: v3
                    field_16: v4
                };
            }
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v3
                field_16: v13
                field_17: v15
            };
        },
    }
}
