fn uu_sort::FieldSelector::parse(a0: void*, a1: void*, a2: void*, a3: &u64) -> u64 {
    let v0: i8;  // [sp-0xc9]
    let v1: i64;  // [bp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: struct1;  // [bp-0xb8], Other Possible Types: i32
    let v4: i16;  // [sp-0xb4]
    let v5: i256;  // [sp-0xb0], Other Possible Types: Enum, struct32
    let v6: i64;  // [sp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: i64;  // [sp-0x98]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [sp-0x80]
    let v12: i192;  // [sp-0x68], Other Possible Types: struct24
    let v13: i64;  // [sp-0x48]
    let v14: i64;  // [sp-0x40]
    let v15: i64;  // [sp-0x38]
    let v19: i64;  // r12
    let v20: i64;  // rdx
    let v21: i64;  // rsi
    let v22: i64;  // rcx
    let v23: i64;  // rcx
    let v25: i64;  // r14
    let v26: i64;  // r12
    let v27: i64;  // rbx
    let v29: i64;  // r14
    let v30: i64;  // r12
    let v31: i64;  // r14
    let v32: i64;  // rdx
    let v33: i64;  // r13
    let v34: i64;  // rbp
    let v36: i64;  // rbx
    let v37: i64;  // rax
    let v38: i64;  // rsi
    let v39: i64;  // rdx
    let v40: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i64;  // r14
    let v44: i64;  // r12
    let v45: i64;  // r12
    let v46: i64;  // r13
    let v47: i64;  // r8
    let v48: i64;  // r10
    let v49: i64;  // r11
    let v50: i64;  // r10
    let v51: i64;  // r11
    let v52: i64;  // r9
    let v53: i64;  // r13
    let v54: i64;  // r9
    let v55: i64;  // r9
    let v56: i64;  // r11
    let v59: i64;  // r11
    let v60: i64;  // rdi
    let v61: i8;  // al
    let v62: i64;  // rcx
    let v65: i64;  // rax
    let v66: i8;  // al
    let v67: i8;  // al
    let v68: i64;  // r11
    let v71: i64;  // r13
    let v72: i64;  // r14
    let v73: i64;  // r12
    let v74: i64;  // rax
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v77: i128;  // xmm2

    v2 = a3;
    do {
        v19 = 0;
        v20 = a2 - v19;
        v21 = v19 + a1;
        if v20 <= 15 {
            if a2 == v19 {
                goto LABEL_4c4173;
            }
            v22 = 0;
            while (*((v21 + v22) as &i8) != 44) {
                v22 += 1;
                if v20 == v22 {
                    goto LABEL_4c4173;
                }
            }
        }
        if core::slice::memchr::memchr_aligned(44, v21) != 1 {
LABEL_4c4173:
            v27 = 0;
            goto LABEL_4c4178;
        }
        v25 = v19 + v23 + 1;
        v26 = v19 + v23;
        if v26 < a2 && *((a1 + v26) as &i8) == 44 {
            goto LABEL_4c417d;
        }
    } while (v25 <= a2);
    v27 = 0;
LABEL_4c4178:
LABEL_4c417d:
    v31 = v29;
    v5 = uu_sort::FieldSelector::split_key_options(a1, v30);
    v32 = v6;
    v33 = v8;
    v34 = vvar_79{reg 56};
    v32 = v32;
    if v31 <= a2 {
        do {
            v37 = a2 - v31;
            v38 = a1 + v31;
            if v37 <= 15 {
                if a2 == v31 {
                    break;
                }
                v39 = 0;
                while (*((v38 + v39) as &i8) != 44) {
                    v39 += 1;
                    if v37 == v39 {
                        goto LABEL_4c4252;
                    }
                }
            } else if !(core::slice::memchr::memchr_aligned(44, v38) == 1) {
                break;
            }
            v41 = v31 + v40;
            if v41 < a2 && *((a1 + v41) as &i8) == 44 {
                goto LABEL_4c4255;
            }
            v31 = v31 + v40 + 1;
        } while (v31 <= a2);
LABEL_4c4252:
    }
LABEL_4c4255:
    v5 = uu_sort::FieldSelector::split_key_options(v25 + a1, v42 - v25);
    v36 = v5;
    v14 = v6;
    if !v33 {
        if !v36 {
            v43 = v31 | -0x100 | 1;
        } else {
            if !(!v13) {
                goto LABEL_4c4295;
            }
            v43 = 0;
        }
        v45 = *((v2 + 125) as &i8);
        v5 = uu_sort::KeyPosition::new(v34, v32, 1, v45 & 4294967295);
        v46 = *((&v5 as &char + 25) as &i32) | (*((&v5 as &char + 29) as &i16) | *((&v5 as &char + 31) as &i8) * 0x10000) * 0x100000000;
        v47 = v6;
        v48 = v7;
        v49 = *((&v5 as &char + 24) as &i8);
        if v5 {
            v52 = v49 & 4294967295;
            goto LABEL_4c4660;
        }
        v1 = v45;
        v55 = v54 | -0x100 | 2;
        v59 = v56;
        if v48 {
            v60 = v2;
            v61 = *((v60 + 152) as &i8);
            v62 = *((v60 + 130) as &i8) * 0x100000000 | *((v60 + 128) as &i8) * 0x1000000 | *((v60 + 126) as &i8) * 0x100 + v1 | *((v60 + 127) as &i8) * 0x10000;
            if v47 == 1 {
                *(a0 as &i64) = v45;
                *((a0 + 8) as &i64) = v43;
                *((a0 + 16) as &i64) = 2 | v34 * 0x100;
                *((a0 + 24) as &i64) = 1;
                *((a0 + 32) as &i64) = v48;
                *((a0 + 40) as &i8) = v68;
                *((a0 + 41) as &i32) = v46;
                *((a0 + 47) as &i8) = v46 >> 48;
                *((a0 + 45) as &i16) = v46 >> 32;
                *((a0 + 48) as &i32) = v62;
                *((a0 + 52) as &i8) = v62 >> 32;
                *((a0 + 53) as &i8) = v67;
                *((a0 + 54) as &i8) = 0;
                *((a0 + 55) as &u8) = (v61 < 2 | ((v55 & 4294967295 ^ 2) || v59)) & v61 != 2;
                return a0;
            }
LABEL_4c4769:
            *(a0 as &i64) = v45;
            *((a0 + 8) as &i64) = v43;
            *((a0 + 16) as &i64) = 2 | v34 * 0x100;
            *((a0 + 24) as &i64) = v47;
            *((a0 + 32) as &i64) = v48;
            *((a0 + 40) as &i8) = v68;
            *((a0 + 41) as &i32) = v46;
            *((a0 + 47) as &i8) = v46 >> 48;
            *((a0 + 45) as &i16) = v46 >> 32;
            *((a0 + 48) as &i32) = v62;
            *((a0 + 52) as &i8) = v62 >> 32;
            *((a0 + 53) as &i8) = v67;
            *((a0 + 54) as &i8) = 0;
            *((a0 + 55) as &u8) = (v61 < 2 | ((v55 & 4294967295 ^ 2) || v59)) & v61 != 2;
            return a0;
        }
    } else {
LABEL_4c4295:
        v13 = v8;
        v2 = v7;
        v43 = 0x8000000000000000;
        v4 = 0x600;
        v3 = struct1 {
            field_4: 0
        };
        v12 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(v7, v33, &v3);
        v44 = v12;
        if v44 != 0x8000000000000000 {
LABEL_4c440d:
            v50 = *((&v12 as &char + 8) as &i64);
            v52 = *((&v12 as &char + 16) as &i8);
            v53 = *((&v12 as &char + 17) as &i32) | (*((&v12 as &char + 21) as &i16) | *((&v12 as &char + 23) as &i8) * 0x10000) * 0x100000000;
            goto LABEL_4c4660;
        } else {
            v5 = uu_sort::KeyPosition::new(v34, v32, 1, *((&v12 as &char + 8) as &i8));
            v44 = v6;
            v50 = v7;
            v51 = *((&v5 as &char + 24) as &i8);
            v46 = *((&v5 as &char + 25) as &i32) | (*((&v5 as &char + 29) as &i16) | *((&v5 as &char + 31) as &i8) * 0x10000) * 0x100000000;
            if v5 {
                v52 = v51 & 4294967295;
                goto LABEL_4c4660;
            }
            if !v36 {
                goto LABEL_4c45ab;
            }
            v15 = v44;
            v0 = v51;
            v48 = v50;
            v12 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(v2, v13, &v3);
            v44 = v12;
            if !(v44 == 0x8000000000000000) {
                goto LABEL_4c440d;
            }
            v5 = uu_sort::KeyPosition::new(v36, v14, 0, *((&v12 as &char + 8) as &i8));
            v44 = v6;
            v50 = v7;
            v52 = *((&v5 as &char + 24) as &i8);
            v34 = *((&v5 as &char + 25) as &i32) | (*((&v5 as &char + 29) as &i16) | *((&v5 as &char + 31) as &i8) * 0x10000) * 0x100000000;
            v51 = v0;
            if !(!v5) {
                goto LABEL_4c4660;
            }
LABEL_4c45ab:
            if v48 {
                v65 = v4 * 0x100000000;
                v62 = v3 | v65;
                v66 = v65 >> 40;
                v47 = v15;
                if v47 == 1 {
                    *(a0 as &i64) = v45;
                    *((a0 + 8) as &i64) = v43;
                    *((a0 + 16) as &i64) = 2 | v34 * 0x100;
                    *((a0 + 24) as &i64) = v47;
                    *((a0 + 32) as &i64) = v48;
                    *((a0 + 40) as &i8) = v68;
                    *((a0 + 41) as &i32) = v46;
                    *((a0 + 47) as &i8) = v46 >> 48;
                    *((a0 + 45) as &i16) = v46 >> 32;
                    *((a0 + 48) as &i32) = v62;
                    *((a0 + 52) as &i8) = v62 >> 32;
                    *((a0 + 53) as &i8) = v67;
                    *((a0 + 54) as &i8) = 0;
                    *((a0 + 55) as &u8) = (v61 < 2 | ((v55 & 4294967295 ^ 2) || v59)) & v61 != 2;
                    return a0;
                }
                goto LABEL_4c4769;
            }
        }
    }
    v44 = 59;
    v50 = __rust_alloc(59, 1);
    *((v50 + 43) as &i128) = 133485624513146996785960933456865752169;
    *((v50 + 32) as &i128) = 146793563363748825717793806262549553253;
    *((v50 + 16) as &i128) = 138842676100815432793774417478815391858;
    *(v50 as &i128) = 134856349688948118446018713040161500777;
    v52 = v54 | -0x100 | 59;
    v53 = 0;
LABEL_4c4660:
    if !a2 {
        v71 = 1;
    } else if a2 < 0 {
        v2 = 0;
    } else {
        v2 = 1;
        v71 = __rust_alloc(a2, 1);
        v52 = v52 & 4294967295 & 4294967295;
    }
    memcpy(v7, a1, a2);
    v9 = v73;
    v10 = v72;
    v11 = v52 & 4294967295 | v53 * 0x100;
    v6 = a2;
    v7 = v71;
    v8 = a2;
    v5 = 3;
    v74 = __rust_alloc(64, 8);
    v75 = v5;
    v76 = v7;
    v77 = v9;
    *((v74 + 48) as &i64) = v11;
    *((v74 + 32) as &i128) = v77;
    *((v74 + 16) as &i128) = v76;
    *(v74 as &i128) = v75;
    *(a0 as &i64) = v74;
    *((a0 + 8) as &&i64) = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.36.llvm.14646808445695166917;
    *((a0 + 55) as &u8) = (v61 < 2 | ((v55 & 4294967295 ^ 2) || v59)) & v61 != 2;
    return a0;
}
