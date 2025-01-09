fn uu_seq::numberparse::parse_hexadecimal(a0: &Result<struct56, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [bp-0x88], Other Possible Types: Result<struct25, struct1>, struct40
    let v1: i64;  // [bp-0x70]
    let v2: i64;  // [bp-0x58]
    let v3: i8;  // [sp-0x50]
    let v4: i128;  // [bp-0x4f]
    let v6: i64;  // [bp-0x40]
    let v9: i64;  // [sp-0x38]
    let v15: i64;  // rax
    let v17: i64;  // r8
    let v18: i64;  // rdx
    let v19: i64;  // rdx
    let v20: i64;  // r14
    let v21: i64;  // r15
    let v22: i64;  // rax
    let v23: i8;  // cl
    let v24: i8;  // al

    v0 = 0;
    if !core::slice::<impl [T]>::starts_with(a1, a2, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
        v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, a1, a2);
        if !v15 {
            v17 = "src/uu/seq/src/numberparse.rs";
            v18 = 2;
            goto LABEL_4ce45e;
        }
    } else {
        v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(3, a1, a2);
        if !v15 {
            v17 = "src/uu/seq/src/numberparse.rs";
            v18 = 3;
LABEL_4ce45e:
            core::str::slice_error_fail(a1, a2, v18, a2, v17); /* do not return */
        }
    }
    v20 = v15;
    v21 = v19;
    v0 = 0;
    if core::slice::<impl [T]>::starts_with(v20, v21, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
        return Err(struct1 {
            field_0: 0
        });
    }
    v0 = 0;
    if !core::slice::<impl [T]>::starts_with(v20, v21, core::char::methods::encode_utf8_raw(43, &v0), 1) as i8 {
        v0 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(v20, v21, 16);
        v22 = v0;
        match v0 {
            Ok(_) => {
                v23 = *((&v0 as &char + 8) as &i8);
                v6 = v1;
                v4 = *((&v0 as &char + 9) as &i128);
                v2 = v22;
                v3 = v23;
                v9 = 0;
                v0 = struct40 {
                    field_0: 0x80000000000000000
                    field_16: 0x10000000000000000
                    field_32: 0
                };
                v24 = bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq(&v2, &v0) as i8;
                return Ok(struct56 {
                    field_0: v25
                    field_16: *((&v4 as &char + 7) as &i128)
                    field_32: v9
                    field_40: 0
                });
            },
            Err(_) => {
                return Err(struct1 {
                    field_0: 2
                });
            },
        }
    }
}
