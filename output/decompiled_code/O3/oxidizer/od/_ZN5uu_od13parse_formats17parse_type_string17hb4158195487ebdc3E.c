fn uu_od::parse_formats::parse_type_string(a0: &Result<struct24, struct25>, a1: u32, a2: u32) -> u64 {
    let v0: struct1;  // [bp-0x135], Other Possible Types: i8
    let v1: i32;  // [sp-0x134]
    let v2: i64;  // [sp-0x128]
    let v3: i64;  // [bp-0x118], Other Possible Types: struct24
    let v4: i64;  // [bp-0x111]
    let v5: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0x108]
    let v7: i64;  // [sp-0x100], Other Possible Types: struct24
    let v8: i128;  // [sp-0xf8]
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xd8], Other Possible Types: struct16
    let v11: i64;  // [sp-0xd0]
    let v12: i64;  // [sp-0xc8]
    let v13: struct24;  // [bp-0xc0], Other Possible Types: i64
    let v14: i64;  // [sp-0xb8]
    let v15: i64;  // [sp-0xb0]
    let v16: i64;  // [sp-0xa8]
    let v17: i64;  // [sp-0xa0]
    let v18: i192;  // [sp-0x98]
    let v19: i64;  // [sp-0x88]
    let v20: i64;  // [bp-0x78]
    let v21: i64;  // [sp-0x71]
    let v22: i64;  // [sp-0x60]
    let v23: i64;  // [sp-0x58]
    let v24: i64;  // [sp-0x50]
    let v25: struct24;  // [bp-0x48]
    let v27: i32;  // edx
    let v28: i32;  // ebp
    let v29: i256;  // ymm0
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rcx
    let v34: i64;  // rsi
    let v35: i64;  // r12
    let v36: i64;  // r14
    let v37: i32;  // ebp
    let v38: i32;  // edx
    let v39: i64;  // rax
    let v40: i8;  // dl
    let v41: i64;  // rsi
    let v42: i128;  // xmm0
    let v43: i64;  // rdx
    let v44: i64;  // rdi
    let v45: i64;  // rcx
    let v46: i64;  // rdi
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: i64;  // rcx

    v10 = 0;
    v11 = 8;
    v12 = 0;
    v2 = a1;
    v16 = a1;
    v17 = a1 + a2;
    if core::str::validations::next_code_point(&v16) as i32 && v27 != 0x110000 {
        do {
            v7 = v7;
            v8 = v8;
            v9 = v9;
            v1 = v28;
            switch (v1) {
            case 97:
                v32 = 0;
                break;
            case 99:
                v32 = v31 | -0x100 | 1;
                break;
            case 100:
                v32 = v31 | -0x100 | 2;
                break;
            case 102:
                v32 = v31 | -0x100 | 6;
                break;
            case 111:
                v32 = v31 | -0x100 | 3;
                break;
            case 117:
                v32 = v31 | -0x100 | 4;
                break;
            case 120:
                v32 = v31 | -0x100 | 5;
                break;
            default:
                *(&v13.field_0 as &struct24) = struct24 {
                    field_0: &v1
                    field_8: v2
                    field_16: a2
                };
                v7 = uu_od::parse_formats::parse_type_string::{{closure}}(&v13);
                v33 = v7;
                v32 = *((&v7 as &char + 8) as &i8);
                v34 = *((&v7 as &char + 16) as &i64);
                v3 = *((&v7 as &char + 9) as &i64);
                v4 = v34;
                if v33 != 0x8000000000000000 {
                    v43 = v3;
                    v44 = a0;
                    *((v44 + 24) as &i64) = v4;
                    *((v44 + 17) as &i64) = v43;
                    *((v44 + 8) as &i64) = v33;
                    *((v44 + 16) as &i8) = v32;
                    *(v44 as &i64) = 1;
                    return v47;
                }
                goto LABEL_4cb614;
            }
            v13 = &v1;
            v14 = v2;
            v15 = a2;
LABEL_4cb614:
            v35 = v32 & 4294967295;
            v36 = ((v35 * 8 & 4294967295 & 63) ? 0x2010101010000 >> (v35 * 8 & 4294967295 & 63) : 0x2010101010000 >> (v35 * 8 & 4294967295 & 63));
            v37 = (!core::str::validations::next_code_point(&v16) as i32 ? 0x110000 : v27);
            v0 = struct1 {
                field_0: 0
            };
            if !uu_od::parse_formats::is_format_size_char(v37, v36 & 4294967295, &v0) as i8 {
                v3 = 0;
                v5 = 1;
                v6 = 0;
                while (uu_od::parse_formats::is_format_size_decimal(v37, v36 & 4294967295 & 4294967295, &v3) as i8) {
                    v37 = (!core::str::validations::next_code_point(&v16) as i32 ? 0x110000 : v27);
                }
                if v6 {
                    v22 = &v3;
                    v23 = v2;
                    v24 = a2;
                    if (core::num::<impl core::str::traits::FromStr for u8>::from_str() as i64 & 1) {
                        v7 = uu_od::parse_formats::parse_type_string::{{closure}}(&v22);
                        v39 = v7;
                        v40 = *((&v7 as &char + 8) as &i8);
                        v41 = *((&v7 as &char + 16) as &i64);
                        v20 = *((&v7 as &char + 9) as &i64);
                        v21 = v41;
                        if v39 != 0x8000000000000000 {
                            v45 = v20;
                            v46 = a0;
                            *((v46 + 24) as &i64) = v21;
                            *((v46 + 17) as &i64) = v45;
                            *((v46 + 8) as &i64) = v39;
                            *((v46 + 16) as &i8) = v40;
                            *(v46 as &i64) = 1;
                            return v47;
                        }
                    }
                    v0 = v40;
                }
            } else if !core::str::validations::next_code_point(&v16) as i32 {
                v28 = 0x110000;
                continue;
            }
            v28 = v38;
            if v28 == 122 {
                v28 = (!core::str::validations::next_code_point(&v16) as i32 ? 0x110000 : v27);
            }
            uu_od::parse_formats::od_format_type(&v7, v35 & 4294967295);
            if v7 == 3 {
                *(&v25.field_0 as &struct24) = struct24 {
                    field_0: &v0
                    field_8: v2
                    field_16: a2
                };
                v3 = uu_od::parse_formats::parse_type_string::{{closure}}(&v25);
                v18 = v3;
                v49 = a0;
                *((v49 + 24) as &i64) = v19;
                *((v49 + 8) as &i128) = v18;
                *(v49 as &i64) = 1;
                return v47;
            }
            v42 = v8;
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
            v18 = v42;
            v19 = v9;
            v7 = v7;
            v10 = alloc::vec::Vec<T,A>::push(&v7);
            v9 = v9;
            v8 = v8;
            v7 = v7;
        } while (v28 != 0x110000);
    }
    v47 = v12;
    v48 = a0;
    *((v48 + 24) as &i64) = v47;
    *((v48 + 8) as &i128) = v10;
    *(v48 as &i64) = 0;
    return v47;
}
