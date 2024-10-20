fn uu_sort::tokenize(a0: &u8, a1: u64, a2: u32, a3: void*) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v4: &u8;  // r14
    let v5: u64;  // r13
    let v6: &u8;  // r12
    let v7: void*;  // r15
    let v8: void*;  // r9
    let v9: &u8;  // rax
    let v10: u64;  // rbp
    let v11: u64;  // rcx
    let v12: u32;  // esi
    let v13: u32;  // r8d
    let v14: u32;  // edi
    let v15: &u8;  // rcx
    let v16: u64;  // r14
    let v17: u64;  // r12
    let v18: void*;  // rbp
    let v19: &u8;  // r14
    let v20: &u8;  // r15
    let v21: u64;  // rcx
    let v22: &u8;  // r14
    let v23: u32;  // edx
    let v24: u32;  // edi
    let v25: u32;  // esi
    let v26: u32;  // esi
    let v27: &u8;  // r12
    let v28: &u8;  // rax
    let v29: &u8;  // rcx
    let v30: u64;  // r9
    let v31: &u8;  // rcx

    if a3[2] {
        core::panicking::panic(); /* do not return */
    }
    v4 = a0;
    if a2 == 0x110000 {
        if !*(a3) {
            alloc::raw_vec::RawVec<T,A>::grow_one(a3);
        }
        *(a3[1] as &i128) = 0;
        a3[2] = 1;
        if !v0 {
            v9 = a3[1];
            v9[8] = v0;
            return v9;
        }
        v0 = a1;
        v17 = 1;
        v18 = 0;
        loop {
            v20 = v19;
            v21 = *(v20);
            if v21 >= 0 {
                v22 = v20 + 1;
            } else {
                v23 = v21 & 31;
                v24 = v20[1] & 63;
                if (v21 & 255) <= 223 {
                    v22 = v20 + 2;
                    v21 = v23 * 64 | v24;
                } else {
                    v25 = v20[2] & 63 | v24 * 64;
                    if (v21 & 255) < 240 {
                        v22 = v20 + 3;
                        v21 = v25 | v23 * 0x1000;
                    } else {
                        v22 = v20 + 4;
                        v21 = v20[3] & 63 | v25 * 64 | (v23 & 7) * 0x40000;
                    }
                }
            }
            if v21 - 9 < 5 || v21 == 32 {
                if !1 {
                    goto LABEL_4c3982;
                }
                goto LABEL_4c38e1;
            }
            if v21 < 128 {
                goto LABEL_4c38e1;
            }
            if v21 >> 8 > 31 {
                switch (v26) {
                case 32:
                    break;
                case 48:
                    break;
                default:
LABEL_4c38e1:
                    v18 = v18 as &u8 - v20 + v22;
                    if v22 == &v4[v0] {
                        goto LABEL_4c3b75;
                    }
                    continue;
                }
            } else {
                switch (v26) {
                case 0:
                    break;
                default:
LABEL_4c38e1:
                    v18 = v18 as &u8 - v20 + v22;
                    if !(v22 == &v4[v0]) {
                        continue;
                    }
LABEL_4c3b75:
                    if v17 {
                        *((v17 * 16 + a3[1] - 8) as &u64) = v0;
                        return v9;
                    }
                    core::option::unwrap_failed(); /* do not return */
                }
                if !(!((1 | !v21 == 5760) & 1)) {
                    goto LABEL_4c38e1;
                }
LABEL_4c3982:
                if !v17 {
                    core::option::unwrap_failed(); /* do not return */
                }
                *((v17 * 16 + a3[1] - 8) as &void*) = v18;
                v27 = a3[2];
                if v27 == *(a3) {
                    alloc::raw_vec::RawVec<T,A>::grow_one(a3);
                    break;
                }
            }
        }
        v28 = a3[1];
        v29 = v27 * 16;
        *((v28 + v29) as &void*) = v18;
        *((v28 + v29 + 8) as &i64) = 0;
        v17 = v27 + 1;
        a3[2] = v17;
        goto LABEL_4c38e1;
    } else {
        v0 = a1;
        v5 = &a0[a1];
        v6 = 0;
        v7 = 0;
        v8 = 0;
        if a0 != v5 {
            loop {
                v9 = v4;
                v10 = v7;
                v11 = *(v9);
                if v11 >= 0 {
                    v4 = v9 + 1;
                } else {
                    v12 = v11 & 31;
                    v13 = v9[1] & 63;
                    if (v11 & 255) <= 223 {
                        v4 = v9 + 2;
                        v11 = v12 * 64 | v13;
                    } else {
                        v14 = v9[2] & 63 | v13 * 64;
                        if (v11 & 255) < 240 {
                            v4 = v9 + 3;
                            v11 = v14 | v12 * 0x1000;
                        } else {
                            v4 = v9 + 4;
                            v11 = v9[3] & 63 | v14 * 64 | (v12 & 7) * 0x40000;
                        }
                    }
                }
                v7 = v4 - v9 + v10;
                if v11 == a2 {
                    if v6 == *(a3) {
                        a2 = a2;
                        v8 = v8;
                        alloc::raw_vec::RawVec<T,A>::grow_one(a3);
                    }
                    v9 = a3[1];
                    v15 = v6 * 16;
                    *((v9 + v15) as &void*) = v8;
                    *((v9 + v15 + 8) as &u64) = v10;
                    v6 += 1;
                    a3[2] = v6;
                    v8 = v10 + 1;
                    if v4 == v5 {
                        break;
                    }
                } else if v4 == v5 {
                    break;
                }
            }
        }
        v16 = v0;
        if v8 >= v16 {
            return v9;
        }
        if v6 == *(a3) {
            alloc::raw_vec::RawVec<T,A>::grow_one(a3);
        }
        v9 = a3[1];
        v31 = v6 * 16;
        *((v9 + v31) as &u64) = v30;
        *((v9 + v31 + 8) as &u64) = v16;
        a3[2] = v6 + 1;
        return v9;
    }
}
