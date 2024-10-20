fn uu_od::parse_inputs::parse_offset_operand(a0: &u64, a1: &u8, a2: &u8) -> u64 {
    let v0: Enum;  // [sp-0x20], Other Possible Types: u64
    let v1: i8;  // [bp-0x18]
    let v2: u64;  // [sp-0x10]
    let v3: u64;  // [sp-0x8]
    let v5: u64;  // r14
    let v6: u64;  // rbx
    let v7: u8;  // cl
    let v8: &u8;  // rdx
    let v9: u64;  // r8
    let v10: &u8;  // rcx
    let v11: void*;  // r10
    let v12: &u8;  // rdx
    let v13: u64;  // rcx
    let v14: u64;  // r14
    let v15: &u8;  // 4096
    let v16: &u8;  // r8
    let v17: &u8;  // rcx
    let v18: u64;  // r10
    let v19: &u8;  // r9
    let v20: void*;  // r10
    let v21: u64;  // r10
    let v22: &u8;  // r10
    let v23: &u8;  // r9
    let v24: u64;  // r14
    let v26: u64;  // rax

    v3 = v5;
    v2 = v6;
    if !a2 {
        v8 = 0;
        goto LABEL_4a08a0;
    }
    v7 = *(a1);
    if v7 != 43 {
        v8 = 0;
        goto LABEL_4a086a;
    }
    if a2 != 1 && a1[1] < 192 {
LABEL_4a0a09:
        core::str::slice_error_fail(); /* do not return */
    }
    v8 = 1;
    if !(a2 + 1 >= 2) || !(*((a1 + v8) as &i16) == 30768) {
LABEL_4a086a:
        if !(v7 == 43) || !((v9 = a2 - v8, a2 > v8)) {
LABEL_4a08a0:
            v9 = a2 - v8;
            v10 = a1 + v8;
            if v9 < 2 {
                goto LABEL_4a08b2;
            } else {
                if *(&v10 as &i16) == 22576 {
                    goto LABEL_4a08ea;
                }
                goto LABEL_4a08cc;
            }
        } else {
            if *((a1 + v8) as &i8) <= 191 {
                goto LABEL_4a0a09;
            }
            v10 = a1 + v8;
            if v9 < 2 {
LABEL_4a08b2:
                v11 = 0;
                if !v9 {
                    v14 = 1;
                    goto LABEL_4a0904;
                } else {
                    v16 = 0;
                }
LABEL_4a08cf:
                v11 = v18 | -0x100 | *((v17 + v16) as &i8) == 98;
                v14 = (*((v17 + v16) as &i8) == 98 ? 1 : 0x200);
LABEL_4a0904:
                v19 = &a2[-1 * (v11 & 4294967295)];
                if !(v12 <= v19) || !(*(v17) > 191) {
                    core::str::slice_error_fail(); /* do not return */
                }
                if v19 {
                    if v19 >= a2 {
                        if v11 as u8 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((a1 + v19) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                if v19 == v12 {
                    v13 = 8;
                    v20 = 0;
                } else {
                    v21 = -0x100 | *((v17 + ~(v12) + v19) as &i8) == 46;
                    v13 = v21 * 2 + 8 & 4294967295;
                    v20 = -(v21);
                }
                v22 = v20 + v19;
LABEL_4a097a:
                v23 = v15;
                if v23 < v12 {
                    core::str::slice_error_fail(); /* do not return */
                }
                if v12 {
                    if v12 >= a2 {
                        if v12 != a2 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((a1 + v12) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                if v23 {
                    if v23 >= a2 {
                        if v23 != a2 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((a1 + v23) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                v0 = core::num::<impl u64>::from_str_radix(a1 + v12, v23 - v12, v13);
                v24 = v1 * v14;
                if v0 as i8 {
                    v24 = 12;
                }
                v26 = (v0 as i8 ? &g_41e3fa : 0);
                a0[1] = v24;
                *(a0) = v26;
                return v26;
            }
            if *(&v10 as &i16) != 22576 {
LABEL_4a08cc:
                v16 = v9 - 1;
                goto LABEL_4a08cf;
            }
        }
    }
LABEL_4a08ea:
    v12 = v8 | 2;
    v13 = 16;
    v14 = 1;
    goto LABEL_4a097a;
}
