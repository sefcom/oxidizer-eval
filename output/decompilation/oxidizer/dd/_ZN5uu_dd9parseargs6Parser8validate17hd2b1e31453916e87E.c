fn uu_dd::parseargs::Parser::validate(a1: &struct40) -> Result<struct164, struct16> {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x5e]
    let v1: u8;  // [bp-0x5d]
    let v2: u8;  // [bp-0x5c]
    let v3: u8;  // [bp-0x5a]
    let v4: u8;  // [bp-0x59]
    let v5: u128;  // [bp-0x58]
    let v6: struct18;  // [bp-0x48]
    let v8: u8;  // sil
    let v9: u8;  // cl
    let v10: u8;  // al
    let v12: u8;  // r10b
    let v13: u8;  // r11b
    let v14: u128;  // xmm0
    let v15: u8;  // r8b
    let v16: u8;  // r9b
    let v17: u64;  // rdx
    let v18: u8;  // al
    let v19: core::fmt::rt::Argument;  // r12b
    let v20: core::fmt::rt::Argument;  // ebp
    let v21: u64;  // rax
    let v22: u64;  // rcx
    let v23: u8;  // sil
    let v24: u8;  // dil
    let v25: u8;  // r8b
    let v26: u8;  // bpl
    let v27: u64;  // rdx
    let v28: i64;  // rdi
    let v29: u8;  // r12b
    let v30: u64;  // rax
    let v31: u32;  // ymm1
    let v33: u64;  // rcx
    let v34: u8;  // dl
    let v38: u64;  // rax
    let v40: u64;  // rsi
    let v42: u64;  // rdi
    let v44: u64;  // rcx
    let v46: u64;  // rdi
    let v47: u64;  // r11
    let v48: u64;  // r9
    let v49: u64;  // r8
    let v50: i64;  // rdi

    v8 = *((a0 + 162) as &i8);
    v9 = *((a0 + 163) as &i8);
    v10 = *((a0 + 164) as &i8);
    v3 = *((a0 + 165) as &i8);
    v12 = *((a0 + 167) as &i8);
    v4 = *((a0 + 168) as &i8);
    v13 = *((a0 + 169) as &i8);
    v14 = *((a0 + 170) as &i32);
    v15 = *((a0 + 174) as &i8);
    v16 = *((a0 + 175) as &i8);
    if *((a0 + 160) as &i8) {
        if !(!v8 && !*((a0 + 161) as &i8)) {
            *((v28 + 8) as &u64) = v17;
            *(v28 as &i64) = 3;
            return;
        } else if !v9 {
            v29 = v13;
            v0 = v12;
            v1 = v16;
            v2 = v15;
            v5 = v14;
        } else if !v10 {
            v29 = v13;
            v0 = v12;
            v1 = v16;
            v2 = v15;
            v5 = v14;
        } else {
            *((v28 + 8) as &u64) = v17;
            *(v28 as &i64) = 3;
            return;
        }
    } else {
        if *((a0 + 161) as &i8) {
            if v8 {
                *((v28 + 8) as &u64) = v17;
                *(v28 as &i64) = 3;
                return;
            } else if !v9 {
                v29 = v13;
                v0 = v12;
                v1 = v16;
                v2 = v15;
                v5 = v14;
            } else if !v10 {
                v29 = v13;
                v0 = v12;
                v1 = v16;
                v2 = v15;
                v5 = v14;
            } else {
                *((v28 + 8) as &u64) = v17;
                *(v28 as &i64) = 3;
                return;
            }
        } else {
            if v8 {
                if !v9 {
                    v29 = v13;
                    v0 = v12;
                    v1 = v16;
                    v2 = v15;
                    v5 = v14;
                } else if !v10 {
                    v29 = v13;
                    v0 = v12;
                    v1 = v16;
                    v2 = v15;
                    v5 = v14;
                } else {
                    *((v28 + 8) as &u64) = v17;
                    *(v28 as &i64) = 3;
                    return;
                }
            } else {
                if !v9 {
                    v29 = v13;
                    v0 = v12;
                    v1 = v16;
                    v2 = v15;
                    v5 = v14;
                } else if !v10 {
                    v29 = v13;
                    v0 = v12;
                    v1 = v16;
                    v2 = v15;
                    v5 = v14;
                } else {
                    *((v28 + 8) as &u64) = v17;
                    *(v28 as &i64) = 3;
                    return;
                }
            }
        }
    }
    v20 = v19 as u32;
    v21 = uu_dd::parseargs::get_ctable(v20 as u8, v18);
    v23 = v2;
    v24 = v1;
    v25 = v0;
    if (v22 & 1) {
        *((v28 + 8) as &u64) = v17;
        *(v28 as &i64) = 3;
        return;
    }
    if *((a0 + 48) as &i64) {
        if !v19 {
            v0 = v25;
            v1 = v24;
            v2 = v23;
        } else if v20 != 3 {
LABEL_4d2d57:
            v0 = v25;
            v1 = v24;
            v2 = v23;
        } else if v3 {
            if *((a0 + 166) as &i8) {
                *((v28 + 8) as &u64) = v17;
                *(v28 as &i64) = 3;
                return;
            }
            goto LABEL_4d2d57;
        } else {
            v0 = v25;
            v1 = v24;
            v2 = v23;
        }
    } else {
        if *((a0 + 166) as &i8) || v3 {
            *((v28 + 8) as &u64) = v17;
            *(v28 as &i64) = 3;
            return;
        }
        v0 = v25;
        v1 = v24;
        v2 = v23;
    }
    v6 = uu_dd::parseargs::conversion_mode(v21, v27, v22, *((a0 + 160) as &i8), v4);
    v33 = v30;
    v38 = v30;
    v40 = *((a0 + 72) as &i64) * v38;
    if *((a0 + 207) as &i8) {
        v42 = 1;
    } else {
        v42 = v33;
    }
    v44 = v42;
    v46 = *((a0 + 88) as &i64) * v44;
    v47 = a0 + 193;
    v49 = *((a0 + 104) as &i64);
    *((v50 + 32) as &i64) = *((a0 + 128) as &i64);
    *((v50 + 16) as &i128) = *((a0 + 112) as &i128);
    *((v50 + 56) as &i64) = *((a0 + 152) as &i64);
    *((v50 + 40) as &i128) = *((a0 + 136) as &i128);
    *((v50 + 64) as &i128) = *((a0 + 176) as &i128);
    *((v50 + 150) as &i64) = *(v47 as &i64);
    *((v50 + 157) as &i64) = *((v47 + 7) as &i64);
    *((v50 + 96) as &u64) = v6.field_16;
    *((v50 + 80) as &i128) = *(&v6.field_0 as &i128);
    *(v50 as &u64) = v48;
    *((v50 + 8) as &u64) = v49;
    *((v50 + 104) as &u8) = v4;
    *((v50 + 105) as &u8) = v26;
    *((v50 + 106) as &u8) = v0;
    *((v50 + 107) as &u8) = v29;
    *((v50 + 112) as &u64) = v30;
    *((v50 + 120) as &u64) = v33;
    *((v50 + 128) as &u64) = v40;
    *((v50 + 136) as &u64) = v46;
    *((v50 + 144) as &u32) = v31;
    *((v50 + 148) as &u8) = v2;
    *((v50 + 149) as &u8) = v1;
    *((v50 + 165) as &u8) = v34;
    *((v50 + 166) as &i8) = *((a0 + 208) as &i8);
    return;
}
