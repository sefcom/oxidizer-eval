fn uu_seq::numberparse::parse_hexadecimal(a1: i64, a2: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x88]
    let v1: Result<struct25, struct9>;  // [bp-0x88]
    let v2: u8;  // [bp-0x80]
    let v3: u64;  // [bp-0x70]
    let v4: u64;  // [bp-0x58]
    let v5: u8;  // [bp-0x50]
    let v6: u64;  // [bp-0x48]
    let v7: u64;  // [bp-0x40]
    let v8: u32;  // [bp-0x3c]
    let v9: struct24;  // [bp-0x38]
    let v11: u8;  // al
    let v12: core::option::Option<&str>;  // rax
    let v14: u64;  // rdx
    let v16: u64;  // rax
    let v17: i64;  // rdi
    let v18: u8;  // al
    let v19: i64;  // rdi
    let v20: u128;  // xmm0
    let v21: i64;  // rdi
    let v22: u32;  // esi
    let v23: i64;  // rdi
    let v24: u64;  // rcx
    let v25: u64;  // rax
    let v26: u32;  // esi
    let v28: &mut [u8];  // rax:rdx
    let v29: &mut [u8];  // rax:rdx
    let v30: &mut [u8];  // rax:rdx

    v0 = 0;
    v28 = core::char::methods::encode_utf8_raw(45, &v0, a1);
    v11 = core::slice::<impl [T]>::starts_with();
    if v11 {
        v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(3, a0, a1) as u64;
    } else {
        v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, a0, a1) as u64;
    }
    v0 = 0;
    v29 = core::char::methods::encode_utf8_raw(45, &v0, v14);
    if core::slice::<impl [T]>::starts_with() || (v0 = 0, v30 = core::char::methods::encode_utf8_raw(43, &v0, a1), core::slice::<impl [T]>::starts_with() as u8) {
        *((v17 + 8) as &i8) = 0;
    } else {
        v1 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(v12, v14);
        v16 = v1 as i64;
        if v16 == 0x8000000000000000 {
            *((v17 + 8) as &i8) = 2;
        } else {
            v7 = v3;
            memcpy(&v1 as u8, &v1 as u8, 16);
            v4 = v16;
            v5 = v2;
            v9 = 0;
            v0 = struct40 {
                field_0: 0x80000000000000000
                field_16: 0x10000000000000000
                field_32: 0
            };
            v18 = bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq(&v4, &v0) as i8;
            if !v11 {
                *((v19 + 32) as &i64) = 0;
                v20 = *((&v1 as &char + 48) as &i128);
                *((v19 + 16) as &i128) = *((&v1 as &char + 64) as &i128);
                *(v19 as &u128) = v20;
                *((v19 + 40) as &i128) = 0;
            } else if v18 {
                *(v21 as &i64) = 9223372036854775810;
                *((v21 + 40) as &i64) = 2;
                *((v21 + 48) as &i64) = 0;
            } else {
                v22 = v7;
                v24 = v23 + 25;
                v25 = v23 + 32;
                *((v23 + 16) as &u64) = v6;
                *(v23 as &i128) = *((&v1 as &char + 48) as &i128);
                if !v22 {
                    *((v23 + 24) as &i8) = 2;
                } else if v22 == 1 {
                    *((v23 + 24) as &i8) = 1;
                } else {
                    *((v23 + 24) as &i8) = 0;
                }
                v26 = *((&v7 as &char + 1) as &i32);
                *((v24 + 3) as &u32) = v8;
                *(v24 as &u32) = v26;
                *(v25 as &i128) = 0;
                *((v25 + 16) as &i64) = 0;
            }
            return;
        }
    }
    *(v17 as &i64) = 9223372036854775812;
    return;
}
