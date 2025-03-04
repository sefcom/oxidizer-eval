fn uu_od::parse_formats::parse_type_string(a0: &Result<struct24, struct25>, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x135], Other Possible Types: struct1
    let v1: i32;  // [sp-0x134]
    let v2: i64;  // [bp-0x118], Other Possible Types: struct24
    let v3: i64;  // [bp-0x111]
    let v4: i64;  // [sp-0x110]
    let v5: i64;  // [sp-0x108]
    let v6: struct24;  // [sp-0x100], Other Possible Types: unsigned long, int
    let v7: i64;  // [sp-0x100], Other Possible Types: struct33
    let v8: iNone;  // [sp-0xf8]
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xd8], Other Possible Types: struct16
    let v11: i64;  // [sp-0xc8]
    let v12: struct24;  // [bp-0xc0], Other Possible Types: unsigned long
    let v13: i64;  // [sp-0xb8]
    let v14: i64;  // [sp-0xb0]
    let v15: i64;  // [sp-0xa8]
    let v16: i64;  // [sp-0xa0]
    let v17: struct24;  // [sp-0x98], Other Possible Types: int
    let v18: i64;  // [sp-0x88]
    let v19: i64;  // [bp-0x78]
    let v20: i64;  // [sp-0x71]
    let v21: i64;  // [sp-0x60]
    let v22: i64;  // [sp-0x58]
    let v23: i64;  // [sp-0x50]
    let v24: struct24;  // [bp-0x48]
    let v26: i32;  // edx
    let v27: i32;  // ebp
    let v28: iNone;  // ymm0
    let v29: i64;  // rbp
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v33: i64;  // rsi
    let v34: i64;  // r12
    let v35: i64;  // r14
    let v37: i64;  // rsi
    let v38: i8;  // dl
    let v39: i64;  // rsi
    let v40: iNone;  // xmm0

    v10 = 0;
    v10 = 8;
    v11 = 0;
    v15 = a1;
    v16 = a1 + a2;
    if !core::str::validations::next_code_point(&v15) as i32 {
        return struct32 {
            field_0: 0
            field_8: v10 as i128
            field_24: v43
        };
    }
    v27 = v26;
    if v26 != 0x110000 {
        do {
            v7 = v6;
            v1 = v27;
            v29 = (v27 - 97) as u64;
            match (v29 as u32) {
                0 => {
                    v31 = 0;
                    break;
                }
                2 => {
                    v31 = v30 & -0x100 | 1;
                    break;
                }
                3 => {
                    v31 = v30 & -0x100 | 2;
                    break;
                }
                5 => {
                    v31 = v30 & -0x100 | 6;
                    break;
                }
                14 => {
                    v31 = v30 & -0x100 | 3;
                    break;
                }
                20 => {
                    v31 = v30 & -0x100 | 4;
                    break;
                }
                23 => {
                    v31 = v30 & -0x100 | 5;
                    break;
                }
                _ => {
                    v12 = struct24 {
                        field_0: &v1
                        field_8: a1
                        field_16: a2
                    };
                    v6 = uu_od::parse_formats::parse_type_string::{{closure}}(&v12);
                    v31 = v6.field_8;
                    v33 = v6.field_16;
                    *(&v2 as &i64) = *((&v6.field_8 as &char + 1) as &i64);
                    v3 = v33;
                    if v7 != 0x8000000000000000 {
                        return struct33 {
                            field_0: 1
                            field_8: v32
                            field_16: v31 as u8
                            field_17: v41
                            field_24: <UNKNOWN>
                        };
                    }
                    goto LABEL_4cb614;
                }
            }
            v12 = &v1;
            v13 = a1;
            v14 = a2;
LABEL_4cb614:
            v34 = v31 & 4294967295;
            v35 = (((v34 * 8 & 4294967295) as u8 & 63) ? 0x2010101010000 >> ((v34 * 8 & 4294967295) as u8 & 63) : 0x2010101010000 >> ((v34 * 8 & 4294967295) as u8 & 63));
            v27 = (!core::str::validations::next_code_point(&v15) as i32 ? 0x110000 : v26);
            v0 = struct1 {
                field_0: 0
            };
            if !uu_od::parse_formats::is_format_size_char(v27 as u64, v35 & 4294967295, &v0) as i8 {
                *(&v2 as &i64) = 0;
                v4 = 1;
                v5 = 0;
                while (uu_od::parse_formats::is_format_size_decimal(v27 as u64, v35 & 4294967295 & 4294967295, &v2) as i8) {
                    v27 = (!core::str::validations::next_code_point(&v15) as i32 ? 0x110000 : v26);
                }
                v37 = v5;
                if v37 {
                    v21 = &v2;
                    v22 = a1;
                    v23 = a2;
                    if (core::num::<impl core::str::traits::FromStr for u8>::from_str(v4, v37) as i8 & 1) {
                        v6 = uu_od::parse_formats::parse_type_string::{{closure}}(&v21);
                        v38 = v6.field_8;
                        v39 = v6.field_16;
                        *(&v19 as &i64) = *((&v6.field_8 as &char + 1) as &i64);
                        v20 = v39;
                    }
                    v0 = v38;
                }
            } else if core::str::validations::next_code_point(&v15) as i32 {
                v27 = v26;
            } else {
                v27 = 0x110000;
                continue;
            }
            if v27 == 122 {
                v27 = (!core::str::validations::next_code_point(&v15) as i32 ? 0x110000 : v26);
            }
            uu_od::parse_formats::od_format_type(&v6, v34 & 4294967295);
            if v7 == 3 {
                v24 = struct24 {
                    field_0: &v0
                    field_8: a1
                    field_16: a2
                };
                v2 = uu_od::parse_formats::parse_type_string::{{closure}}(&v24);
                v17 = v2;
                return Ok(struct8 {
                    field_8: <UNKNOWN>
                });
            }
            v40 = v8;
            v28 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256;
            v17 = v40;
            v18 = v9;
            v7 = struct33 {
                field_0: v7
                field_16: <UNKNOWN>
                field_32: v36
            };
            v10 = alloc::vec::Vec<T,A>::push(&v7);
            v6 = v7;
        } while (v27 != 0x110000);
    }
}
