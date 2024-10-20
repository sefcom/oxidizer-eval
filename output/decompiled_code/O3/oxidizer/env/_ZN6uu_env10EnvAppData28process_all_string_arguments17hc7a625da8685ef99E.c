fn uu_env::EnvAppData::process_all_string_arguments(a0: &u64, a1: void*, a2: &u64) -> u64 {
    let v0: void*;  // [sp-0x88], Other Possible Types: &u64
    let v1: u8;  // [bp-0x80]
    let v2: u8;  // [bp-0x78]
    let v3: u64;  // [sp-0x70]
    let v4: void*;  // [sp-0x68], Other Possible Types: struct16
    let v5: &u64;  // [sp-0x60]
    let v6: &u64;  // [sp-0x58]
    let v7: u64;  // [sp-0x50], Other Possible Types: void*, &u64
    let v8: u64;  // [sp-0x48]
    let v10: u64;  // rax
    let v11: u64;  // r14
    let v12: void*;  // r12
    let v13: u64;  // rax
    let v14: u64;  // rsi
    let v15: u64;  // rcx
    let v17: u64;  // rax
    let v18: u64;  // rcx
    let v19: u64;  // rax
    let v20: &u64;  // rax
    let v21: &u64;  // rdi
    let v22: &u64;  // rcx
    let v23: u64;  // rdx
    let v24: u64;  // rcx
    let v25: &u64;  // r12

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v10 = a2[2];
    if v10 {
        v11 = a2[1];
        v12 = 0;
        do {
            v0 = 0;
            uu_env::check_and_handle_string_args(&v1, *((8 + v11 + v12 as &u8) as &i64), *((16 + v11 + v12 as &u8) as &i64), &g_42036f, 14, &v4);
            v13 = *(&v1 as &i64);
            if v13 {
                v24 = *(&v2 as &i64);
                v25 = a0;
                v25[1] = v13;
                v25[2] = v24;
                *(v25) = 0x8000000000000000;
                return v25;
            }
            if v2 {
LABEL_49b8ce:
                *((&a1->field_0 as &char + 1) as &i8) = 1;
            } else {
                v0 = 0;
                uu_env::check_and_handle_string_args(&v1, *((8 + v11 + v12 as &u8) as &i64), *((16 + v11 + v12 as &u8) as &i64), &g_42037d, 2, &v4);
                v13 = *(&v1 as &i64);
                if v13 {
                    vvar_416{reg 24} = *(&v2 as &i64);
                    vvar_417{reg 112} = a0;
                    v25[1] = v13;
                    v25[2] = v24;
                    *(v25) = 0x8000000000000000;
                    return v25;
                }
                if !(!v2) {
                    goto LABEL_49b8ce;
                }
                v0 = 0;
                uu_env::check_and_handle_string_args(&v1, *((8 + v11 + v12 as &u8) as &i64), *((16 + v11 + v12 as &u8) as &i64), &g_42037f, 3, &v4);
                v13 = *(&v1 as &i64);
                if v13 {
                    vvar_423{reg 24} = *(&v2 as &i64);
                    vvar_424{reg 112} = a0;
                    v25[1] = v13;
                    v25[2] = v24;
                    *(v25) = 0x8000000000000000;
                    return v25;
                }
                if v2 {
                    a1->field_0 = 257;
                } else {
                    v0 = a2;
                    uu_env::check_and_handle_string_args(&v1, *((8 + v11 + v12 as &u8) as &i64), *((16 + v11 + v12 as &u8) as &i64), &g_4159bc, 4, &v4);
                    v13 = *(&v1 as &i64);
                    if v13 {
                        vvar_430{reg 24} = *(&v2 as &i64);
                        vvar_431{reg 112} = a0;
                        v25[1] = v13;
                        v25[2] = v24;
                        *(v25) = 0x8000000000000000;
                        return v25;
                    }
                    if v2 {
                        a1->field_0 = 257;
                        a1->field_2 = 0;
                    } else {
                        v14 = *((8 + v11 + v12 as &u8) as &i64);
                        v15 = *((16 + v11 + v12 as &u8) as &i64);
                        v3 = v15;
                        if !v15 {
                            v8 = v8;
                        } else {
                            v8 = v14;
                            if v15 < 0 {
                                v7 = 0;
                            }
                            v7 = 1;
                            v19 = __rust_alloc(v15, 1);
                            if v19 {
                                v8 = v8;
                                v18 = v3;
                            }
                        }
                        v8 = v17;
                        memcpy(v8, v8, v18);
                        v7 = v6;
                        if v7 == v4 {
                            v4 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        v20 = v5;
                        v21 = v7;
                        v22 = v21 * 3;
                        v23 = v3;
                        *(v20 + 0x8 * v22 as u64) = v23;
                        *(8 + v20 + 0x8 * v22 as u64) = v8;
                        *(16 + v20 + 0x8 * v22 as u64) = v23;
                        v6 = v21 as &char + 1;
                    }
                }
            }
        } while ((v12 += 24, (v10 << 3) + (v10 << 4) != v12));
    }
    v25 = a0;
    v25[2] = v6;
    *(v25) = v4;
    v25[1] = v5;
    return v25;
}
