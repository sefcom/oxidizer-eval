fn uu_tail::args::parse_obsolete() -> u32 {
    let v0: i64;  // [sp-0x138]
    let v1: i64;  // [sp-0x130]
    let v2: i64;  // [sp-0x128]
    let v3: i64;  // [sp-0x120], Other Possible Types: struct16
    let v4: i64;  // [sp-0x118]
    let v5: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0x108]
    let v7: i32;  // [sp-0x100]
    let v8: i64;  // [sp-0xf8]
    let v9: i8;  // [sp-0xf0]
    let v10: i32;  // [bp-0xef]
    let v11: i8;  // [sp-0xec]
    let v12: i384;  // [sp-0xd8], Other Possible Types: struct48
    let v13: i64;  // [sp-0xd0]
    let v14: i64;  // [sp-0xc8]
    let v15: i64;  // [sp-0xc0]
    let v16: i88;  // [sp-0xa8], Other Possible Types: Enum
    let v17: struct24;  // [sp-0x98]
    let v19: i64;  // rsi
    let v20: i64;  // rax
    let v21: i64;  // r12
    let v22: i64;  // rdi
    let v23: i64;  // rdx
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v27: i64;  // rcx
    let v30: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i128;  // xmm0
    let v35: i128;  // xmm1
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm2
    let v39: i64;  // rdi

    v16 = uu_tail::parse::parse_obsolete(v19);
    v20 = *((&v16 as &char + 10) as &i8);
    if v20 == 2 {
        v21 = v16;
        v17 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v19 + &g_8 as &u8) as &i64), *((v19 + &g_8 as &u8) as &i64));
        goto *((4335324 + vvar_60{reg 112} * 4) as &i32) + 4335324;
    } else {
        if v20 == 3 {
            *(v22 as &i64) = 5;
        } else {
            v8 = 5;
            v9 = 0;
            v6 = 1;
            v7 = 0;
            v10 = 0x2000000;
            v3 = 0;
            v4 = &g_8;
            v5 = 0;
            if v20 {
                v11 = v23;
            }
            v24 = *((&v16 as &char + 8) as &i8);
            v25 = v16;
            if !*((&v16 as &char + 9) as &i8) {
                v24 = 4;
            }
            v0 = v24;
            v1 = v30;
            v2 = v27;
            if v23 {
                v12 = uu_tail::paths::Input::from(v23);
            } else {
                v32 = __rust_alloc(&g_8, 1);
                *((v32 + 6) as &i64) = 8391737100187231346;
                *(v32 as &i64) = 7237954635114312819;
                v15 = 0x8000000000000000;
                v12 = &g_8;
                v13 = v32;
                v14 = &g_8;
            }
            v3 = alloc::raw_vec::RawVec<T,A>::grow_one();
            v33 = v4;
            v34 = v12;
            v35 = *((&v12 as &char + 16) as &i128);
            *((v33 + &g_18 as &u8) as &i128) = *((&v12 as &char + 32) as &i128);
            *((v33 + &g_8 as &u8) as &i128) = v35;
            *(v33 as &i128) = v34;
            v5 = 1;
            v36 = v0;
            v37 = v2;
            v38 = v6;
            *((v39 + 64) as &i64) = v8;
            *((v39 + &g_28 as &u8) as &i128) = v38;
            *((v39 + &g_8 as &u8) as &i128) = v37;
            *(v39 as &i128) = v36;
            *((v39 + &g_18 as &u8) as &i64) = v4;
            *((v39 + &g_28 as &u8) as &i64) = v5;
        }
        return;
    }
}
