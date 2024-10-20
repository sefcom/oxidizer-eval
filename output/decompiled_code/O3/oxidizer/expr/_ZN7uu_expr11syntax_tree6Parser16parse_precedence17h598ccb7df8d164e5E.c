fn uu_expr::syntax_tree::Parser::parse_precedence(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i8;  // [sp-0xe9]
    let v1: i8;  // [bp-0xe8]
    let v2: i8;  // [sp-0xe7]
    let v3: i8;  // [sp-0xe6]
    let v4: i64;  // [sp-0xe0]
    let v5: i64;  // [bp-0xd8]
    let v6: i64;  // [sp-0xc8]
    let v7: i128;  // [sp-0xb8]
    let v8: i128;  // [sp-0xa8]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [bp-0x80], Other Possible Types: Enum
    let v12: i8;  // [bp-0x78]
    let v13: i8;  // [bp-0x68]
    let v14: i128;  // [sp-0x58]
    let v15: i128;  // [sp-0x48]
    let v17: i64;  // r12
    let v19: i128;  // xmm0
    let v20: i128;  // xmm1
    let v21: i64;  // rax
    let v22: i128;  // xmm0
    let v23: i256;  // ymm0
    let v24: i256;  // ymm0
    let v25: i128;  // xmm1
    let v26: i256;  // ymm1
    let v27: i256;  // ymm1
    let v28: i64;  // r14
    let v29: i64;  // r12
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i64;  // r13
    let v33: i64;  // rbp
    let v34: i64;  // r14
    let v35: i8;  // bpl
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v40: i64;  // rax
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1
    let v43: i64;  // rax
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i32;  // esi
    let v47: i8;  // dil

    if a2 > 5 {
        return uu_expr::syntax_tree::Parser::parse_simple_expression(a0, a1);
    }
    v17 = a2 + 1;
    uu_expr::syntax_tree::Parser::parse_precedence(&v11, a1, v17);
    v19 = v12;
    v20 = v13;
    v7 = v19;
    v8 = v20;
    if vvar_320 {
        *((a0 + 24) as &i128) = v8;
        *((a0 + 8) as &i128) = v7;
        *(a0 as &i64) = 1;
        return v21;
    }
    v10 = v17;
    v22 = v7;
    vvar_132{reg 224} = ((((vvar_122{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_121{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_131{reg 224}))
    v25 = v8;
    vvar_134{reg 256} = ((((vvar_125{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_124{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_133{reg 256}))
    v5 = v25;
    v1 = v22;
    v6 = *((a1 + 16) as &i64);
    if v6 < *((a1 + 8) as &i64) {
        v28 = a2 * 16;
        v29 = *((v28 + &g_56aab0 as &u8) as &i64);
        v9 = *((v28 + &g_56aab8 as &u8) as &i64);
        while (v9) {
            v30 = v6 * 16;
            v31 = *(a1 as &i64);
            v32 = *((v31 + v30) as &i64);
            v33 = *((v31 + v30 + 8) as &i64);
            v34 = 0;
            while (v33 != *((v29 + v34 + 8) as &i64) || bcmp(v32, *((v29 + v34) as &i64), v33) as i64) {
                v34 += 24;
                if (v9 << 3) + (v9 << 4) == v34 {
                    vvar_361{reg 64} = *((&v1 as &char + 3) as &i32);
                    vvar_362{reg 72} = *((&v1 as &char + 7) as &i8);
                    *((a0 + 24) as &i128) = v5;
                    *((a0 + 32) as &i64) = *((&v5 as &char + 8) as &i64);
                    *((a0 + 8) as &u8) = v1;
                    *((a0 + 9) as &i8) = v2;
                    *((a0 + 10) as &i8) = v3;
                    *((a0 + 11) as &i32) = v46;
                    *((a0 + 15) as &i8) = v47;
                    *((a0 + 16) as &i64) = v4;
                    *(a0 as &i64) = 0;
                    return v21;
                }
            }
            v35 = *((v29 + v34 + 16) as &i8);
            v0 = *((v29 + v34 + 17) as &i8);
            *((a1 + 16) as &i64) = v6 + 1;
            v11 = uu_expr::syntax_tree::Parser::parse_precedence(a1, v10);
            v36 = *((&v11 as &char + 8) as &i128);
            v37 = *((&v11 as &char + 24) as &i128);
            v7 = v36;
            v8 = v37;
            if vvar_330 {
                *((a0 + 24) as &i128) = v8;
                *((a0 + 8) as &i128) = v7;
                *(a0 as &i64) = 1;
                return v21;
            }
            v38 = v7;
            v39 = v8;
            v15 = v39;
            v14 = v38;
            v40 = __rust_alloc(32, 8);
            v41 = v1;
            v42 = v5;
            *((v40 + 16) as &i128) = v42;
            *(v40 as &i128) = v41;
            v11 = v40;
            v43 = __rust_alloc(32, 8);
            v44 = v14;
            vvar_226{reg 224} = ((((((((vvar_32{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_193{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_199{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_213{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_225{reg 224}))
            v45 = v15;
            vvar_228{reg 256} = ((((((((vvar_33{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_195{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_201{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_215{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_227{reg 256}))
            *((v43 + 16) as &i128) = v45;
            *(v43 as &i128) = v44;
            v1 = 1;
            v2 = v35;
            v3 = v0;
            v4 = v40;
            v5 = v43;
            v6 = *((a1 + 16) as &i64);
            if v6 >= *((a1 + 8) as &i64) {
                break;
            }
        }
    }
    v21 = v1;
    v46 = *((&v1 as &char + 3) as &i32);
    v47 = *((&v1 as &char + 7) as &i8);
    *((a0 + 24) as &i128) = v5;
    *((a0 + 32) as &i64) = *((&v5 as &char + 8) as &i64);
    *((a0 + 8) as &i8) = v21;
    *((a0 + 9) as &i8) = v2;
    *((a0 + 10) as &i8) = v3;
    *((a0 + 11) as &i32) = v46;
    *((a0 + 15) as &i8) = v47;
    *((a0 + 16) as &i64) = v4;
    *(a0 as &i64) = 0;
    return v21;
}
