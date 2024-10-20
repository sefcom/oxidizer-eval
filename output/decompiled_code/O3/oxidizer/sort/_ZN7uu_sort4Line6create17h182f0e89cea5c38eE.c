fn uu_sort::Line::create(a0: &u64, a1: &u8, a2: u64, a3: u64, a4: &struct_1, a5: &u64) -> u64 {
    let v0: u64;  // [sp-0xb0]
    let v1: &u64;  // [sp-0xa8]
    let v2: &&struct_0;  // [sp-0xa0]
    let v3: &&struct_0;  // [sp-0x98]
    let v4: &u64;  // [sp-0x80]
    let v5: u64;  // [sp-0x78]
    let v6: &u8;  // [sp-0x68]
    let v7: u128;  // [bp-0x60], Other Possible Types: Enum
    let v8: u8;  // [bp-0x58]
    let v9: i8;  // [bp-0x50]
    let v10: i8;  // [bp-0x48]
    let v11: struct9;  // [bp-0x3c]
    let v12: &struct_2;  // [bp+0x8]
    let v13: u64;  // rbp
    let v14: &u8;  // r15
    let v15: &struct_2;  // rbx
    let v16: &struct_1;  // 4096
    let v18: &struct_1;  // r8
    let v19: u64;  // rax
    let v20: &u64;  // r14
    let v22: &u64;  // 4096
    let v23: u64;  // rbx
    let v24: &struct_5;  // r12
    let v25: u64;  // cc_ndep
    let v26: u256;  // ymm0
    let v27: u256;  // ymm1
    let v28: u64;  // rcx
    let v29: &u8;  // r12
    let v30: &u8;  // rdx
    let v31: &u8;  // r13
    let v32: &u8;  // r12
    let v33: u32;  // eax
    let v34: &u8;  // rdx
    let v35: &u8;  // r15
    let v37: &u8;  // rax
    let v38: u64;  // rbp
    let v39: &struct_1;  // 4096
    let v40: &u8;  // r13
    let v45: &u8;  // xmm0lq
    let v48: u64;  // cc_ndep
    let v51: &u64;  // rdi
    let v52: u64;  // rax
    let v54: &struct_1;  // rdi
    let v55: u64;  // rcx
    let v56: &u64;  // r13
    let v57: &struct_1;  // rdi
    let v58: &struct_1;  // rdi
    let v59: &u64;  // rdi
    let v60: &u64;  // rax
    let v61: &u64;  // rcx
    let v62: &u64;  // rcx
    let v63: &struct_1;  // rdi
    let v64: &u64;  // rcx
    let v65: &u64;  // rdx
    let v66: &u64;  // cc_dep1
    let v67: &u64;  // cc_dep2
    let v68: &u64;  // rdx
    let v69: &struct_4;  // rax
    let v70: &u64;  // rcx
    let v71: &u64;  // rdx
    let v72: &u64;  // rdx
    let v73: &u64;  // rcx
    let v74: &u64;  // rdx
    let v75: &u64;  // rdx
    let v76: u64;  // rbx

    v13 = a2;
    v14 = a1;
    v15 = v12;
    a5[2] = 0;
    if vvar_524 {
        uu_sort::tokenize(a1, a2, v15->field_78, a5);
    }
    v18 = v16;
    v19 = v15->field_10;
    if !v19 {
        *(a0) = v14;
        a0[1] = v13;
        a0[2] = a3;
        return a0;
    }
    v20 = v15->field_8;
    v2 = &v18->field_10;
    v4 = &v18->field_18;
    v1 = &v18->padding_30 as &struct_1;
    v3 = v18 + 1;
    v0 = a2;
    v6 = a1;
    do {
        v23 = v19 * 56;
        v24 = v22;
        v28 = (!*((&v20[6] as &char + 6) as &i8) ? 0 : v24->field_8);
        v29 = uu_sort::FieldSelector::get_range(v20, v14, v13, v28, v24->field_10);
        v31 = v30 - v29;
        if v30 < v29 {
            core::str::slice_error_fail(); /* do not return */
        }
        if v29 {
            if v29 >= v13 {
                if v29 != v13 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v14 + v29) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        if v30 {
            if v30 >= v13 {
                if v30 != v13 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v14 + v30) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        v32 = v29 + v14;
        v33 = *((&v20[6] as &char + 5) as &i8);
        if v33 < 2 {
            *(&v11.field_0 as &struct9) = struct9 {
                field_0: 0x2e00110000
                field_8: (v33 as u64 as u8 == 1) as u8 as u8
            };
            uu_sort::numeric_str_cmp::NumInfo::parse(&v7, v32, v31, &v11);
            v34 = v9;
            v35 = v10;
            if v35 < v34 {
                core::str::slice_error_fail(); /* do not return */
            }
            v38 = v8;
            if v34 {
                if v34 >= v31 {
                    if v34 != v31 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v32 + v34) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
            }
            if v35 {
                if v35 >= v31 {
                    if v35 != v31 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v32 + v35) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
            }
            v5 = *(&v7 as &i64);
            v32 += v34;
        } else if v33 != 2 {
            v38 = v13 | -0x100 | 4;
        } else {
            v37 = uu_sort::get_leading_gen(v32, v31, v30);
            if v30 < v37 {
                core::str::slice_error_fail(); /* do not return */
            }
            if v37 {
                if v37 >= v31 {
                    if v37 != v31 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v32 + v37) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
            }
            if v30 {
                if v30 >= v31 {
                    if v30 != v31 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v32 + v30) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
            }
            v7 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(v32 + v37, v30 - v37);
            if v7 as i8 {
                v32 = 0;
            } else {
                v45 = *((&v7 as &char + 8) as &i64);
                vvar_31{reg 224} = (((vvar_31{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_21{reg 224}))
                if ((BinaryOp CmpF & 69) >> 2 & 1) {
                    v32 = 1;
                } else {
                    v32 = 2;
                    v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0xfff0000000000000;
                    if (BinaryOp CmpF & 1) {
                        v48 = amd64g_calculate_rflags_c(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v25) & 1;
                        v32 = 4 - (amd64g_calculate_rflags_c(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v25) & 1);
                    }
                }
            }
            v38 = v13 | -0x100 | 2;
        }
        v51 = v39;
        v52 = (3 <= (v38 - 2 & 4294967295 & 255 & 255 & 255) ? 1 : v38 - 2 & 4294967295 & 255 & 4294967295 & 4294967295);
        if v52 == 2 {
            v13 = v0;
            if !*((&v20[6] as &char + 7) as &i8) {
                continue;
            }
            v56 = v51[2];
            if v30 == *(v51) {
                alloc::raw_vec::RawVec<T,A>::grow_one(v51);
            }
            v70 = v58->field_8;
            v71 = v56;
            v66 = v71 * 16;
            v67 = v71 * 8;
            v72 = v71 * 16;
            v69 = v70 + v72;
            *((v70 + v72) as &&u8) = v32;
            v3 = v2;
        } else if v52 == 1 {
            if v55 == v51[3] {
                alloc::raw_vec::RawVec<T,A>::grow_one(v4);
            }
            v59 = v54;
            v60 = v59[4];
            v61 = v51[5];
            v62 = v61 * 16;
            *((v60 + v62) as &u64) = v5;
            *((v60 + v62 + 8) as &i8) = 0;
            v25 = amd64g_calculate_rflags_c(32, v61 << 4, v61 << 3, v25);
            v59[5] = v61 as &char + 1;
            v56 = v59[2];
            if v30 == *(v59) {
                alloc::raw_vec::RawVec<T,A>::grow_one(v59);
            }
            v73 = v63->field_8;
            v74 = v56;
            v66 = v74 * 16;
            v67 = v74 * 8;
            v75 = v74 * 16;
            v69 = v73 + v75;
            *((v73 + v75) as &&u8) = v32;
            v3 = v2;
            v0 = v0;
        } else {
            v56 = *(v3);
            if v30 == *(v1) {
                alloc::raw_vec::RawVec<T,A>::grow_one(v1);
            }
            v64 = v57->field_38;
            v65 = v56;
            v66 = v65 * 16;
            v67 = v65 * 8;
            v68 = v65 * 16;
            v69 = v64 + v68;
            *((v64 + v68) as &&u8) = v32;
            v3 = v3;
            v0 = v0;
        }
        v69->field_8 = v40;
        v25 = amd64g_calculate_rflags_c(32, v66, v67, v25);
        *(v3) = v56 as &char + 1;
    } while ((v20 += 56, v76 = v23 - 56, v14 = v6, v23 != 56));
}
