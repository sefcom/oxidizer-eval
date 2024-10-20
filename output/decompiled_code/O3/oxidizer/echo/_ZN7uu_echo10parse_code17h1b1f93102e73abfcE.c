fn uu_echo::parse_code(a0: &struct_0, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x10]
    let v1: i64;  // [sp-0x8]
    let v4: u64;  // r8
    let v5: &u64;  // rcx
    let v6: u32;  // eax
    let v7: u32;  // r9d
    let v8: u32;  // edx
    let v9: u32;  // ecx
    let v10: u64;  // rdx
    let v11: u64;  // rax
    let v12: u64;  // cc_ndep
    let v13: u64;  // cc_ndep
    let v14: u64;  // rbx
    let v15: &u64;  // r11
    let v16: u64;  // r9
    let v17: &u64;  // r8
    let v18: u64;  // rcx
    let v19: u32;  // r10d
    let v20: u32;  // ebp
    let v21: u32;  // ebx
    let v22: u32;  // r10d
    let v23: u64;  // rax
    let v24: u8;  // al
    let v25: u64;  // rcx
    let v26: u32;  // r9d
    let v27: u32;  // r11d
    let v28: u32;  // r10d
    let v29: u32;  // r10d
    let v30: u64;  // r8

    v4 = a0->field_10;
    if v4 == 1114113 {
        v5 = a0->field_0;
        if v5 == a0->field_8 {
            v4 = 0x110000;
        } else {
            a0->field_0 = v5 as &char + 1;
            v4 = *(v5 as &i8);
            if v4 < 0 {
                v6 = v4 & 31;
                a0->field_0 = v5 as &char + 2;
                v7 = *((v5 as &char + 1) as &i8) & 63;
                if (v4 & 255) <= 223 {
                    v4 = v6 * 64 | v7;
                } else {
                    a0->field_0 = v5 as &char + 3;
                    v8 = *((v5 as &char + 2) as &i8) & 63 | v7 * 64;
                    if (v4 & 255) < 240 {
                        v4 = v8 | v6 * 0x1000;
                    } else {
                        a0->field_0 = v5 as &char + 4;
                        v4 = *((v5 as &char + 3) as &i8) & 63 | v8 * 64 | (v6 & 7) * 0x40000;
                    }
                }
            }
        }
        a0->field_10 = v4;
    }
    if v4 == 0x110000 {
        return 0x110000;
    }
    v10 = a1 & 4294967295;
    v11 = v4 - 48 & 4294967295;
    if (v10 & 255) >= 11 {
        if v11 < 10 {
            goto LABEL_47b262;
        }
        v11 = (amd64g_calculate_condition(3, 3, ((v4 as u32 | 32) - 97) as u64, 10, v12) as char ? 4294967295 : (v4 | 32) + -87);
    }
    if v11 >= v10 {
        return 0x110000;
    }
LABEL_47b262:
    v1 = vvar_207{reg 56};
    v0 = v14;
    a0->field_10 = 1114113;
    v15 = a0->field_0;
    v16 = a0->field_8;
    if v15 == v16 {
        a0->field_10 = 0x110000;
        return v9;
    }
    v17 = v15 as &char + 1;
    a0->field_0 = v17;
    v18 = *(v15 as &i8);
    if v18 >= 0 {
LABEL_47b302:
        a0->field_10 = v18;
        goto LABEL_47b305;
    }
    v19 = v18 & 31;
    v17 = v15 as &char + 2;
    a0->field_0 = v17;
    v20 = *((v15 as &char + 1) as &i8) & 63;
    if (v18 & 255) <= 223 {
        v18 = v19 * 64 | v20;
        goto LABEL_47b302;
    }
    v17 = v15 as &char + 3;
    a0->field_0 = v17;
    v21 = *((v15 as &char + 2) as &i8) & 63 | v20 * 64;
    if (v18 & 255) <= 239 {
        v18 = v21 | v19 * 0x1000;
        goto LABEL_47b302;
    }
    v17 = v15 as &char + 4;
    a0->field_0 = v17;
    v18 = *((v15 as &char + 3) as &i8) & 63 | v21 * 64 | (v19 & 7) * 0x40000;
    a0->field_10 = v18;
    if v18 != 0x110000 {
LABEL_47b305:
        v22 = v18 - 48;
        if (a1 & 255) >= 11 {
            v22 = (amd64g_calculate_condition(3, 3, ((v18 as u32 | 32) - 97) as u64, 10, v13) as char ? (v18 | 32) + -87 : -1);
        }
        if v22 < v10 && (v23 = v22 as u64, v24 = (v23 + ((v11 | -0x10000 | (v11 as u8 * a1 as u8) as u64) & 4294967295 & 4294967295)) as u8, v11 = v23 | -0x100 | v24 as u64, a0->field_10 = 1114113 as u32, a1 as u8 == 8) {
            if v17 == v16 {
                a0->field_10 = 0x110000;
                return v9;
            }
            a0->field_0 = v17 as &char + 1;
            v25 = *(v17 as &i8);
            if v25 >= 0 {
LABEL_47b3e7:
                a0->field_10 = v25;
                goto LABEL_47b3ea;
            } else {
                v26 = v25 & 31;
                a0->field_0 = v17 as &char + 2;
                v27 = *((v17 as &char + 1) as &i8) & 63;
                if (v25 & 255) < 224 {
                    v25 = v26 * 64 | v27;
                    goto LABEL_47b3e7;
                } else {
                    a0->field_0 = v17 as &char + 3;
                    v28 = *((v17 as &char + 2) as &i8) & 63 | v27 * 64;
                    if (v25 & 255) < 240 {
                        v29 = v28 | v26 * 0x1000;
                        v25 = v29;
                        a0->field_10 = v29;
                    } else {
                        a0->field_0 = v17 as &char + 4;
                        v25 = *((v17 as &char + 3) as &i8) & 63 | v28 * 64 | (v26 & 7) * 0x40000;
                        a0->field_10 = v25;
                        if v25 == 0x110000 {
                            return v9;
                        }
                    }
LABEL_47b3ea:
                    v30 = v25 - 48 & 4294967295;
                    if (a1 & 255) >= 11 {
                        if v30 < 10 {
                            goto LABEL_47b412;
                        }
                        v30 = (amd64g_calculate_condition(3, 3, ((v25 as u32 | 32) - 97) as u64, 10, v13) as char ? (v25 | 32) + -87 : 4294967295);
                    }
                    if v30 < v10 {
LABEL_47b412:
                        a0->field_10 = 1114113;
                        v11 = (v30 | -0x100 | v30 + (v11 | -0x10000 | v24 * a1) & 255) & 4294967295;
                    }
                }
            }
        }
    }
    v9 = v11;
    return v9;
}
