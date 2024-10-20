fn uu_uname::UNameOutput::new(a0: &u64, a1: &u64) -> u64 {
    let v0: i64;  // [sp-0x4c0]
    let v1: i64;  // [sp-0x4b8]
    let v2: i64;  // [sp-0x4b0]
    let v3: i64;  // [sp-0x4a8]
    let v4: i64;  // [sp-0x4a0]
    let v5: i64;  // [sp-0x498]
    let v6: i64;  // [sp-0x490]
    let v7: i64;  // [sp-0x488]
    let v8: i64;  // [sp-0x480]
    let v9: i64;  // [sp-0x478]
    let v10: i64;  // [sp-0x470]
    let v11: i64;  // [sp-0x468]
    let v12: i192;  // [sp-0x460], Other Possible Types: struct24, Enum
    let v13: i64;  // [sp-0x248]
    let v14: i64;  // [sp-0x240]
    let v15: i64;  // [sp-0x238]
    let v16: i8;  // [bp-0x230]
    let v17: i8;  // [bp-0x228]
    let v18: i8;  // [bp-0x220]
    let v19: i8;  // [bp-0x210]
    let v20: i8;  // [bp-0x208]
    let v21: i8;  // [bp-0x1f8]
    let v22: i8;  // [bp-0x1f0]
    let v23: i8;  // [bp-0x1e0]
    let v24: i8;  // [bp-0x1d8]
    let v25: i8;  // [bp-0x1c8]
    let v26: i8;  // [bp-0x1c0]
    let v28: i64;  // r13
    let v29: i64;  // rbx
    let v30: i64;  // r15
    let v31: i64;  // rax
    let v32: i8;  // bpl
    let v33: i8;  // al
    let v34: i64;  // r13
    let v35: i64;  // rax
    let v37: i8;  // cl
    let v38: i64;  // rax
    let v39: i64;  // r13
    let v41: i64;  // rdi
    let v42: i64;  // rax
    let v43: i64;  // r13
    let v45: i64;  // rdi
    let v46: i64;  // rax
    let v47: i64;  // r13
    let v49: i64;  // rdi
    let v50: i64;  // rax
    let v51: i64;  // r13
    let v53: i64;  // rdi
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // r13
    let v59: i64;  // rdi
    let v60: i64;  // rax
    let v61: i64;  // rbp
    let v63: i64;  // rdi
    let v64: i64;  // rax
    let v65: i64;  // r13
    let v66: i64;  // rcx
    let v67: i64;  // rcx
    let v68: i64;  // rcx
    let v69: i64;  // rcx
    let v70: i64;  // rcx

    v12 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    v28 = v12;
    v29 = *((&v12 as &char + 8) as &i64);
    v30 = *((&v12 as &char + 16) as &i64);
    v11 = 0x8000000000000000;
    if v28 != 0x8000000000000000 {
        memcpy(&v16, &v12, 0x200);
        v13 = v28;
        v14 = v29;
        v15 = v30;
        v32 = *(a1 as &i8);
        v33 = *((a1 + 1) as &i8);
        if !(!v32) || !(!v33) || !((v37 & 1)) || !((v37 & 4) >> 2) || !((v37 & 2) >> 1) || !(v37 >> 3) || !(!*((a1 + 8) as &i8)) || !(!*((a1 + 6) as &i8)) {
            if !v33 && !v32 {
                goto LABEL_47cda9;
            }
        } else {
            if *((a1 + 7) as &i8) {
LABEL_47cda9:
                v39 = 0x8000000000000000;
                goto LABEL_47cdeb;
            }
        }
        v12 = std::sys::os_str::bytes::Slice::to_string_lossy(v29, v30);
        v29 = *((&v12 as &char + 8) as &i64);
        v39 = *((&v12 as &char + 16) as &i64);
        if v39 {
            v42 = __rust_alloc(v39, 1);
        }
        v5 = v41;
        memcpy(v5, v29, v39);
LABEL_47cdeb:
        v4 = v39;
        if !*((a1 + 2) as &i8) && !v32 {
            v43 = 0x8000000000000000;
        } else {
            v12 = std::sys::os_str::bytes::Slice::to_string_lossy(v17, v18);
            v29 = *((&v12 as &char + 8) as &i64);
            v43 = *((&v12 as &char + 16) as &i64);
            if v43 {
                v46 = __rust_alloc(v43, 1);
            }
            v10 = v45;
            memcpy(v10, v29, v43);
        }
        v3 = v43;
        if !*((a1 + 4) as &i8) && !v32 {
            v47 = 0x8000000000000000;
        } else {
            v12 = std::sys::os_str::bytes::Slice::to_string_lossy(v19, v20);
            v29 = *((&v12 as &char + 8) as &i64);
            v47 = *((&v12 as &char + 16) as &i64);
            if v47 {
                v50 = __rust_alloc(v47, 1);
            }
            v9 = v49;
            memcpy(v9, v29, v47);
        }
        v2 = v47;
        if !*((a1 + 3) as &i8) && !v32 {
            v51 = 0x8000000000000000;
        } else {
            v12 = std::sys::os_str::bytes::Slice::to_string_lossy(v21, v22);
            v29 = *((&v12 as &char + 8) as &i64);
            v51 = *((&v12 as &char + 16) as &i64);
            if v51 {
                v54 = __rust_alloc(v51, 1);
            }
            v8 = v53;
            memcpy(v8, v29, v51);
        }
        v1 = v51;
        v55 = *((a1 + 5) as &i8);
        v56 = v55 | -0x100 | v55 | v32;
        if !v55 && !v32 {
            v57 = 0x8000000000000000;
        } else {
            v12 = std::sys::os_str::bytes::Slice::to_string_lossy(v23, v24);
            v29 = *((&v12 as &char + 8) as &i64);
            v57 = *((&v12 as &char + 16) as &i64);
            if v57 {
                v60 = __rust_alloc(v57, 1);
            }
            v7 = v59;
            memcpy(v7, v29, v57);
            v56 = v12 * 2;
        }
        v0 = v57;
        if !v32 && !*((a1 + 8) as &i8) {
            v61 = 0x8000000000000000;
        } else {
            v12 = std::sys::os_str::bytes::Slice::to_string_lossy(v25, v26);
            v29 = *((&v12 as &char + 8) as &i64);
            v61 = *((&v12 as &char + 16) as &i64);
            if v61 {
                v64 = __rust_alloc(v61, 1);
            }
            v6 = v63;
            memcpy(v6, v29, v61);
            v56 = v12 * 2;
        }
        if !*((a1 + 6) as &i8) {
            v65 = 0x8000000000000000;
            if !*((a1 + 7) as &i8) {
                vvar_893{reg 24} = v4;
                *(a0 as &i64) = v66;
                *((a0 + 8) as &i64) = v5;
                *((a0 + 16) as &i64) = v66;
                vvar_894{reg 24} = v3;
                *((a0 + 24) as &i64) = v67;
                *((a0 + 32) as &i64) = v10;
                *((a0 + 40) as &i64) = v67;
                vvar_895{reg 24} = v2;
                *((a0 + 48) as &i64) = v68;
                *((a0 + 56) as &i64) = v9;
                *((a0 + 64) as &i64) = v68;
                vvar_896{reg 24} = v1;
                *((a0 + 72) as &i64) = v69;
                *((a0 + 80) as &i64) = v8;
                *((a0 + 88) as &i64) = v69;
                vvar_897{reg 24} = v0;
                *((a0 + 96) as &i64) = v70;
                *((a0 + 104) as &i64) = v7;
                *((a0 + 112) as &i64) = v70;
                *((a0 + 120) as &i64) = v61;
                *((a0 + 128) as &i64) = v6;
                *((a0 + 136) as &i64) = v61;
                *((a0 + 144) as &i64) = 0x8000000000000000;
                *((a0 + 152) as &i64) = v29;
                *((a0 + 160) as &i64) = 7;
                *((a0 + 168) as &i64) = v11;
                *((a0 + 176) as &i64) = v56;
                *((a0 + 184) as &i64) = 7;
                return a0;
            }
        } else {
            v65 = 7;
            v56 = __rust_alloc(7, 1);
            v29 = v56;
            *((v56 + 3) as &i32) = 1853321070;
            *(v56 as &i32) = 1852534389;
            if !*((a1 + 7) as &i8) {
                v66 = v4;
                *(a0 as &i64) = v66;
                *((a0 + 8) as &i64) = v5;
                *((a0 + 16) as &i64) = v66;
                v67 = v3;
                *((a0 + 24) as &i64) = v67;
                *((a0 + 32) as &i64) = v10;
                *((a0 + 40) as &i64) = v67;
                v68 = v2;
                *((a0 + 48) as &i64) = v68;
                *((a0 + 56) as &i64) = v9;
                *((a0 + 64) as &i64) = v68;
                v69 = v1;
                *((a0 + 72) as &i64) = v69;
                *((a0 + 80) as &i64) = v8;
                *((a0 + 88) as &i64) = v69;
                v70 = v0;
                *((a0 + 96) as &i64) = v70;
                *((a0 + 104) as &i64) = v7;
                *((a0 + 112) as &i64) = v70;
                *((a0 + 120) as &i64) = v61;
                *((a0 + 128) as &i64) = v6;
                *((a0 + 136) as &i64) = v61;
                *((a0 + 144) as &i64) = 7;
                *((a0 + 152) as &i64) = v29;
                *((a0 + 160) as &i64) = 7;
                *((a0 + 168) as &i64) = v11;
                *((a0 + 176) as &i64) = v56;
                *((a0 + 184) as &i64) = 7;
                return a0;
            }
        }
        v11 = 7;
        v56 = __rust_alloc(7, 1);
        *((v56 + 3) as &i32) = 1853321070;
        *(v56 as &i32) = 1852534389;
        vvar_904{reg 24} = v4;
        *(a0 as &i64) = v66;
        *((a0 + 8) as &i64) = v5;
        *((a0 + 16) as &i64) = v66;
        vvar_905{reg 24} = v3;
        *((a0 + 24) as &i64) = v67;
        *((a0 + 32) as &i64) = v10;
        *((a0 + 40) as &i64) = v67;
        vvar_906{reg 24} = v2;
        *((a0 + 48) as &i64) = v68;
        *((a0 + 56) as &i64) = v9;
        *((a0 + 64) as &i64) = v68;
        vvar_907{reg 24} = v1;
        *((a0 + 72) as &i64) = v69;
        *((a0 + 80) as &i64) = v8;
        *((a0 + 88) as &i64) = v69;
        vvar_908{reg 24} = v0;
        *((a0 + 96) as &i64) = v70;
        *((a0 + 104) as &i64) = v7;
        *((a0 + 112) as &i64) = v70;
        *((a0 + 120) as &i64) = v61;
        *((a0 + 128) as &i64) = v6;
        *((a0 + 136) as &i64) = v61;
        *((a0 + 144) as &i64) = v65;
        *((a0 + 152) as &i64) = v29;
        *((a0 + 160) as &i64) = 7;
        *((a0 + 168) as &i64) = v11;
        *((a0 + 176) as &i64) = v56;
        *((a0 + 184) as &i64) = 7;
        return a0;
    } else {
        v31 = __rust_alloc(22, 1);
        v34 = v31;
        *(v31 as &i128) = 134856676109208638757024236182774374755;
        *((v34 + 14) as &i64) = 7308604895910520180;
        v35 = __rust_alloc(32, 8);
        *(v35 as &i64) = 22;
        *((v35 + 8) as &i64) = v34;
        *((v35 + 16) as &i64) = 22;
        *((v35 + 24) as &i32) = 1;
        if *(v30 as &i64) {
            v38();
        }
        *((a0 + 8) as &i64) = v35;
        *((a0 + 16) as &&i64) = &g_4d9d50;
        *(a0 as &i64) = 9223372036854775809;
        return a0;
    }
}
