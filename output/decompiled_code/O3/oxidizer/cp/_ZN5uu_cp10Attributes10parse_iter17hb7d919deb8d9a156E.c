fn uu_cp::Attributes::parse_iter(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x195]
    let v1: i8;  // [sp-0x194]
    let v2: i8;  // [sp-0x193]
    let v3: i8;  // [sp-0x192]
    let v4: i8;  // [bp-0x191]
    let v5: i64;  // [sp-0x190]
    let v6: i32;  // [sp-0x188]
    let v7: i32;  // [sp-0x184]
    let v8: i32;  // [sp-0x180]
    let v9: i32;  // [sp-0x17c]
    let v10: i64;  // [sp-0x178]
    let v11: i64;  // [sp-0x170]
    let v12: i64;  // [sp-0x168]
    let v13: i64;  // [sp-0x160]
    let v14: i64;  // [sp-0x158]
    let v15: i64;  // [sp-0x150]
    let v16: i64;  // [bp-0x148]
    let v17: i64;  // [sp-0x140]
    let v18: i64;  // [sp-0x138]
    let v19: i64;  // [sp-0x130]
    let v20: i64;  // [bp-0x128]
    let v21: i192;  // [sp-0x120], Other Possible Types: String
    let v22: i64;  // [sp-0x108]
    let v23: i64;  // [sp-0xf8]
    let v24: i64;  // [sp-0xf0]
    let v25: i64;  // [sp-0xe8]
    let v26: i64;  // [sp-0xe0]
    let v27: i192;  // [sp-0xd8], Other Possible Types: struct24
    let v28: Argument;  // [bp-0xc0]
    let v29: i64;  // [sp-0xb0]
    let v30: i64;  // [sp-0xa8]
    let v31: i64;  // [sp-0xa0]
    let v32: i8;  // [sp-0x98]
    let v33: Arguments;  // [bp-0x90]
    let v34: i64;  // [sp-0x60]
    let v35: i32;  // [sp-0x58]
    let v40: i64;  // r12
    let v42: i64;  // r13
    let v43: i64;  // rbx
    let v44: i64;  // r15
    let v45: i64;  // rbp
    let v46: i64;  // rax
    let v47: i64;  // r14
    let v48: i64;  // rax
    let v49: i64;  // r9
    let v50: i64;  // r9
    let v51: i64;  // r11
    let v52: i64;  // r11
    let v53: i64;  // r10
    let v54: i64;  // r10
    let v55: i64;  // rdi
    let v56: i8;  // dil
    let v57: i64;  // r8
    let v58: i64;  // r8
    let v59: i64;  // rcx
    let v60: i64;  // r15
    let v61: i64;  // r13
    let v62: i64;  // rbp
    let v63: i8;  // dl
    let v64: i8;  // dl
    let v65: i64;  // rdx
    let v66: i32;  // esi
    let v67: i64;  // r14
    let v68: i64;  // rcx
    let v69: i64;  // rdi
    let v71: i32;  // r8d
    let v72: i32;  // r9d
    let v73: i32;  // r10d
    let v75: i64;  // rdx
    let v77: i32;  // r11d
    let v80: i64;  // rdx
    let v84: i32;  // esi
    let v88: i64;  // rax

    v40 = *((a1 + 8) as &i64);
    v25 = *((a1 + 24) as &i64);
    if v40 == v25 {
        v15 = 0;
        v45 = 0;
        v10 = 0;
        v18 = 0;
        v13 = 0;
        v17 = 0;
        v12 = 0;
        v44 = 0;
        v11 = 0;
        v43 = 0;
        v14 = 0;
        v42 = 0;
    } else {
        v22 = *(a1 as &i64);
        v19 = *((a1 + 16) as &i64);
        v42 = 0;
        v14 = 0;
        v43 = 0;
        v11 = 0;
        v44 = 0;
        v12 = 0;
        v17 = 0;
        v13 = 0;
        v18 = 0;
        v10 = 0;
        v45 = 0;
        v15 = 0;
        do {
            v26 = v40;
            v46 = *(v26 as &i64);
            v27 = alloc::str::<impl str>::to_lowercase(*((v46 + 8) as &i64), *((v46 + 16) as &i64));
            v47 = *((&v27 as &char + 8) as &i64);
            v48 = *((&v27 as &char + 16) as &i64);
            v24 = v43;
            if v48 != 3 {
                v6 = 0;
                v5 = 0;
                switch (v48) {
                case 4:
                    v59 = &v5;
                case 5:
                    v59 = &v6;
                    if (!(!(*((v47 + 4) as &i8) ^ 115)) || !(!(*(v47 as &i32) ^ 1802398060))) && (v59 = &v6, !(!(*((v47 + 4) as &i8) as u8 as u32 ^ 114)) || !(!(*(v47 as &i32) ^ 1953784184))) {
                        goto LABEL_4b4255;
                    } else {
                        goto LABEL_4b4653;
                    }
                case 7:
                    v59 = &v5;
                    if !(*((v47 + 3) as &i32) ^ 1954047348) && !(*(v47 as &i32) ^ 1953394531) {
                        goto LABEL_4b4653;
                    } else {
                        goto LABEL_4b4255;
                    }
                case 9:
                    v59 = &v5;
                    if !(*((v47 + 8) as &i8) ^ 112) && !(*(v47 as &i64) ^ 7595447706725545839) {
                        goto LABEL_4b4653;
                    } else {
                        goto LABEL_4b4255;
                    }
                case 10:
                    v59 = &v5;
                    if !(*((v47 + 8) as &i16) ^ 29552) && !(*(v47 as &i64) ^ 7881708861846808948) {
                        goto LABEL_4b4653;
                    } else {
                        goto LABEL_4b4255;
                    }
                default:
LABEL_4b4255:
                    v16 = v45;
                    v20 = v42;
                    v29 = 0;
                    v30 = v47;
                    v31 = v48;
                    v32 = 1;
                    v28 = Argument {
                        value: &v29
                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                    };
                    v33 = Arguments {
                        pieces: ["invalid attribute "]
                        args: [&v28]
                        fmt: None
                    };
                    v21 = alloc::fmt::format::format_inner(&v33);
                    v3 = v21;
                    v56 = *((&v21 as &char + 1) as &i8);
                    v54 = *((&v21 as &char + 2) as &i8);
                    v1 = *((&v21 as &char + 3) as &i8);
                    v52 = *((&v21 as &char + 4) as &i8);
                    v2 = *((&v21 as &char + 5) as &i8);
                    v9 = *((&v21 as &char + 6) as &i8);
                    v7 = *((&v21 as &char + 7) as &i8);
                    v50 = *((&v21 as &char + 8) as &i8);
                    v0 = *((&v21 as &char + 9) as &i8);
                    v58 = *((&v21 as &char + 10) as &i8);
                    v8 = *((&v21 as &char + 11) as &i8);
                    v34 = *((&v21 as &char + 12) as &i64);
                    v35 = *((&v21 as &char + 20) as &i32);
                    v23 = 9;
                    break;
                }
                switch (*(v47 as &i32)) {
                case 1701080941:
LABEL_4b4653:
                    *(v59 as &i16) = 257;
                    v3 = v5;
                    v56 = *((&v5 as &char + 1) as &i8);
                    v54 = *((&v5 as &char + 2) as &i8);
                    v1 = *((&v5 as &char + 3) as &i8);
                    v52 = *((&v5 as &char + 4) as &i8);
                    v2 = *((&v5 as &char + 5) as &i8);
                    v9 = *((&v5 as &char + 6) as &i8);
                    v7 = *((&v5 as &char + 7) as &i8);
                    v50 = v6;
                    v0 = *((&v6 as &char + 1) as &i8);
                    v58 = *((&v6 as &char + 2) as &i8);
                    v8 = *((&v6 as &char + 3) as &i8);
                    if v27 {
                        v56 = v56;
                        v16 = v44;
                        v58 = v58 & 4294967295 & 4294967295;
                        v54 = v54 & 4294967295 & 4294967295;
                        v50 = v50 & 4294967295 & 4294967295;
                        v60 = v16;
                        v52 = v52 & 4294967295 & 4294967295;
                    }
                    continue;
                case 1802398060:
                    v59 = &v6;
                    break;
                default:
                    v59 = &v6;
                    break;
                }
            } else {
                if !(!(*((v47 + 2) as &i8) ^ 108) && !(*(v47 as &i16) ^ 27745)) {
                    goto LABEL_4b4255;
                }
                v16 = v45;
                v20 = v42;
                v23 = 13;
                v50 = v49 | -0x100 | 1;
                v7 = 0;
                v9 = 0;
                v2 = 1;
                v52 = v51 | -0x100 | 1;
                v1 = 1;
                v54 = v53 | -0x100 | 1;
                v56 = v55 | -0x100 | 1;
                v3 = 1;
                v0 = 1;
                v58 = v57 | -0x100 | 1;
                v8 = 0;
                if v27 {
                    v56 = 1;
                    v58 = v58 & 4294967295 & 4294967295;
                    v54 = v54 & 4294967295 & 4294967295;
                    v50 = v50 & 4294967295 & 4294967295;
                    v52 = v52 & 4294967295 & 4294967295;
                }
                v61 = v20;
                v62 = v16;
            }
            v63 = v14;
            if !((~(v63) | !v3) & 1) {
                v63 = v24 - 1 & 4294967295 | -0x100 | (v24 - 1 & 4294967295) == v56;
            }
            v16 = v63;
            v64 = v13;
            if !((~(v64) | !v9) & 1) {
                v64 = v18 - 1 | -0x100 | v18 - 1 == v7;
            }
            v20 = v64;
            v65 = v12;
            if !((~(v65 & 4294967295) | !(v52 & 255 & 255)) & 1) {
                v65 = v65 | -0x100 | v17 - 1 == v2;
            }
            v66 = v11;
            v67 = v66;
            if !((~(v66) | !(v54 & 255 & 255)) & 1) {
                v67 = v67 | -0x100 | (v60 - 1 & 4294967295) == v1;
            }
            v68 = v10;
            if !((~(v68 & 4294967295) | !(v50 & 255 & 255)) & 1) {
                v68 = v68 | -0x100 | (v62 - 1 & 4294967295) == v0;
            }
            v4 = v56;
            v69 = v15;
            if !((~(v69 & 4294967295) | !(v58 & 255 & 255)) & 1) {
                v69 = v69 | -0x100 | (v61 - 1 & 4294967295) == v8;
            }
            v40 = v26 + 8;
            v71 = ((v68 & 1) ? v10 : -0x100 | (v50 & 255 & 255));
            if (v68 & 1) {
                v45 = v62 & 4294967295 & 4294967295;
            } else {
                v45 = v0;
            }
            v72 = ((v67 & 1) ? v11 : -0x100 | (v54 & 255 & 255));
            if (v67 & 1) {
                v44 = v60 & 4294967295 & 4294967295;
            } else {
                v44 = v1;
            }
            v73 = ((v65 & 1) ? v12 : -0x100 | (v52 & 255 & 255));
            if !(v65 & 1) {
                v75 = v2;
            } else {
                v75 = v17;
            }
            v17 = v75;
            v77 = ((v20 & 1) ? v13 : -0x100 | v9);
            if (v20 & 1) {
                v80 = v18;
            } else {
                v80 = v7;
            }
            v18 = v80;
            v43 = ((v16 & 1) ? v24 & 4294967295 & 4294967295 : v4);
            if (v69 & 1) {
                v42 = v61 & 4294967295 & 4294967295;
            } else {
                v42 = v8;
            }
            v84 = ((v69 & 1) ? v15 : -0x100 | (v58 & 255 & 255));
            v10 = v71;
            v11 = v72;
            v12 = v73;
            v13 = v77;
            v14 = ((v16 & 1) ? v14 : (-0x100 | v3) & 4294967295 & 4294967295);
            v15 = v84;
        } while (v40 != v25);
        v15 = v15 | -0x100 | v15 & 1;
        v10 = v10 | -0x100 | v10 & 1;
        v13 = v13 | -0x100 | v13 & 1;
        v12 = v12 | -0x100 | v12 & 1;
        v11 = v11 | -0x100 | v11 & 1;
        v14 = v14 | -0x100 | v14 & 1;
    }
    v88 = a0;
    *((v88 + 8) as &i8) = v14;
    *((v88 + 9) as &i8) = v43;
    *((v88 + 10) as &i8) = v11;
    *((v88 + 11) as &i8) = v44;
    *((v88 + 12) as &i8) = v12;
    *((v88 + 13) as &i8) = v17;
    *((v88 + 14) as &i8) = v13;
    *((v88 + 15) as &i8) = v18;
    *((v88 + 16) as &i8) = v10;
    *((v88 + 17) as &i8) = v45;
    *((v88 + 18) as &i8) = v15;
    *((v88 + 19) as &i8) = v42;
    *(v88 as &i64) = 13;
    return v88;
}
