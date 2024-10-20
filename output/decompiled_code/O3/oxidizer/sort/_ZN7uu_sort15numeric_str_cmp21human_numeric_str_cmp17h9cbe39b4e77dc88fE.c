fn uu_sort::numeric_str_cmp::human_numeric_str_cmp(a0: &struct_2, a1: &struct_2) -> u64 {
    let v0: &struct_0;  // [sp-0x48], Other Possible Types: struct8
    let v1: &struct_0;  // [sp-0x40]
    let v2: struct8;  // [sp-0x38], Other Possible Types: &struct_0
    let v3: &struct_0;  // [sp-0x30]
    let v5: &struct_1;  // r8
    let v6: &struct_1;  // r9
    let v7: u8;  // bl
    let v8: u8;  // cl
    let v9: &struct_0;  // rdx
    let v10: &struct_0;  // rcx
    let v11: u64;  // r10
    let v12: u64;  // rdi
    let v13: &struct_0;  // rax
    let v14: &struct_0;  // rax
    let v15: u64;  // rsi
    let v16: u8;  // r11b
    let v17: u64;  // r11
    let v18: u64;  // rbp
    let v19: u32;  // ebp
    let v20: u32;  // r11d
    let v21: &struct_0;  // rsi
    let v22: u64;  // r14
    let v23: u8;  // bpl
    let v24: u64;  // rbp
    let v25: u64;  // r15
    let v27: u32;  // ebp
    let v28: u64;  // r11
    let v29: u64;  // rdi
    let v31: u8;  // al
    let v32: &struct_0;  // rax
    let v33: u64;  // rdi
    let v35: &struct_0;  // r8
    let v36: &struct_0;  // r8
    let v37: u32;  // edx
    let v38: u32;  // r10d
    let v39: u32;  // r9d
    let v40: u64;  // r8
    let v41: u32;  // r9d
    let v42: u32;  // r11d
    let v43: u32;  // r10d
    let v46: u64;  // r8
    let v48: u8;  // al

    v5 = a0->field_10;
    v6 = a1->field_10;
    v7 = v5->field_8;
    v8 = v6->field_8;
    if v7 != v8 {
        v14 = -(v7 < v8) | -0x100 | -(v7 < v8) | 1;
        return v14;
    }
    v9 = a0->field_0;
    v10 = a1->field_0;
    v11 = a1->field_8;
    v12 = a0->field_8;
    v13 = &(&v9->field_-4)[v12];
    if !v12 {
        v16 = 0;
    } else {
        v15 = v13->field_-3;
        if v15 < 0 {
            v17 = v13->padding_-2 as u64;
            if v17 >= 192 {
                v20 = v17 & 31;
            } else {
                v18 = v13->field_-1;
                v19 = (v18 < 192 ? v18 & 15 : v18 & 63 | (v13->field_0 & 7) * 64);
                v20 = v17 & 63 | v19 * 64;
            }
            v15 = v15 & 63 | v20 * 64;
        }
        v16 = 0;
        switch (v15) {
        case 69:
            v16 = 6;
            break;
        case 71:
            v16 = 3;
            break;
        case 75: case 107:
            v16 = 1;
            break;
        case 77:
            v16 = 2;
            break;
        case 80:
            v16 = 5;
            break;
        case 84:
            v16 = 4;
            break;
        case 89:
            v16 = 8;
            break;
        case 90:
            v16 = 7;
            break;
        }
    }
    v21 = &(&v10->field_-4)[v11];
    if !v11 {
        v23 = 0;
    } else {
        v22 = v21->field_-3;
        if v22 < 0 {
            v24 = v21->padding_-2 as u64;
            if v24 >= 192 {
                v27 = v24 & 31;
            } else {
                v25 = v21->field_-1;
                v27 = v24 & 63 | (v25 < 192 ? v25 & 15 : v25 & 63 | (v21->field_0 & 7) * 64) * 64;
            }
            v22 = v22 & 63 | v27 * 64;
        }
        v23 = 0;
        switch (v22) {
        case 69:
            v23 = 6;
            break;
        case 71:
            v23 = 3;
            break;
        case 75: case 107:
            v23 = 1;
            break;
        case 77:
            v23 = 2;
            break;
        case 80:
            v23 = 5;
            break;
        case 84:
            v23 = 4;
            break;
        case 89:
            v23 = 8;
            break;
        case 90:
            v23 = 7;
            break;
        }
    }
    v28 = (v23 <= v16 ? (-0x100 | v16 != v23) & 4294967295 & 4294967295 : 255);
    if v28 {
        v14 = (v7 ? v28 & 4294967295 & 4294967295 : -(v28));
        return v14;
    }
    if !v11 || !v12 || !((v29 = v6->field_0, v5->field_0 != v29)) {
        v0 = v9;
        v1 = v13;
        v2 = v10;
        v3 = v21;
    } else {
        v31 = -(v5->field_0 < v29);
        v32 = v13 | -0x100 | v31;
        goto LABEL_50ec0c;
    }
    loop {
        v33 = 0x110000;
        if v9 != v13 {
            do {
                v33 = v35->field_-4;
                if v33 >= 0 {
                    v36 = &v35->field_-3;
                } else {
                    v37 = v33 & 31;
                    v38 = v35->field_-3 & 63;
                    if (v33 & 255) <= 223 {
                        v36 = &v35->padding_-2 as &struct_0;
                        v33 = v37 * 64 | v38;
                    } else {
                        v39 = (v35->padding_-2 & 63) as u32 | v38 * 64;
                        if (v33 & 255) < 240 {
                            v36 = &v35->field_-1;
                            v33 = v39 | v37 * 0x1000;
                        } else {
                            v36 = &v35->field_0;
                            v33 = v35->field_-1 & 63 | v39 * 64 | (v37 & 7) * 0x40000;
                            if v33 == 0x110000 {
                                v33 = 0x110000;
                                goto LABEL_50eac3;
                            }
                        }
                    }
                }
                if v33 - 48 >= 10 {
                    v33 = 0x110000;
                }
                if v33 != 0x110000 {
                    goto LABEL_50eac3;
                }
            } while (v36 != v13);
            v33 = 0x110000;
        }
LABEL_50eac3:
        v0 = struct8 {
            field_0: v9
        };
        if v10 != v21 {
            do {
                v40 = v10->field_-4;
                if v40 >= 0 {
                    v10 = &v10->field_-3;
                    goto LABEL_50eb70;
                }
                v41 = v40 & 31;
                v42 = v10->field_-3 & 63;
                if (v40 & 255) <= 223 {
                    v10 = &v10->padding_-2 as &struct_0;
                    v40 = v41 * 64 | v42;
                } else {
                    v43 = (v10->padding_-2 & 63) as u32 | v42 * 64;
                    if (v40 & 255) < 240 {
                        v10 = &v10->field_-1;
                        v40 = v43 | v41 * 0x1000;
                    } else {
                        v10 = &v10->field_0;
                        v40 = v10->field_-1 & 63 | v43 * 64 | (v41 & 7) * 0x40000;
                        if v40 == 0x110000 {
                            goto LABEL_50eba3;
                        }
                    }
                }
LABEL_50eb70:
                if v40 - 48 >= 10 {
                    v40 = 0x110000;
                }
                if !(v40 == 0x110000) {
                    goto LABEL_50eba9;
                }
            } while (v10 != v21);
            v46 = 0x110000;
            goto LABEL_50eba9;
        }
LABEL_50eba3:
        v46 = 0x110000;
LABEL_50eba9:
        v2 = struct8 {
            field_0: v10
        };
        if v33 == 0x110000 {
            switch (v46) {
            case 48:
                v13 = core::iter::traits::iterator::Iterator::try_fold(&v2);
                if !(v13 & 255 & 255) {
                    goto LABEL_50ec40;
                } else {
                    goto LABEL_50ec2f;
                }
            case 1114112:
LABEL_50ec40:
                return 0;
            default:
LABEL_50ec2f:
                v14 = v13 | -0x100 | 255;
                if v7 {
                    return v14;
                }
                break;
            }
            goto LABEL_50ec39;
        }
        if v46 == 0x110000 {
            if !(v33 != 48 || (v13 = core::iter::traits::iterator::Iterator::try_fold(&v0), v13 as u8)) {
                goto LABEL_50ec40;
            }
            v14 = v13 | -0x100 | 1;
            if v7 {
                return v14;
            }
            goto LABEL_50ec1a;
        } else if v33 != v46 {
            v32 = -(v33 < v46);
LABEL_50ec0c:
            v48 = v31 | 1;
            v14 = v32 | -0x100 | v48;
            if v7 {
                return v14;
            }
            if v48 == 255 {
LABEL_50ec39:
                v14 = v14 | -0x100 | 1;
                return v14;
            }
LABEL_50ec1a:
            v14 = v14 | -0x100 | 255;
            return v14;
        }
    }
}
