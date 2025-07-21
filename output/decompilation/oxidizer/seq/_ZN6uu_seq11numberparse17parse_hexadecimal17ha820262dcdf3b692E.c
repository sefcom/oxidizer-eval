fn uu_seq::numberparse::parse_hexadecimal(a1: i64, a2: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: struct40;  // [bp-0x88], Other Possible Types: u32
    let v1: Result<struct25, struct9>;  // [bp-0x88]
    let v2: u8;  // [bp-0x80]
    let v3: u64;  // [bp-0x70]
    let v4: u64;  // [bp-0x58]
    let v5: u8;  // [bp-0x50]
    let v6: u128;  // [bp-0x4f]
    let v7: u64;  // [bp-0x48]
    let v8: u64;  // [bp-0x40]
    let v9: u32;  // [bp-0x3c]
    let v10: struct24;  // [bp-0x38]
    let v12: u8;  // al
    let v13: core::option::Option<&str>;  // rax
    let v15: u64;  // rdx
    let v17: u64;  // rax
    let v18: i64;  // rdi
    let v19: u8;  // al
    let v20: i64;  // rdi
    let v21: core::fmt::rt::Argument;  // xmm0
    let v22: i64;  // rdi
    let v23: u32;  // esi
    let v24: i64;  // rdi
    let v25: u64;  // rcx
    let v26: u64;  // rax
    let v27: u32;  // esi
    let v29: &mut [u8];  // rax:rdx
    let v30: &mut [u8];  // rax:rdx
    let v31: &mut [u8];  // rax:rdx

    v0 = 0;
    v30 = core::char::methods::encode_utf8_raw(45, &v0, a1);
    v12 = core::slice::<impl [T]>::starts_with();
    if v12 {
        v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(3, a0, a1) as u64;
    } else {
        v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, a0, a1) as u64;
    }
    v0 = 0;
    v29 = core::char::methods::encode_utf8_raw(45, &v0, v15);
    if core::slice::<impl [T]>::starts_with() || (v0 = 0, v31 = core::char::methods::encode_utf8_raw(43, &v0, a1), core::slice::<impl [T]>::starts_with() as u8) {
        *((v18 + 8) as &i8) = 0;
    } else {
        v1 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(v13, v15);
        v17 = v1 as i64;
        if v17 == 0x8000000000000000 {
            *((v18 + 8) as &i8) = 2;
        } else {
            v8 = v3;
            v6 = *((&v1 as &char + 9) as &i128);
            v4 = v17;
            v5 = v2;
            v10 = 0;
            v0 = struct40 {
                field_0: 0x80000000000000000
                field_16: 0x10000000000000000
                field_32: 0
            };
            v19 = bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq(&v4, &v0) as i8;
            if !v12 {
                *((v20 + 32) as &i64) = 0;
                v21 = *(&v4 as &i128);
                *((v20 + 16) as &i128) = *((&v6 as &char + 7) as &i128);
                *(v20 as &core::fmt::rt::Argument) = v21;
                *((v20 + 40) as &i128) = 0;
            } else if v19 {
                *(v22 as &i64) = 9223372036854775810;
                *((v22 + 40) as &i64) = 2;
                *((v22 + 48) as &i64) = 0;
            } else {
                v23 = *((&v6 as &char + 15) as &i8);
                v25 = v24 + 25;
                v26 = v24 + 32;
                *((v24 + 16) as &u64) = v7;
                *(v24 as &i128) = *(&v4 as &i128);
                if !v23 {
                    *((v24 + 24) as &i8) = 2;
                } else if v23 == 1 {
                    *((v24 + 24) as &i8) = 1;
                } else {
                    *((v24 + 24) as &i8) = 0;
                }
                v27 = *((&v8 as &char + 1) as &i32);
                *((v25 + 3) as &u32) = v9;
                *(v25 as &u32) = v27;
                *(v26 as &i128) = 0;
                *((v26 + 16) as &i64) = 0;
            }
            return;
        }
    }
    *(v18 as &i64) = 9223372036854775812;
    return;
}
