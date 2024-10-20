fn uu_join::State::extend(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i8;  // [sp-0xe9]
    let v1: i64;  // [sp-0xe8], Other Possible Types: Enum, struct16
    let v2: i128;  // [bp-0xd8]
    let v3: i128;  // [sp-0xc8]
    let v4: i64;  // [sp-0xb0]
    let v5: i128;  // [sp-0xa8]
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x88]
    let v8: i128;  // [sp-0x80]
    let v9: i64;  // [sp-0x70]
    let v10: i128;  // [sp-0x68]
    let v11: struct16;  // [bp-0x58]
    let v12: i128;  // [sp-0x48]
    let v14: i64;  // r14
    let v15: i64;  // r13
    let v16: i64;  // rax
    let v19: i256;  // ymm0
    let v20: i256;  // ymm1
    let v21: i256;  // ymm2
    let v22: i128;  // xmm0
    let v23: i128;  // xmm0
    let v24: i128;  // xmm0
    let v25: i128;  // xmm0
    let v26: i64;  // rbp
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i64;  // rbx
    let v32: i64;  // rdx
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rbx
    let v37: i128;  // xmm0
    let v38: i128;  // xmm1
    let v39: i128;  // xmm2
    let v40: i64;  // r12
    let v41: i64;  // rax
    let v42: i64;  // rcx
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i128;  // xmm2
    let v46: i64;  // rax
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1

    v14 = a0;
    v15 = 9223372036854775809;
    v1 = uu_join::State::next_line(a1, a2);
    v16 = v1;
    if v16 != 9223372036854775809 {
        v0 = *(a2 as &i8);
        v4 = 0x8000000000000000;
        do {
            v6 = *((&v1 as &char + 24) as &i64);
            v22 = *((&v1 as &char + 8) as &i128);
            v5 = v22;
            v23 = v3;
            v12 = v23;
            if v7 == v4 {
                v28 = v4;
                *(v14 as &i64) = v28;
                return v28;
            }
            v7 = v16;
            v9 = v6;
            v24 = v5;
            v8 = v24;
            v25 = v12;
            v10 = v25;
            v26 = uu_join::State::get_current_key(a1);
            v27 = uu_join::Line::get_field(&v7, *((a1 + 64) as &i64));
            if !v26 || !v27 {
                v28 = -(0 < v27);
                v1 = v1;
                if v26 {
                    vvar_413{reg 224} = v7;
                    vvar_414{reg 256} = *((&v8 as &char + 8) as &i128);
                    *((v14 + 32) as &i128) = v10;
                    *((v14 + 16) as &i128) = v48;
                    *(v14 as &i128) = v47;
                    return v28;
                }
            } else if v0 {
                v11 = struct16 {
                    field_0: v26
                    field_8: v30
                };
                v1 = struct16 {
                    field_0: v27
                    field_8: v30
                };
                v28 = <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(&v11, &v1);
                v1 = v1;
            } else {
                v34 = memcmp(v26, v27, v32) as u32;
                v14 = v14;
                v28 = v34 | -0x100 | v35;
                v1 = v1;
                if v35 < 0 {
                    vvar_420{reg 224} = v7;
                    vvar_421{reg 256} = *((&v8 as &char + 8) as &i128);
                    *((v14 + 32) as &i128) = v10;
                    *((v14 + 16) as &i128) = v48;
                    *(v14 as &i128) = v47;
                    return v28;
                }
            }
            v36 = v29;
            v1 = v1;
            if v28 {
                v47 = v7;
                v48 = *((&v8 as &char + 8) as &i128);
                *((v14 + 32) as &i128) = v10;
                *((v14 + 16) as &i128) = v48;
                *(v14 as &i128) = v47;
                return v28;
            }
            v37 = v7;
            v38 = *((&v8 as &char + 8) as &i128);
            v39 = v10;
            v3 = v39;
            v2 = v38;
            v1 = v37;
            v40 = *((a1 + 16) as &i64);
            if v40 == *(a1 as &i64) {
                alloc::raw_vec::RawVec<T,A>::grow_one(a1);
            }
            v41 = *((a1 + 8) as &i64);
            v42 = v40 * 48;
            v43 = v1;
            vvar_37{reg 224} = ((((((((((((vvar_37{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_131{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_133{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_140{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_142{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_219{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_238{reg 224}))
            v44 = v2;
            vvar_40{reg 256} = ((((vvar_40{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_221{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_240{reg 256}))
            v45 = v3;
            vvar_41{reg 288} = ((((vvar_41{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_223{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_242{reg 288}))
            *((v41 + v42 + 32) as &i128) = v45;
            *((v41 + v42 + 16) as &i128) = v44;
            *((v41 + v42) as &i128) = v43;
            *((a1 + 16) as &i64) = v40 + 1;
            v1 = uu_join::State::next_line(a1, v36);
            v16 = v1;
        } while (v16 != v15);
    }
    v6 = *((&v1 as &char + 24) as &i64);
    v5 = *((&v1 as &char + 8) as &i128);
    v2 = v6;
    v1 = v5;
    v46 = __rust_alloc(24, 8);
    *((v46 + 16) as &i64) = v2;
    *(v46 as &i128) = v1;
    *((v14 + 8) as &i64) = v46;
    *((v14 + 16) as &&i64) = &g_4fb048;
    *(v14 as &i64) = v15;
    return &g_4fb048;
}
