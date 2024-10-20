fn uu_fmt::parasplit::FileLines::compute_indent(a0: &u64, a1: &struct_0, a2: &u64, a3: u64, a4: u64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: u64;  // rax
    let v3: void*;  // r14
    let v4: void*;  // rax
    let v5: void*;  // r15
    let v6: &u64;  // 4096
    let v7: &u64;  // r10
    let v8: u64;  // cc_ndep
    let v9: u64;  // rcx
    let v10: &u64;  // r13
    let v11: u32;  // edx
    let v12: u32;  // ebx
    let v13: u32;  // r11d
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rcx
    let v17: u32;  // edx
    let v18: u64;  // rax
    let v19: &u8;  // r11
    let v20: &u8;  // rbx
    let v21: u32;  // ecx

    v0 = v2;
    if !a3 {
        v4 = 0;
        v5 = 0;
        v3 = 0;
        goto LABEL_489755;
    } else {
        v3 = 0;
        v4 = 0;
        v5 = 0;
        loop {
            v7 = v6;
            v9 = *(v7 as &i8);
            if v9 >= 0 {
                v10 = v7 as &char + 1;
            } else {
                v11 = v9 & 31;
                v12 = *((v7 as &char + 1) as &i8) & 63;
                if (v9 & 255) <= 223 {
                    v10 = v7 as &char + 2;
                    v9 = v11 * 64 | v12;
                } else {
                    v13 = *((v7 as &char + 2) as &i8) & 63 | v12 * 64;
                    if (v9 & 255) < 240 {
                        v10 = v7 as &char + 3;
                        v9 = v13 | v11 * 0x1000;
                    } else {
                        v10 = v7 as &char + 4;
                        v9 = *((v7 as &char + 3) as &i8) & 63 | v13 * 64 | (v11 & 7) * 0x40000;
                    }
                }
            }
            v3 = v14;
            if !(amd64g_calculate_condition(2, 8, v5, a4, v8) as char) {
                v15 = 1;
                if v9 == 32 {
                    goto LABEL_489560;
                }
                if v9 - 9 >= 5 {
                    if v9 < 128 {
                        goto LABEL_489755;
                    }
                    v17 = v9 >> 8;
                    switch (v17) {
                    case 32:
                        break;
                    case 48:
                        break;
                    case 0:
                        break;
                    case 22:
                        goto LABEL_4896bf;
                    default:
LABEL_489755:
                        *(a0) = v5;
                        a0[1] = v3;
                        a0[2] = v4;
                        return v4;
                    }
LABEL_4896bf:
                    if !v9 == 5760 {
                        goto LABEL_489755;
                    }
LABEL_4896ca:
                    v15 = 1;
                    if v9 >= 160 {
                        v19 = v9 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[v9 >> 13] * 128;
                        if v19 as u32 > 2431 {
                            core::panicking::panic_bounds_check(); /* do not return */
                        }
                        v20 = v9 >> 2 & 15 | *((&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v19) as &i8) * 16;
                        if v20 as u32 >= 3808 {
                            core::panicking::panic_bounds_check(); /* do not return */
                        }
                        v21 = ((*((&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v20) as &i8) >> (v9 << 1 & 6 & 31) & 3) == 3 ? 1 : *((&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v20) as &i8) >> (v9 * 2 & 6 & 31) & 3);
                        v15 = v21;
                    }
LABEL_489560:
                    v4 += v15;
                    goto LABEL_489563;
                }
            }
            if !(v9 == 9) {
                goto LABEL_4896ca;
            }
            v16 = a1->field_40;
            if !v16 {
                core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
            }
            v18 = (!(v4 | v16) >> 32 ? (0 CONCAT v4) /m v16 : (0 CONCAT v4 as u32) /m v16 & 4294967295);
            v8 = amd64g_calculate_rflags_c(19, 0, 0, v8);
            v4 = v16 * (v18 + 1);
LABEL_489563:
            v5 = v5 as &u8 - v7 + v10;
            if v10 == a3 + a2 {
                v5 = 0;
                goto LABEL_489755;
            }
        }
    }
}
