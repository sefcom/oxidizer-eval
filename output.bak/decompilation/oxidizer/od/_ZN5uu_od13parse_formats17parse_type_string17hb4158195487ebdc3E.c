fn uu_od::parse_formats::parse_type_string(a0: &Result<struct24, struct25>, a1: u32, a2: u32) -> u64 {
    let v0: struct1;  // [bp-0x135], Other Possible Types: u8
    let v1: u32;  // [sp-0x134]
    let v2: u64;  // [sp-0x128]
    let v3: u64;  // [bp-0x118], Other Possible Types: void*
    let v4: u64;  // [bp-0x111]
    let v5: u64;  // [sp-0x110]
    let v6: void*;  // [sp-0x108]
    let v7: u64;  // [sp-0x100], Other Possible Types: struct33
    let v8: u128;  // [sp-0xf8]
    let v9: u64;  // [sp-0xe8]
    let v10: struct16;  // [sp-0xd8], Other Possible Types: void*
    let v11: u64;  // [sp-0xd0]
    let v12: void*;  // [sp-0xc8]
    let v13: struct24;  // [bp-0xc0], Other Possible Types: &u8
    let v14: u64;  // [sp-0xb8]
    let v15: u64;  // [sp-0xb0]
    let v16: u64;  // [sp-0xa8]
    let v17: u64;  // [sp-0xa0]
    let v18: u128;  // [sp-0x98]
    let v19: u64;  // [sp-0x88]
    let v20: u64;  // [bp-0x78]
    let v21: u64;  // [sp-0x71]
    let v22: &u8;  // [sp-0x60]
    let v23: u64;  // [sp-0x58]
    let v24: u64;  // [sp-0x50]
    let v25: struct24;  // [bp-0x48]
    let v28: u32;  // edx
    let v29: u32;  // ebp
    let v30: u256;  // ymm0
    let v32: u64;  // rax
    let v33: u64;  // rax
    let v35: u64;  // rsi
    let v36: u64;  // r12
    let v37: u64;  // r14
    let v38: u32;  // ebp
    let v39: u32;  // edx
    let v40: u64;  // rsi
    let v42: u8;  // dl
    let v43: u64;  // rsi
    let v44: u128;  // xmm0
    let v46: u64;  // rdx
    let v47: u64;  // rdi
    let v48: u64;  // rcx
    let v49: u64;  // rdi
    let v50: u64;  // rcx

    v10 = 0;
    v11 = 8;
    v12 = 0;
    v2 = a1;
    v16 = a1;
    v17 = a1 + a2;
    return Ok(struct24 {
        field_0: *(&v10 as &i128)
        field_16: v27
    });
    loop {
        v7 = v7;
        v8 = v8;
        v9 = v9;
        v1 = v29;
        switch (v1) {
        case 97:
            v33 = 0;
            break;
        case 99:
            v33 = v32 | -0x100 | 1;
            break;
        case 100:
            v33 = v32 | -0x100 | 2;
            break;
        case 102:
            v33 = v32 | -0x100 | 6;
            break;
        case 111:
            v33 = v32 | -0x100 | 3;
            break;
        case 117:
            v33 = v32 | -0x100 | 4;
            break;
        case 120:
            v33 = v32 | -0x100 | 5;
            break;
        default:
            v13 = struct24 {
                field_0: &v1
                field_8: v2
                field_16: a2
            };
            uu_od::parse_formats::parse_type_string::{{closure}}(&v7, &v13);
            v33 = v8;
            v35 = *((&v8 as &char + 8) as &i64);
            v3 = *((&v8 as &char + 1) as &i64);
            v4 = v35;
            if v7 != 0x8000000000000000 {
                v46 = v3;
                v47 = a0;
                return Err(struct25 {
                    field_0: v34
                    field_8: v33 as u8
                    field_9: v46
                    field_16: <UNKNOWN>
                });
            }
            goto LABEL_4cb614;
        }
        v13 = &v1;
        v14 = v2;
        v15 = a2;
LABEL_4cb614:
        v36 = v33 & 4294967295;
        v37 = ((v36 * 8 & 4294967295 & 63) ? 0x2010101010000 >> (v36 * 8 & 4294967295 & 63) : 0x2010101010000 >> (v36 * 8 & 4294967295 & 63));
        v38 = (!core::str::validations::next_code_point(&v16) as i32 ? 0x110000 : v28);
        v0 = struct1 {
            field_0: 0
        };
        if !uu_od::parse_formats::is_format_size_char(v38, v37 & 4294967295, &v0) as i8 {
            v3 = 0;
            v5 = 1;
            v6 = 0;
            while (uu_od::parse_formats::is_format_size_decimal(v38, v37 & 4294967295 & 4294967295, &v3) as i8) {
                v38 = (!core::str::validations::next_code_point(&v16) as i32 ? 0x110000 : v28);
            }
            v40 = v6;
            if v40 {
                v22 = &v3;
                v23 = v2;
                v24 = a2;
                if (core::num::<impl core::str::traits::FromStr for u8>::from_str(v5, v40) as i8 & 1) {
                    uu_od::parse_formats::parse_type_string::{{closure}}(&v7, &v22);
                    v42 = v8;
                    v43 = *((&v8 as &char + 8) as &i64);
                    v20 = *((&v8 as &char + 1) as &i64);
                    v21 = v43;
                    if v7 != 0x8000000000000000 {
                        v48 = v20;
                        v49 = a0;
                        return Err(struct25 {
                            field_0: v41
                            field_8: v42
                            field_9: v48
                            field_16: <UNKNOWN>
                        });
                    }
                }
                v0 = v42;
            }
            v39 = v38;
LABEL_4cb756:
            v29 = v39;
            if v29 != 122 {
                goto LABEL_4cb780;
            } else {
                v29 = (!core::str::validations::next_code_point(&v16) as i32 ? 0x110000 : v28);
                goto LABEL_4cb780;
            }
        } else if core::str::validations::next_code_point(&v16) as i32 {
            v39 = v28;
            goto LABEL_4cb756;
        } else {
            v29 = 0x110000;
LABEL_4cb780:
            uu_od::parse_formats::od_format_type(&v7, v36 & 4294967295);
            if v7 == 3 {
                v25 = struct24 {
                    field_0: &v0
                    field_8: v2
                    field_16: a2
                };
                uu_od::parse_formats::parse_type_string::{{closure}}(&v3, &v25);
                v18 = *(&v3 as &i128);
                v19 = v6;
                v50 = a0;
                return struct32 {
                    field_0: 1
                    field_8: v18
                    field_24: v19
                };
            }
            v44 = v8;
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
            v18 = v44;
            v19 = v9;
            v7 = struct33 {
                field_0: v7
                field_16: <UNKNOWN>
                field_32: v45
            };
            v10 = alloc::vec::Vec<T,A>::push(&v7);
            v9 = v9;
            v8 = v8;
            v7 = v7;
        }
    }
}
