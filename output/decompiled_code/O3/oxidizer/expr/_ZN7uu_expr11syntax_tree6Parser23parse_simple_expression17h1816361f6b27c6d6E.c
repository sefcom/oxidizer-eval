fn uu_expr::syntax_tree::Parser::parse_simple_expression(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [bp-0x1a8]
    let v1: i128;  // [sp-0x198]
    let v2: i384;  // [sp-0x188], Other Possible Types: Enum, struct24
    let v3: i8;  // [bp-0x180]
    let v4: i8;  // [bp-0x170]
    let v5: i32;  // [sp-0x160]
    let v6: i8;  // [sp-0x15c]
    let v7: i128;  // [sp-0x158]
    let v8: i128;  // [sp-0x148]
    let v9: i128;  // [sp-0x138]
    let v10: i128;  // [sp-0x128]
    let v11: i128;  // [sp-0x118]
    let v12: i128;  // [sp-0x108]
    let v13: i128;  // [sp-0xf8]
    let v14: i128;  // [sp-0xe8]
    let v15: i128;  // [sp-0xd8]
    let v16: i128;  // [sp-0xc8]
    let v17: i128;  // [sp-0xb8]
    let v18: i128;  // [sp-0xa8]
    let v19: i128;  // [sp-0x98]
    let v20: i128;  // [sp-0x88]
    let v21: i128;  // [sp-0x78]
    let v22: i128;  // [sp-0x68]
    let v23: i128;  // [sp-0x58]
    let v24: i128;  // [sp-0x48]
    let v26: i64;  // rax
    let v27: i64;  // rdi
    let v28: i64;  // rcx
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: i64;  // rdx
    let v32: i64;  // rdi
    let v33: i64;  // rax
    let v34: i64;  // rdi
    let v36: i64;  // r14
    let v38: i64;  // r12
    let v39: i64;  // r14
    let v40: i64;  // rax
    let v41: i64;  // r14
    let v43: i128;  // xmm1
    let v44: i64;  // rcx
    let v45: i128;  // xmm1
    let v46: i128;  // xmm1
    let v47: i128;  // xmm1
    let v48: i128;  // xmm1
    let v49: i128;  // xmm1
    let v50: i64;  // rsi
    let v51: i64;  // rcx
    let v52: i64;  // rdx
    let v53: i128;  // xmm0
    let v54: i64;  // r15
    let v55: i8;  // cl
    let v56: i128;  // xmm1
    let v57: i64;  // rcx
    let v58: i64;  // rax
    let v59: i128;  // xmm0
    let v60: i64;  // rax
    let v62: i128;  // xmm1
    let v63: i128;  // xmm0
    let v64: i128;  // xmm1
    let v65: i128;  // xmm0
    let v66: i128;  // xmm0
    let v67: i8;  // sil
    let v68: i8;  // dl
    let v69: i64;  // rdi
    let v70: i64;  // rax
    let v71: i64;  // rsi
    let v72: i64;  // rdx
    let v73: i64;  // rcx
    let v74: i64;  // rcx
    let v75: i64;  // rsi
    let v76: i64;  // rcx

    v26 = *((a1 + 8) as &i64);
    v27 = *((a1 + 16) as &i64);
    if v27 < v26 {
        v28 = *(a1 as &i64);
        v29 = v27 * 16;
        *((a1 + 16) as &i64) = v27 + 1;
        v30 = *((v28 + v29) as &i64);
        v31 = *((v28 + v29 + 8) as &i64);
        switch (v31) {
        case 1:
            switch (*(v30 as &i8)) {
            case 43:
                v2 = uu_expr::syntax_tree::Parser::next(a1);
                v40 = v2;
                v30 = *((&v2 as &char + 8) as &i64);
                v31 = *((&v2 as &char + 16) as &i64);
                if v40 != 7 {
                    v44 = *((&v2 as &char + 24) as &i64);
                    *((a0 + 8) as &i64) = v40;
                    *((a0 + 16) as &i64) = v30;
                    *((a0 + 24) as &i64) = v31;
                    *((a0 + 32) as &i64) = v44;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(v30, v31);
                v54 = *((&v2 as &char + 8) as &i64);
                v40 = *((&v2 as &char + 16) as &i64);
                *((a0 + 8) as &i8) = 0;
                *((a0 + 9) as &i8) = v67;
                *((a0 + 10) as &i8) = v68;
                *((a0 + 11) as &i32) = v5;
                *((a0 + 15) as &i8) = v6;
                *((a0 + 16) as &i64) = v58;
                *((a0 + 24) as &i64) = v54;
                *((a0 + 32) as &i64) = v40;
                *(a0 as &i64) = 0;
                return v40;
            case 40:
                v41 = a1;
                uu_expr::syntax_tree::Parser::parse_precedence(&v2, a1, 0);
                v45 = v4;
                v0 = v3;
                v1 = v45;
                if vvar_713 {
                    vvar_828{reg 224} = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v53;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v8 = v1;
                v7 = v0;
                v2 = uu_expr::syntax_tree::Parser::next(v41);
                v50 = v2;
                v51 = *((&v2 as &char + 8) as &i64);
                v52 = *((&v2 as &char + 16) as &i64);
                if v50 != 7 {
                    v60 = *((&v2 as &char + 24) as &i64);
                    *((a0 + 8) as &i64) = v50;
                    *((a0 + 16) as &i64) = v51;
                    *((a0 + 24) as &i64) = v52;
                    *((a0 + 32) as &i64) = v60;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                if !(v52 == 1) || !(*(v51 as &i8) == 41) {
                    v69 = *((v41 + 16) as &i64) - 1;
                    if v69 < *((v41 + 8) as &i64) {
                        v70 = *(v41 as &i64);
                        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v70 + v69 * 16) as &i64), *((v70 + v69 * 16 + 8) as &i64));
                        *((a0 + 32) as &i64) = *((&v2 as &char + 16) as &i64);
                        *((a0 + 16) as &i192) = v2;
                        *((a0 + 8) as &i64) = 6;
                        *(a0 as &i64) = 1;
                        return v40;
                    }
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                v55 = v7;
                v67 = *((&v7 as &char + 1) as &i8);
                v68 = *((&v7 as &char + 2) as &i8);
                v5 = *((&v7 as &char + 3) as &i32);
                v6 = *((&v7 as &char + 7) as &i8);
                v58 = *((&v7 as &char + 8) as &i64);
                v54 = v8;
                v40 = *((&v8 as &char + 8) as &i64);
                break;
            default:
LABEL_4ff9bd:
                vvar_878{stack -392} = <T as alloc::slice::hack::ConvertVec>::to_vec(v30, v31);
                *((a0 + 8) as &i8) = 0;
                *((a0 + 9) as &i8) = v67;
                *((a0 + 10) as &i8) = v68;
                *((a0 + 11) as &i32) = v5;
                *((a0 + 15) as &i8) = v6;
                *((a0 + 16) as &i64) = v58;
                *((a0 + 24) as &i64) = v54;
                *((a0 + 32) as &i64) = v40;
                *(a0 as &i64) = 0;
                return v40;
            }
        case 6:
            if !(*((v30 + 4) as &i16) ^ 29300) && !(1935832435 ^ *(v30 as &i32)) {
                v39 = a1;
                uu_expr::syntax_tree::Parser::parse_precedence(&v2, a1, 0);
                v43 = v4;
                v0 = v3;
                v1 = v43;
                if vvar_710 {
                    vvar_822{reg 224} = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v53;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v12 = v1;
                v11 = v0;
                v2 = uu_expr::syntax_tree::Parser::parse_precedence(v39, 0);
                v49 = *((&v2 as &char + 24) as &i128);
                v0 = *((&v2 as &char + 8) as &i128);
                v1 = v49;
                if vvar_740 {
                    v59 = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v59;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v14 = v1;
                v13 = v0;
                v2 = uu_expr::syntax_tree::Parser::parse_precedence(v39, 0);
                v64 = *((&v2 as &char + 24) as &i128);
                v0 = *((&v2 as &char + 8) as &i128);
                v1 = v64;
                if vvar_761 {
                    v66 = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v66;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v20 = v1;
                v19 = v0;
                v58 = alloc::alloc::exchange_malloc();
                *((v58 + 16) as &i128) = v12;
                *(v58 as &i128) = v11;
                v0 = v58;
                v54 = alloc::alloc::exchange_malloc();
                *((v54 + 16) as &i128) = v14;
                *(v54 as &i128) = v13;
                v2 = v54;
                v40 = alloc::alloc::exchange_malloc();
                *((v40 + 16) as &i128) = v20;
                *(v40 as &i128) = v19;
                v55 = v76 | -0x100 | 2;
                break;
            } else {
                if !(!(*((v30 + 4) as &i16) ^ 26740) && !(1735288172 ^ *(v30 as &i32))) {
                    goto LABEL_4ff9bd;
                }
                v40 = uu_expr::syntax_tree::Parser::parse_precedence(&v2, a1, 0);
                v47 = v4;
                v0 = v3;
                v1 = v47;
                if vvar_720 {
                    v53 = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v53;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v24 = v1;
                v23 = v0;
                v40 = alloc::alloc::exchange_malloc();
                *((v40 + 16) as &i128) = v24;
                *(v40 as &i128) = v23;
                v55 = v57 | -0x100 | 3;
                break;
            }
        case 5:
            if !(*((v30 + 4) as &i8) ^ 104) && !(1668571501 ^ *(v30 as &i32)) {
                uu_expr::syntax_tree::Parser::parse_precedence(&v2, a1, 0);
                v46 = v4;
                v0 = v3;
                v1 = v46;
                if vvar_717 {
                    vvar_810{reg 224} = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v53;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v10 = v1;
                v9 = v0;
                v2 = uu_expr::syntax_tree::Parser::parse_precedence(a1, 0);
                v56 = *((&v2 as &char + 24) as &i128);
                v0 = *((&v2 as &char + 8) as &i128);
                v1 = v56;
                if vvar_749 {
                    v63 = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v63;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v18 = v1;
                v17 = v0;
                v58 = __rust_alloc(32, 8);
                *((v58 + 16) as &i128) = v10;
                *(v58 as &i128) = v9;
                v2 = v58;
                v40 = __rust_alloc(32, 8);
                *((v40 + 16) as &i128) = v18;
                *(v40 as &i128) = v17;
                v55 = v74 | -0x100 | 1;
                v67 = v75 | -0x100 | 2;
                v68 = 0;
                break;
            } else {
                if !(!(*((v30 + 4) as &i8) ^ 120) && !(1701080681 ^ *(v30 as &i32))) {
                    goto LABEL_4ff9bd;
                }
                uu_expr::syntax_tree::Parser::parse_precedence(&v2, a1, 0);
                v48 = v4;
                v0 = v3;
                v1 = v48;
                if vvar_730 {
                    vvar_816{reg 224} = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v53;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v16 = v1;
                v15 = v0;
                v2 = uu_expr::syntax_tree::Parser::parse_precedence(a1, 0);
                v62 = *((&v2 as &char + 24) as &i128);
                v0 = *((&v2 as &char + 8) as &i128);
                v1 = v62;
                if vvar_755 {
                    v65 = v0;
                    *((a0 + 24) as &i128) = v1;
                    *((a0 + 8) as &i128) = v65;
                    *(a0 as &i64) = 1;
                    return v40;
                }
                v22 = v1;
                v21 = v0;
                v58 = alloc::alloc::exchange_malloc();
                *((v58 + 16) as &i128) = v16;
                *(v58 as &i128) = v15;
                v2 = v58;
                v40 = alloc::alloc::exchange_malloc();
                *((v40 + 16) as &i128) = v22;
                *(v40 as &i128) = v21;
                v67 = v71 | -0x100 | 2;
                v68 = v72 | -0x100 | 1;
                v55 = v73 | -0x100 | 1;
                break;
            }
        default:
LABEL_4ff9bd:
            vvar_863{stack -392} = <T as alloc::slice::hack::ConvertVec>::to_vec(v30, v31);
            *((a0 + 8) as &i8) = 0;
            *((a0 + 9) as &i8) = v67;
            *((a0 + 10) as &i8) = v68;
            *((a0 + 11) as &i32) = v5;
            *((a0 + 15) as &i8) = v6;
            *((a0 + 16) as &i64) = v58;
            *((a0 + 24) as &i64) = v54;
            *((a0 + 32) as &i64) = v40;
            *(a0 as &i64) = 0;
            return v40;
        }
        *((a0 + 8) as &i8) = v55;
        *((a0 + 9) as &i8) = v67;
        *((a0 + 10) as &i8) = v68;
        *((a0 + 11) as &i32) = v5;
        *((a0 + 15) as &i8) = v6;
        *((a0 + 16) as &i64) = v58;
        *((a0 + 24) as &i64) = v54;
        *((a0 + 32) as &i64) = v40;
        *(a0 as &i64) = 0;
        return v40;
    } else {
        v32 = v27 - 1;
        if v32 < v26 {
            v33 = *(a1 as &i64);
            v34 = v32 * 16;
            v36 = *((v33 + v34 + 8) as &i64);
            memcpy(v38, *((v33 + v34) as &i64), v36);
            *((a0 + 8) as &i64) = 1;
            *((a0 + 16) as &i64) = v36;
            *((a0 + 24) as &i64) = v38;
            *((a0 + 32) as &i64) = v36;
            *(a0 as &i64) = 1;
            return v40;
        }
        core::panicking::panic_bounds_check(); /* do not return */
    }
}
