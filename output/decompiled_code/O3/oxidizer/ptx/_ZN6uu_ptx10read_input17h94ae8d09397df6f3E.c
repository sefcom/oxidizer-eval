fn uu_ptx::read_input(a0: void*, a1: &u64, a2: u32, a3: void*) -> u64 {
    let v0: i64;  // [sp-0x1a8]
    let v1: struct16;  // [sp-0x1a0], Other Possible Types: i64
    let v2: i64;  // [sp-0x198]
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [sp-0x188]
    let v5: i64;  // [sp-0x180]
    let v6: i64;  // [sp-0x170]
    let v7: i64;  // [sp-0x168]
    let v8: i64;  // [sp-0x160]
    let v9: i64;  // [sp-0x158]
    let v10: i64;  // [sp-0x150]
    let v11: i192;  // [bp-0x148], Other Possible Types: struct8, Enum
    let v12: i8;  // [bp-0x140]
    let v13: i16;  // [sp-0x13c]
    let v14: i64;  // [sp-0x138]
    let v15: i128;  // [sp-0x130]
    let v16: i64;  // [sp-0x120]
    let v17: i64;  // [sp-0x118]
    let v18: i128;  // [sp-0x108]
    let v19: i128;  // [sp-0xf8]
    let v20: i64;  // [sp-0xe8]
    let v21: i64;  // [sp-0xe0]
    let v22: Enum;  // [sp-0xd0], Other Possible Types: i64
    let v23: i8;  // [bp-0xc8]
    let v25: i8;  // [bp-0x98]
    let v26: i8;  // [bp-0x88]
    let v27: struct24;  // [bp-0x80]
    let v28: struct56;  // [bp-0x68]
    let v29: i64;  // [sp-0x28]
    let v31: i64;  // r12
    let v32: i64;  // fs
    let v33: i64;  // rax
    let v34: i64;  // r12
    let v35: i64;  // r13
    let v36: i64;  // rax
    let v37: i128;  // xmm0
    let v38: i128;  // xmm0
    let v39: i256;  // ymm0
    let v40: i256;  // ymm0
    let v41: i64;  // r13
    let v42: i64;  // rbp
    let v43: i64;  // r12
    let v45: i64;  // rbx
    let v46: i64;  // rax
    let v47: i64;  // r14
    let v48: i64;  // r15
    let v49: i64;  // rax
    let v50: i64;  // rbx
    let v51: i64;  // r12
    let v52: i64;  // rdx
    let v53: i64;  // rbp
    let v58: i64;  // rdx
    let v59: i64;  // rax
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i64;  // rbx

    v29 = v31;
    if vvar_665 {
        v33 = *(v32 as &i64) - 64;
        v34 = *((v33 + &g_8 as &u8) as &i64);
        v35 = *((v33 + 16) as &i64);
    } else {
        v34 = std::sys::pal::unix::rand::hashmap_random_keys();
        v36 = *(v32 as &i64) - 64;
        *(v36 as &i64) = 1;
        *((v36 + &g_8 as &u8) as &i64) = v34;
        *((v36 + 16) as &i64) = v35;
    }
    *((*(v32 as &i64) + -56) as &i64) = v34 + 1;
    v37 = g_67b1d0;
    v18 = v37;
    v38 = g_67b1e0;
    vvar_61{reg 224} = ((((vvar_258{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_257{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_260{reg 224}))
    v19 = v38;
    v20 = v34;
    v21 = v35;
    v1 = 0;
    v2 = &g_8;
    v3 = 0;
    if !a2 {
        v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v46 = v2;
        *(v46 as &&i64) = &g_469a12;
        v45 = 1;
        goto LABEL_538d2a;
    } else if *((a3 + 88) as &i8) {
        v5 = a2 * 24;
        v41 = 1;
        v42 = 0;
        v43 = 0;
        do {
            v47 = *((a1 + v42 + &g_8 as &u8) as &i64);
            v48 = *((a1 + v42 + 16) as &i64);
            if v3 - 1 == v1 {
                v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
        } while ((v49 = v2, *((v49 + v43) as &i64) = v47, *((v49 + v43 + &g_8 as &u8) as &i64) = v48, v3 = v41, v43 += 16, v41 = v3 + 1, v42 += 24, v5 != v42));
        v50 = v2;
        v51 = v43 + v50;
    } else {
        v45 = *((a1 + 16) as &i64);
        v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v46 = v2;
        *(v46 as &i64) = *((a1 + &g_8 as &u8) as &i64);
LABEL_538d2a:
        *((v46 + &g_8 as &u8) as &i64) = v45;
        v3 = 1;
        v50 = v2;
        v51 = v50 + 16;
    }
    v0 = v1;
    v4 = v50;
    v5 = 0;
    loop {
        v52 = *(v50 as &i64);
        v53 = *((v50 + &g_8 as &u8) as &i64);
        if v53 == 1 && *(v52 as &i8) == 45 {
            *(__rust_alloc(&g_8, &g_8) as &long long) = std::io::stdio::stdin();
        } else {
            v11 = struct8 {
                field_0: 0x1b600000000
            };
            v13 = 0;
            v12 = 0;
            v12 = 1;
            v22 = std::fs::OpenOptions::_open(&v11, v52, v53);
            if !v22 {
                *(__rust_alloc(4, 4) as &i32) = *((&v22 as &char + 4) as &i32);
            } else {
                v62 = a0;
                *((v62 + &g_8 as &u8) as &i8) = v23;
                break;
            }
        }
        __rust_alloc(0x2000, 1);
        v28 = struct56 {
            field_0: v55
            field_8: 0x2000
            field_16: 0
            field_32: 0
            field_40: v56
            field_48: v57
        };
        v11 = core::iter::adapters::try_process(&v28, v58);
        if v8 != 0x8000000000000000 {
            v8 = v11;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v25, v9, v9 + v10 * 24);
            if !v53 {
                v59 = 1;
            } else {
                v59 = __rust_alloc(v53, 1);
                if !v59 {
                    v6 = v53;
                }
            }
            memcpy(v6, v52, v53);
            v27 = struct24 {
                field_0: v53
                field_8: v6
                field_16: v53
            };
            v6 = v59;
            v14 = v10;
            v60 = v8;
            v11 = v60;
            v16 = v26;
            v61 = v25;
            vvar_61{reg 224} = (((((vvar_61{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_415{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_419{reg 224}))
            v15 = v61;
            v17 = v5;
            hashbrown::map::HashMap<K,V,S,A>::insert(&v22, &v18, &v27, &v11);
            if v22 != 0x8000000000000000 {
                v7 = v23;
            }
            v50 += 16;
            v5 += v10;
            if v50 == v51 {
                v62 = a0;
                *((v62 + 32) as &i64) = v20;
                *((v62 + 16) as &i128) = v19;
                *(v62 as &i128) = v18;
                return v62;
            }
        } else {
            v62 = a0;
            *((v62 + &g_8 as &u8) as &i64) = v9;
            break;
        }
    }
    *(v62 as &i64) = 0;
    return v62;
}
