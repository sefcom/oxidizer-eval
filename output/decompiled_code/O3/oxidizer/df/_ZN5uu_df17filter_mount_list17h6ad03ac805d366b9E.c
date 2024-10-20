fn uu_df::filter_mount_list(a0: u64, a1: u64, a2: u64) -> int {
    let v0: u8;  // [sp-0x18a]
    let v1: u8;  // [sp-0x189]
    let v2: u64;  // [sp-0x188]
    let v3: &u8;  // [sp-0x180]
    let v4: u64;  // [sp-0x178]
    let v5: u64;  // [sp-0x170]
    let v6: void*;  // [sp-0x168], Other Possible Types: struct16
    let v7: u64;  // [sp-0x160]
    let v8: void*;  // [sp-0x158], Other Possible Types: u64
    let v9: u64;  // [sp-0x150]
    let v10: &u64;  // [sp-0x148]
    let v11: u64;  // [sp-0x140]
    let v12: u64;  // [sp-0x138]
    let v13: u64;  // [sp-0x130]
    let v14: u64;  // [sp-0x120]
    let v15: u64;  // [sp-0x118]
    let v16: u64;  // [sp-0x110]
    let v17: u64;  // [sp-0x108]
    let v18: u64;  // [sp-0x100]
    let v19: u64;  // [sp-0xf8]
    let v20: u64;  // [sp-0xf0]
    let v21: &u64;  // [sp-0xe8]
    let v22: &u64;  // [sp-0xe0]
    let v23: u64;  // [sp-0xd8]
    let v24: &u64;  // [sp-0xd0]
    let v25: u64;  // [sp-0xc8]
    let v26: u8;  // [bp-0xc0]
    let v27: i8;  // [bp-0xb8]
    let v28: i8;  // [bp-0xa8]
    let v29: i8;  // [bp-0xa0]
    let v30: i8;  // [bp-0x90]
    let v31: i8;  // [bp-0x88]
    let v32: i8;  // [bp-0x70]
    let v33: i8;  // [bp-0x60]
    let v34: i8;  // [bp-0x58]
    let v35: u8;  // [bp-0x38]
    let v36: u8;  // [bp-0x37]
    let v38: &u64;  // rsi
    let v39: u64;  // rax
    let v40: &u64;  // rsi
    let v41: &u64;  // r13
    let v43: &u64;  // r13
    let v45: u64;  // r14
    let v46: void*;  // r15
    let v47: u64;  // rbx
    let v48: u64;  // r14
    let v49: void*;  // r15
    let v50: u64;  // rbx
    let v51: u64;  // rbp
    let v52: void*;  // r12
    let v53: void*;  // r12
    let v54: u64;  // rax
    let v55: u64;  // r15
    let v56: u64;  // rdx
    let v57: u64;  // r15
    let v58: u64;  // rdx
    let v59: u64;  // r14
    let v60: u64;  // rbx
    let v61: u128;  // xmm0
    let v62: u256;  // ymm0

    v6 = 0;
    v7 = 8;
    v8 = 0;
    v38 = a1->field_8;
    v39 = a1->field_10;
    v21 = v38;
    v22 = v38;
    v23 = a1->field_0;
    v10 = &v38[19 * v39];
    v24 = v10;
    if !v39 {
        a0->field_10 = v8;
        v61 = *(&v6 as &i128);
        a0->field_0 = v61;
        return Conv(256->64, ((vvar_529{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_528{reg 224})));
    }
    v1 = a2->field_50;
    v0 = a2->field_51;
    v18 = a2->field_30;
    v13 = a2->field_38;
    v17 = a2->field_18;
    v12 = a2->field_20;
    v16 = a2->field_40;
    v20 = v16 * 24;
    v14 = a2->field_28;
    v19 = v14 * 24;
    do {
        v40 = v38;
        v41 = v40 + 19;
        if v25 == 0x8000000000000000 {
            goto LABEL_490079;
        }
        v25 = *(v40);
        memcpy(&v26, v40 + 1, 144);
        if !(!v35) && !(!v1) || !(!v36) && !(v0) {
LABEL_48fcfe:
            goto LABEL_48fd0b;
        }
        if v18 != 0x8000000000000000 && v16 {
            v45 = v31;
            v46 = 0;
            if *((16 + v13 + v46 as &u8) as &i64) == v45 && !bcmp(*((8 + v13 + v46 as &u8) as &i64), v30, v45) as i64 {
                goto LABEL_48fcfe;
            }
            v46 += 24;
            if !(v20 == v46) {
                continue;
            }
        }
        if v17 != 0x8000000000000000 {
            if !v14 {
                goto LABEL_48fcfe;
            }
            v47 = v30;
            v48 = v31;
            v49 = 0;
            while (!(*((16 + v12 + v49 as &u8) as &i64) == v48) || !(!bcmp(*((8 + v12 + v49 as &u8) as &i64), v47, v48) as i64)) {
                v49 += 24;
                if v19 == v49 {
                    goto LABEL_48fcfe;
                }
            }
        }
        v50 = v7;
        v5 = v8;
        if v5 {
            v11 = *(&v26 as &i64);
            v51 = v27;
            v3 = v28;
            v4 = v29;
            v2 = v34;
            v9 = v33;
            v15 = v32;
            if !v15 {
                v53 = 0;
                do {
                    if *((16 + v50 + v53 as &u8) as &i64) == v51 && !bcmp(*((8 + v50 + v53 as &u8) as &i64), v11, v51) as i64 && (!v4 || *(v3) != 47 || *((40 + v50 + v53 as &u8) as &i64) && *(*((32 + v50 + v53 as &u8) as &i64) as &i8) == 47) && (v57 = *((112 + v50 + v53 as &u8) as &i64), v2 >= v57) {
                        v58 = v4;
                        if !(v58 != *((40 + v50 + v53 as &u8) as &i64)) && !(bcmp(v3, *((32 + v50 + v53 as &u8) as &i64), v58) as i64) || !(v2 == v57) || !(!bcmp(v9, *((104 + v50 + v53 as &u8) as &i64), v2) as i64) {
                            goto LABEL_48fcfe;
                        }
                    }
                } while ((v53 += 152, v5 * 152 != v53));
            } else {
                v52 = 0;
                do {
                    if *((16 + v50 + v52 as &u8) as &i64) == v51 && !bcmp(*((8 + v50 + v52 as &u8) as &i64), v11, v51) as i64 && (!v4 || *(v3) != 47 || *((40 + v50 + v52 as &u8) as &i64) && *(*((32 + v50 + v52 as &u8) as &i64) as &i8) == 47) {
                        v54 = *((88 + v50 + v52 as &u8) as &i64);
                        v55 = *((112 + v50 + v52 as &u8) as &i64);
                        if !v54 {
                            if v2 < v55 {
                                continue;
                            }
                        } else {
                            if v2 < v55 && v15 <= v54 {
                                continue;
                            }
                        }
                        v56 = v4;
                        if !(v56 != *((40 + v50 + v52 as &u8) as &i64)) && !(bcmp(v3, *((32 + v50 + v52 as &u8) as &i64), v56) as i64) || !(v2 == v55) || !(!bcmp(v9, *((104 + v50 + v52 as &u8) as &i64), v2) as i64) {
                            goto LABEL_48fcfe;
                        }
                    }
                } while ((v53 += 152, v5 * 152 != v53));
            }
        }
        v59 = v5;
        if v59 == v6 {
            v6 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v60 = v7;
        }
        memcpy(v59 * 152 + v60, &v25, 152);
        v8 = v59 + 1;
LABEL_48fd0b:
    } while (v41 != v10);
    v43 = v10;
LABEL_490079:
    v22 = v43;
}
