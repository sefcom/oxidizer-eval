fn uu_seq::numberparse::parse_hexadecimal(a0: &u64, a1: &u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i8;  // [sp-0xa8]
    let v2: i32;  // [bp-0xa7]
    let v3: i32;  // [sp-0xa4]
    let v4: i64;  // [sp-0xa0]
    let v5: i8;  // [sp-0x98]
    let v6: i8;  // [bp-0x97]
    let v7: i32;  // [bp-0x94]
    let v8: i64;  // [sp-0x90]
    let v9: i72;  // [sp-0x88], Other Possible Types: Enum
    let v10: i8;  // [bp-0x7f]
    let v11: i8;  // [bp-0x7c]
    let v12: i8;  // [bp-0x78]
    let v13: i64;  // [sp-0x68]
    let v14: struct17;  // [bp-0x58]
    let v15: struct17;  // [bp-0x40]
    let v17: i8;  // bpl
    let v18: i64;  // rax
    let v19: i64;  // rdx
    let v20: i32;  // eax
    let v21: i64;  // rax
    let v22: i8;  // cl
    let v25: i128;  // xmm0
    let v26: i64;  // rcx
    let v27: i64;  // rax
    let v28: i32;  // esi

    if !a2 {
LABEL_49813c:
        goto LABEL_498124;
    } else {
        v17 = *(a1 as &i8);
        if v17 == 45 {
            if a2 < 4 {
                if !(a2 == 3) {
                    goto LABEL_498124;
                }
LABEL_497f9b:
                v18 = 3;
                v19 = -3;
            } else {
                if !(*((a1 + 3) as &i8) <= 191) {
                    goto LABEL_497f9b;
                }
LABEL_498124:
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if a2 >= 3 {
                if !(*((a1 + 2) as &i8) <= 191) {
                    goto LABEL_497fbd;
                }
                goto LABEL_49813c;
            } else {
                if !(a2 == 2) {
                    goto LABEL_49813c;
                }
LABEL_497fbd:
                v18 = 2;
                v19 = -2;
            }
        }
        if v19 + a2 {
            v20 = *((a1 + v18) as &i8);
            if !(v20 != 43) || !(v20 != 45) {
                *((a0 + 8) as &i8) = 0;
                *(a0 as &i64) = 9223372036854775812;
                return a0;
            }
        }
        v9 = num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(a1 + v18, v19 + a2, 16);
        v21 = v9;
        if v0 == 0x8000000000000000 {
            *((a0 + 8) as &i8) = 2;
            *(a0 as &i64) = 9223372036854775812;
            return a0;
        }
        v22 = *((&v9 as &char + 8) as &i8);
        v3 = v11;
        v2 = v10;
        v0 = v21;
        v1 = v22;
        v4 = v12;
        v5 = 2 - (v4 < 1);
        v8 = 0;
        v12 = 0x10000000000000000;
        v9 = 0x80000000000000000;
        v13 = 0;
        v14 = struct17 {
            field_0: &v0
            field_8: 0
            field_16: 2 - (v23 < 1) as u8 as u8
        };
        v15 = struct17 {
            field_0: &v9
            field_8: 0
            field_16: 1
        };
        if v17 != 45 {
            *((a0 + 32) as &i64) = v8;
            v25 = v0;
            *((a0 + 16) as &i64) = v4;
            *(a0 as &i128) = v25;
            *((a0 + 40) as &i128) = 0;
        } else if !bigdecimal::impl_cmp::check_equality_bigdecimal_ref(&v14, &v15) as i8 {
            v26 = a0 + 25;
            *((a0 + 16) as &i64) = v4;
            v27 = a0 + 32;
            *(a0 as &i64) = v0;
            if v4 {
                *((a0 + 24) as &i8) = 0;
            } else {
                *((a0 + 24) as &i8) = 1;
            }
            v28 = v6;
            *((v26 + 3) as &i32) = v7;
            *(v26 as &i32) = v28;
            *(v27 as &i128) = 0;
            *((v27 + 16) as &i64) = 0;
        } else {
            *(a0 as &i64) = 9223372036854775810;
            *((a0 + 40) as &i64) = 2;
            *((a0 + 48) as &i64) = 0;
        }
        return a0;
    }
}
