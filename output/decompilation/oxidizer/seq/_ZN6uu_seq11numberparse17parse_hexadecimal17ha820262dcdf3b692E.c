fn uu_seq::numberparse::parse_hexadecimal(a0: &Result<struct56, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [bp-0x88], Other Possible Types: struct40, Result<struct25, struct1>
    let v1: i64;  // [bp-0x70]
    let v2: struct25;  // [bp-0x58]
    let v3: i64;  // [sp-0x40]
    let v4: i64;  // [sp-0x38]
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // r14
    let v10: i64;  // r15
    let v15: i32;  // esi
    let v16: i64;  // rcx
    let v17: i64;  // rax
    let v18: i32;  // esi

    *(&v0 as &i32) = 0;
    v6 = core::slice::<impl [T]>::starts_with(a1, a2, core::char::methods::encode_utf8_raw(45, &v0), 1);
    if !v6 as u8 {
        v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, a1, a2);
    } else {
        v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(3, a1, a2);
    }
    v9 = v7;
    v10 = v8;
    *(&v0 as &i32) = 0;
    if core::slice::<impl [T]>::starts_with(v9, v10, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
        *((a0 + 8) as &i8) = 0;
    }
    *(&v0 as &i32) = 0;
    if !core::slice::<impl [T]>::starts_with(v9, v10, core::char::methods::encode_utf8_raw(43, &v0), 1) as i8 {
        v0 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(v9, v10, 16);
        match v0 {
            Err(_) => {
                return Err(struct1 {
                    field_0: 2
                });
            },
            Ok(_) => {
                v3 = v1;
                v2 = struct25 {
                    field_0: v11
                    field_8: v12
                    field_9: *((&v0 as &char + 9) as &i128)
                };
                v4 = 0;
                v0 = struct40 {
                    field_0: 0x80000000000000000
                    field_16: 0x10000000000000000
                    field_32: 0
                };
                if !v6 as u8 {
                    return Ok(struct56 {
                        field_0: v14
                        field_16: *((&v2.field_9 as &char + 7) as &i128)
                        field_32: v4
                        field_40: 0
                    });
                } else if !bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq(&v2, &v0) as i8 {
                    v15 = *((&v2.field_9 as &char + 15) as &i8) as u8 as u32;
                    v16 = a0 + 25;
                    v17 = a0 + 32;
                    *((a0 + 16) as &i64) = *((&v2.field_9 as &char + 7) as &i64);
                    *(a0 as &i128) = *(&v2.field_0 as &i128);
                    if !v15 {
                        *((a0 + 24) as &i8) = 2;
                    } else if v15 == 1 {
                        *((a0 + 24) as &i8) = 1;
                    } else {
                        *((a0 + 24) as &i8) = 0;
                    }
                    v18 = (&v2.field_9)[1] as i32;
                    *((v16 + 3) as &i32) = *((&v3 as &char + 4) as &i32);
                    *(v16 as &unsigned int) = v18;
                    *(v17 as &i128) = 0;
                    *((v17 + 16) as &i64) = 0;
                }
            },
        }
    }
}
