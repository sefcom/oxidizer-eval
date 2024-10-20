fn uu_dd::blocks::block(a0: &u64, a1: &u8, a2: &u8, a3: u64, a4: u32, a5: &struct_0) -> u64 {
    let v0: u32;  // [sp-0xb4]
    let v1: &u8;  // [sp-0xa8]
    let v2: u32;  // [sp-0x9c]
    let v3: u128;  // [bp-0x98], Other Possible Types: struct16
    let v4: &u64;  // [sp-0x88]
    let v5: &u8;  // [sp-0x80], Other Possible Types: struct16
    let v6: u64;  // [sp-0x78]
    let v7: &u8;  // [sp-0x70], Other Possible Types: u64
    let v8: u64;  // [sp-0x68]
    let v9: u64;  // [sp-0x58], Other Possible Types: &u8
    let v10: u64;  // [sp-0x50]
    let v11: &u64;  // [sp-0x48]
    let v12: &u64;  // [sp-0x40]
    let v14: &u64;  // r8
    let v15: u64;  // rbx
    let v16: &u64;  // rax
    let v17: &u8;  // r14
    let v18: void*;  // r12
    let v19: u256;  // ymm0
    let v20: &u8;  // rbp
    let v21: u64;  // r15
    let v22: &u8;  // rbp
    let v23: &u8;  // r13
    let v24: &u8;  // rbp
    let v25: u64;  // 4096
    let v27: u64;  // rbx
    let v28: u128;  // xmm0
    let v29: u64;  // r14
    let v30: u64;  // r14
    let v31: &u8;  // rbp
    let v32: u64;  // r15
    let v33: u64;  // r15
    let v34: &u8;  // rbx
    let v35: &u8;  // rdi
    let v36: &u64;  // r15
    let v37: &u64;  // rax
    let v38: &u64;  // rcx
    let v39: &u64;  // r15
    let v40: &u64;  // rdi
    let v41: u64;  // rcx
    let v43: u64;  // rsi

    v2 = a4;
    v0 = a5->field_18;
    v14 = 8;
    v15 = 0;
    v8 = &v3;
    v16 = 0;
    do {
        v17 = a1;
        if !a2 {
            v10 = v15;
            v11 = v14;
            v12 = v16;
            v21 = 1;
            v22 = 0;
            v18 = 0;
            v1 = v17;
            a2 = 0;
            v12 = v12;
        } else {
            v20 = 0;
            do {
                v18 = v18 | -0x100 | *((v17 + v20) as &i8) == 10;
                if *((v17 + v20) as &i8) == 10 {
                    a2 += ~(v20);
                    v1 = v17 + v20 + 1;
                    goto LABEL_4a68b5;
                }
            } while ((v20 += 1, a2 != v20));
            v1 = v17;
LABEL_4a68b5:
            v24 = v23;
            v10 = v10;
            v11 = v11;
            v12 = v12;
            if !v24 {
                v21 = 1;
                v22 = 0;
                v12 = v12;
            } else {
                v21 = __rust_alloc(v24, 1);
                if !v21 {
                    v9 = v24;
                }
                continue;
            }
        }
        v12 = v12;
        v27 = v25;
        memcpy(v21, v17, v24);
        v28 = *(&v10 as &i128);
        vvar_24{reg 224} = ((vvar_24{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_220{reg 224}))
        v3 = v28;
        v4 = v12;
        v5 = v24;
        v6 = v21;
        v7 = v24;
        if v27 < v24 {
            v0 += 1;
            a5->field_18 = v0;
        }
        v29 = v27;
        v30 = v29 - v24;
        v9 = v21;
        if v29 > v24 {
            v5 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v24, v30);
            v33 = v6;
            v34 = v7;
            v35 = &v34[v33];
            if v30 >= 2 {
                memset(v35, 32, v30 - 1);
                v34 = &v34[v30 + 1];
                v35 = &v34[v33];
            }
            *(v35) = 32;
            v27 = v34 + 1;
            v31 = v5;
            v32 = v6;
        }
        v7 = v27;
        v36 = v4;
        if v36 == v3 as i64 {
            v3 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        v37 = *((&v3 as &char + 8) as &i64);
        v38 = v36 * 3;
        *((v37 + 0x8 * v38 as u64) as &&u8) = v31;
        *(8 + v37 + 0x8 * v38 as u64) = v32;
        *(16 + v37 + 0x8 * v38 as u64) = v7;
        v16 = v36 as &char + 1;
        v15 = v3;
        v14 = *((&v3 as &char + 8) as &i64);
        a1 = v1;
    } while (v18 as u8);
    if !v16 {
        v39 = 0;
    } else if !v2 as i8 || !a5->field_8 {
        v40 = *((8 + v14 + 0x8 * v38 as u64) as &i64);
        v41 = *((16 + v14 + 0x8 * v38 as u64) as &i64);
        do {
            v43 = 0;
            if v41 == v43 {
                if !*((v14 + 0x8 * v38 as u64) as &i64) << 1 {
                    *(a0) = v15;
                    a0[1] = v14;
                    a0[2] = v39;
                    return a0;
                }
                *(a0) = v15;
                a0[1] = v14;
                a0[2] = v39;
                return a0;
            }
        } while ((v20 += 1, a2 != v20));
    }
    *(a0) = v15;
    a0[1] = v14;
    a0[2] = v39;
    return a0;
}
