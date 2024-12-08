fn uu_od::parse_formats::parse_type_string(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x135], Other Possible Types: struct1
    let v1: i32;  // [sp-0x134]
    let v2: i64;  // [sp-0x128]
    let v3: i64;  // [bp-0x118], Other Possible Types: struct24
    let v4: i64;  // [bp-0x111]
    let v5: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0x108]
    let v7: i64;  // [sp-0x100], Other Possible Types: struct24, struct33
    let v8: i64;  // [sp-0xe8]
    let v9: i64;  // [sp-0xd8], Other Possible Types: struct16
    let v10: i64;  // [sp-0xd0]
    let v11: i64;  // [sp-0xc8]
    let v12: i64;  // [bp-0xc0], Other Possible Types: struct24
    let v13: i64;  // [sp-0xb8]
    let v14: i64;  // [sp-0xb0]
    let v15: i64;  // [sp-0xa8]
    let v16: i64;  // [sp-0xa0]
    let v17: i128;  // [sp-0x98]
    let v18: i64;  // [sp-0x88]
    let v19: i64;  // [bp-0x78]
    let v20: i64;  // [sp-0x71]
    let v21: i64;  // [sp-0x60]
    let v22: i64;  // [sp-0x58]
    let v23: i64;  // [sp-0x50]
    let v24: struct24;  // [bp-0x48]
    let v26: i32;  // edx
    let v27: i32;  // ebp
    let v28: i256;  // ymm0
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rcx
    let v33: i64;  // rsi
    let v34: i64;  // r12
    let v35: i64;  // r14
    let v36: i32;  // ebp
    let v37: i32;  // edx
    let v38: i64;  // rax
    let v39: i8;  // dl
    let v40: i64;  // rsi
    let v41: i128;  // xmm0
    let v43: i64;  // rdx
    let v44: i64;  // rdi
    let v45: i64;  // rcx
    let v46: i64;  // rdi
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: i64;  // rcx

    v9 = 0;
    v10 = 8;
    v11 = 0;
    v2 = a1;
    v15 = a1;
    v16 = a1 + a2;
    if core::str::validations::next_code_point(&v15) as i32 && v26 != 0x110000 {
        do {
            v7 = v7;
            v8 = v8;
            v1 = v27;
            switch (v1) {
            case 97:
                v31 = 0;
                break;
            case 99:
                v31 = v30 | -0x100 | 1;
                break;
            case 100:
                v31 = v30 | -0x100 | 2;
                break;
            case 102:
                v31 = v30 | -0x100 | 6;
                break;
            case 111:
                v31 = v30 | -0x100 | 3;
                break;
            case 117:
                v31 = v30 | -0x100 | 4;
                break;
            case 120:
                v31 = v30 | -0x100 | 5;
                break;
            default:
                *(&v12.field_0 as &struct24) = struct24 {
                    field_0: &v1
                    field_8: v2
                    field_16: a2
                };
                v7 = uu_od::parse_formats::parse_type_string::{{closure}}(&v12);
                v32 = v7;
                v31 = *((&v7 as &char + 8) as &i8);
                v33 = *((&v7 as &char + 16) as &i64);
                v3 = *((&v7 as &char + 9) as &i64);
                v4 = v33;
                if v32 != 0x8000000000000000 {
                    v43 = v3;
                    v44 = a0;
                    *((v44 + 24) as &i64) = v4;
                    *((v44 + 17) as &i64) = v43;
                    *((v44 + 8) as &i64) = v32;
                    *((v44 + 16) as &i8) = v31;
                    *(v44 as &i64) = 1;
                    return v47;
                }
                goto LABEL_4cb094;
            }
            v12 = &v1;
            v13 = v2;
            v14 = a2;
LABEL_4cb094:
            v34 = v31 & 4294967295;
            v35 = ((v34 * 8 & 4294967295 & 63) ? 0x2010101010000 >> (v34 * 8 & 4294967295 & 63) : 0x2010101010000 >> (v34 * 8 & 4294967295 & 63));
            v36 = (!core::str::validations::next_code_point(&v15) as i32 ? 0x110000 : v26);
            v0 = struct1 {
                field_0: 0
            };
            if !uu_od::parse_formats::is_format_size_char(v36, v35 & 4294967295, &v0) as i8 {
                v3 = 0;
                v5 = 1;
                v6 = 0;
                while (uu_od::parse_formats::is_format_size_decimal(v36, v35 & 4294967295 & 4294967295, &v3) as i8) {
                    v36 = (!core::str::validations::next_code_point(&v15) as i32 ? 0x110000 : v26);
                }
                if v6 {
                    v21 = &v3;
                    v22 = v2;
                    v23 = a2;
                    if (core::num::<impl core::str::traits::FromStr for u8>::from_str() as i64 & 1) {
                        v7 = uu_od::parse_formats::parse_type_string::{{closure}}(&v21);
                        v38 = v7;
                        v39 = *((&v7 as &char + 8) as &i8);
                        v40 = *((&v7 as &char + 16) as &i64);
                        v19 = *((&v7 as &char + 9) as &i64);
                        v20 = v40;
                        if v38 != 0x8000000000000000 {
                            v45 = v19;
                            v46 = a0;
                            *((v46 + 24) as &i64) = v20;
                            *((v46 + 17) as &i64) = v45;
                            *((v46 + 8) as &i64) = v38;
                            *((v46 + 16) as &i8) = v39;
                            *(v46 as &i64) = 1;
                            return v47;
                        }
                    }
                    v0 = v39;
                }
LABEL_4cb1ce:
            } else if core::str::validations::next_code_point(&v15) as i32 {
                goto LABEL_4cb1ce;
            } else {
                v27 = 0x110000;
                continue;
            }
            v27 = v37;
            if v27 == 122 {
                v27 = (!core::str::validations::next_code_point(&v15) as i32 ? 0x110000 : v26);
            }
            uu_od::parse_formats::od_format_type(&v7, v34 & 4294967295);
            if v7 == 3 {
                *(&v24.field_0 as &struct24) = struct24 {
                    field_0: &v0
                    field_8: v2
                    field_16: a2
                };
                v3 = uu_od::parse_formats::parse_type_string::{{closure}}(&v24);
                v17 = v3;
                v18 = v3.field_16;
                v49 = a0;
                *((v49 + 24) as &i64) = v18;
                *((v49 + 8) as &i128) = v17;
                *(v49 as &i64) = 1;
                return v47;
            }
            v41 = v7.8;
            v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
            v17 = v41;
            v18 = v8;
            v7 = struct33 {
                field_0: v7
                field_16: <UNKNOWN>
                field_32: v42
            };
            v9 = alloc::vec::Vec<T,A>::push(&v7);
            v8 = v8;
            v7 = v7;
        } while (v27 != 0x110000);
    }
    v47 = v11;
    v48 = a0;
    *((v48 + 24) as &i64) = v47;
    *((v48 + 8) as &i128) = v9;
    *(v48 as &i64) = 0;
    return v47;
}
