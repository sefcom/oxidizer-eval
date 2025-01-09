fn uu_seq::numberparse::parse_hexadecimal(a0: &Result<struct56, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [bp-0x88], Other Possible Types: struct40, Result<struct25, struct1>
    let v1: i64;  // [bp-0x70]
    let v2: i64;  // [sp-0x58]
    let v3: i8;  // [sp-0x50]
    let v4: i128;  // [bp-0x4f]
    let v5: i64;  // [sp-0x40]
    let v6: i64;  // [sp-0x38]
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v10: i64;  // rdx
    let v11: i64;  // r14
    let v12: i64;  // r15
    let v13: i64;  // rax
    let v14: i8;  // cl
    let v17: i32;  // esi
    let v18: i64;  // rcx
    let v19: i64;  // rax
    let v20: i32;  // esi

    v0 = 0;
    v8 = core::slice::<impl [T]>::starts_with(a1, a2, core::char::methods::encode_utf8_raw(45, &v0), 1);
    if !v8 {
        v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, a1, a2);
    } else {
        v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(3, a1, a2);
    }
    v11 = v9;
    v12 = v10;
    v0 = 0;
    if core::slice::<impl [T]>::starts_with(v11, v12, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
        *((a0 + 8) as &i8) = 0;
    }
    v0 = 0;
    if !core::slice::<impl [T]>::starts_with(v11, v12, core::char::methods::encode_utf8_raw(43, &v0), 1) as i8 {
        v0 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(v11, v12, 16);
        v13 = v0;
        match v0 {
            Err(_) => {
                return Err(struct1 {
                    field_0: 2
                });
            },
            Ok(_) => {
                v14 = *((&v0 as &char + 8) as &i8);
                v5 = v1;
                v4 = *((&v0 as &char + 9) as &i128);
                v2 = v13;
                v3 = v14;
                v6 = 0;
                v0 = struct40 {
                    field_0: 0x80000000000000000
                    field_16: 0x10000000000000000
                    field_32: 0
                };
                if !v8 as i8 {
                    return Ok(struct56 {
                        field_0: v16
                        field_16: *((&v4 as &char + 7) as &i128)
                        field_32: v6
                        field_40: 0
                    });
                } else if !bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq(&v2, &v0) as i8 {
                    v17 = *((&v4 as &char + 15) as &i8) as u8 as u32;
                    v18 = a0 + 25;
                    v19 = a0 + 32;
                    *((a0 + 16) as &i64) = *((&v4 as &char + 7) as &i64);
                    *(a0 as &i64) = v2;
                    if !v17 {
                        *((a0 + 24) as &i8) = 2;
                    } else if v17 == 1 {
                        *((a0 + 24) as &i8) = 1;
                    } else {
                        *((a0 + 24) as &i8) = 0;
                    }
                    v20 = *((&v5 as &char + 1) as &i32);
                    *((v18 + 3) as &i32) = *((&v5 as &char + 4) as &i32);
                    *(v18 as &i32) = v20;
                    *(v19 as &i128) = 0;
                    *((v19 + 16) as &i64) = 0;
                }
            },
        }
    }
}
