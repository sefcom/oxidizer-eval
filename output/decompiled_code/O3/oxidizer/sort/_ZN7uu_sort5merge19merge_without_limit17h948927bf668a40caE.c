fn uu_sort::merge::merge_without_limit(a0: u32, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v1: u8;  // [bp+0x0]
    let v3: u128;  // xmm0
    let v4: u64;  // rax
    let v5: u64;  // rcx
    let v6: u128;  // xmm0
    let v7: u256;  // ymm0
    let v8: u256;  // ymm0
    let v9: u128;  // xmm1
    let v10: u256;  // ymm1
    let v11: u256;  // ymm1
    let v12: u128;  // xmm2
    let v13: u256;  // ymm2
    let v14: u256;  // ymm2
    let v15: &struct_3;  // r14
    let v16: u64;  // rbx
    let v17: void*;  // r15
    let v18: &Enum;  // r12
    let v19: u64;  // rdx
    let v20: u256;  // ymm3
    let v21: &struct_1;  // rcx
    let v22: u128;  // xmm0
    let v23: u64;  // r15
    let v24: &struct_3;  // r14
    let v25: u64;  // r12
    let v26: u256;  // ymm2
    let v27: u256;  // ymm3
    let v28: &struct_1;  // rcx
    let v29: u128;  // xmm0
    let v30: u64;  // r14
    let v31: &struct_2;  // rax
    let v32: &struct_2;  // r15
    let v33: u64;  // r13
    let v34: &u64;  // r12
    let v35: &u64;  // rax
    let v36: &u64;  // rcx
    let v37: u128;  // xmm0
    let v38: u64;  // rax
    let v39: &u128;  // rbx
    let v40: &u128;  // rax
    let v41: &u128;  // rcx
    let v42: u128;  // xmm0
    let v43: u128;  // xmm1
    let v44: u128;  // xmm2
    let v45: u128;  // xmm3
    let v46: u64;  // r15
    let v47: u64;  // rcx
    let v48: &u64;  // rsi
    let v49: u64;  // rdx
    let v50: u64;  // r8
    let v51: u64;  // r9
    let v52: &struct_4;  // rax
    let v53: &u64;  // rcx
    let v54: u128;  // xmm0
    let v55: u128;  // xmm1
    let v56: u128;  // xmm2
    let v64: u64;  // rbx
    let v65: void*;  // r12
    let v69: u64;  // rsi
    let v70: u128;  // xmm0
    let v71: u128;  // xmm1
    let v72: u128;  // xmm2
    let v73: u128;  // xmm0
    let v74: u128;  // xmm0
    let v75: u256;  // ymm0
    let v76: u64;  // rcx
    let v77: &u128;  // rax
    let v78: u64;  // rdx
    let v79: u64;  // rsi
    let v80: u64;  // rbx
    let v83: u128;  // xmm0
    let v84: u64;  // r13
    let v85: u64;  // rax
    let v86: &struct_1;  // rax
    let v87: u64;  // rax
    let v88: &u64;  // r13
    let v89: u128;  // xmm0
    let v90: u128;  // xmm0
    let v91: u64;  // r13
    let v92: &u128;  // rax
    let v93: &u128;  // rcx
    let v94: u128;  // xmm0
    let v95: u128;  // xmm1
    let v96: u64;  // rsi
    let v99: u64;  // rsi
    let v100: u64;  // rdx
    let v103: u128;  // xmm0
    let v104: &struct_0;  // rcx
    let v105: u128;  // xmm0
    let v106: u64;  // rax

    vvar_295{reg 48} = (&v0 & -128) - 0x500;
    *((vvar_295{reg 48} + 280) as &u64) = a2;
    *((vvar_295{reg 48} + 288) as &u64) = a0;
    vvar_11{reg 48} = vvar_295{reg 48} - 8;
    *((vvar_295{reg 48} - 8) as &&u8) = &g_4e0d08;
    std::sync::mpmc::channel(vvar_295{reg 48} + 0x200);
    v3 = *((vvar_11{reg 48} + 0x200) as &i128);
    v4 = *((vvar_11{reg 48} + 528) as &i64);
    v5 = *((vvar_11{reg 48} + 536) as &i64);
    *((vvar_11{reg 48} + 240) as &u128) = v3;
    *((vvar_11{reg 48} + 344) as &u64) = v4;
    *((vvar_11{reg 48} + 264) as &u64) = v4;
    *((vvar_11{reg 48} + 336) as &u64) = v5;
    *((vvar_11{reg 48} + 272) as &u64) = v5;
    *((vvar_11{reg 48} + 168) as &i64) = 0;
    *((vvar_11{reg 48} + 176) as &i64) = 8;
    *((vvar_11{reg 48} + 184) as &i64) = 0;
    *((vvar_11{reg 48} + 192) as &i64) = 0;
    *((vvar_11{reg 48} + 200) as &i64) = 8;
    *((vvar_11{reg 48} + 208) as &i64) = 0;
    v6 = *(&a1 as &i128);
    vvar_21{reg 224} = ((((vvar_302{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_301{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_306{reg 224}))
    v9 = *(&a1[2] as &i128);
    vvar_22{reg 256} = ((vvar_309{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_308{reg 256}))
    v12 = *(&a1[4] as &i128);
    vvar_23{reg 288} = ((vvar_312{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_311{reg 288}))
    *((vvar_11{reg 48} + 112) as &u128) = v6;
    *((vvar_11{reg 48} + 144) as &u128) = v12;
    *((vvar_11{reg 48} + 128) as &u128) = v9;
    v15 = vvar_11{reg 48} + 520;
    v16 = *((vvar_11{reg 48} + 112) as &i64);
    *((vvar_11{reg 48} + 296) as &i64) = *((vvar_11{reg 48} + 144) as &i64);
    *((vvar_11{reg 48} + 0x100) as &i64) = *((vvar_11{reg 48} + 152) as &i64);
    v17 = 0;
    v18 = vvar_11{reg 48} + 0x200;
    *((vvar_11{reg 48} + 216) as &i64) = 0x8000000000000000;
    if v16 == 9223372036854775809 {
        goto LABEL_4e0fe0;
    }
LABEL_4e0fca:
    v21 = vvar_11{reg 48} + 120;
    v15->field_10 = v21->field_10;
    v22 = v21->field_0;
    vvar_21{reg 224} = ((vvar_21{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_326{reg 224}))
    v15->field_0 = v22;
    loop {
        v28 = vvar_49{reg 48} + 312;
        v28->field_10 = v24->field_10;
        v29 = v24->field_0;
        v28->field_0 = v29;
        *((vvar_49{reg 48} + 304) as &u64) = v16;
        vvar_334{reg 48} = vvar_49{reg 48} - 8;
        *((vvar_49{reg 48} - 8) as &&u8) = &g_4e1035;
        std::sync::mpmc::array::Channel<T>::with_capacity(v25, 2, v19, v28);
        v30 = v23;
        *((vvar_334{reg 48} + 0x400) as &i64) = 1;
        *((vvar_334{reg 48} + 1032) as &i64) = 1;
        *((vvar_334{reg 48} + 1040) as &i8) = 0;
        vvar_341{reg 48} = vvar_334{reg 48} - 8;
        *((vvar_334{reg 48} - 8) as &&u8) = &g_4e1072;
        v31 = __rust_alloc(640, 128);
        v32 = v31;
        v33 = v25;
        vvar_72{reg 48} = vvar_341{reg 48} - 8;
        *((vvar_341{reg 48} - 8) as &&u8) = &g_4e1092;
        memcpy(v31, v25, 640);
        *((vvar_72{reg 48} + 224) as &i64) = 0;
        *((vvar_72{reg 48} + 232) as &&struct_2) = v32;
        *((vvar_72{reg 48} + 0x200) as &i64) = 0;
        *((vvar_72{reg 48} + 520) as &&struct_2) = v32;
        v34 = *((vvar_72{reg 48} + 208) as &i64);
        if v34 == *((vvar_351{reg 48} + 192) as &i64) {
            vvar_72{reg 48} = vvar_72{reg 48} - 8;
            *((vvar_72{reg 48} - 8) as &&u8) = &g_4e10d9;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_351{reg 48} + 192);
        }
        v35 = *((vvar_72{reg 48} + 200) as &i64);
        v36 = v34 * 16;
        *((v35 + v36) as &i64) = 0;
        *((v35 + v36 + 8) as &&struct_2) = v32;
        *((vvar_72{reg 48} + 208) as &&u64) = v34 as &char + 1;
        v37 = *((vvar_72{reg 48} + 312) as &i128);
        if v16 == *((vvar_72{reg 48} + 216) as &i64) {
            break;
        }
        v38 = *((vvar_72{reg 48} + 328) as &i64);
        *((vvar_72{reg 48} + 0x200) as &i64) = 0;
        *((vvar_72{reg 48} + 520) as &&struct_2) = v32;
        *((vvar_72{reg 48} + 528) as &u64) = v16;
        *((vvar_72{reg 48} + 536) as &u128) = v37;
        *((vvar_72{reg 48} + 552) as &u64) = v38;
        *((vvar_72{reg 48} + 560) as &i64) = 0;
        *((vvar_72{reg 48} + 568) as &i64) = 1;
        *((vvar_72{reg 48} + 576) as &i64) = 0;
        v39 = *((vvar_72{reg 48} + 184) as &i64);
        if v39 == *((vvar_72{reg 48} + 168) as &i64) {
            vvar_72{reg 48} = vvar_72{reg 48} - 8;
            *((vvar_72{reg 48} - 8) as &&u8) = &g_4e0e87;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_72{reg 48} + 168);
        }
        v40 = *((vvar_108{reg 48} + 176) as &i64);
        v41 = v39 * 9;
        *((64 + v40 + 0x8 * v41 as u64) as &i64) = *((vvar_108{reg 48} + 576) as &i64);
        v42 = *((vvar_108{reg 48} + 0x200) as &i128);
        v43 = *((vvar_108{reg 48} + 528) as &i128);
        vvar_22{reg 256} = ((vvar_60{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_383{reg 256}))
        v44 = *((vvar_108{reg 48} + 544) as &i128);
        vvar_23{reg 288} = ((vvar_61{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_385{reg 288}))
        v45 = *((vvar_108{reg 48} + 560) as &i128);
        vvar_25{reg 320} = ((vvar_63{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_387{reg 320}))
        *(48 + v40 + 0x8 * v41 as u64) = v45;
        *(32 + v40 + 0x8 * v41 as u64) = v44;
        *(16 + v40 + 0x8 * v41 as u64) = v43;
        *(v40 + 0x8 * v41 as u64) = v42;
        *((vvar_108{reg 48} + 184) as &&u128) = v39 as &char + 1;
        vvar_396{reg 48} = vvar_108{reg 48} - 8;
        *((vvar_108{reg 48} - 8) as &&u8) = &g_4e0eee;
        v46 = v30;
        v18 = v33;
        v15 = vvar_396{reg 48} + 520;
        vvar_21{reg 224} = (((((((vvar_59{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_330{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_365{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_381{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
        *(&v15->field_10 as &i128) = 0;
        *(&(&v15->padding_18)[1] as &i128) = 0;
        *(&v15->padding_38 as &i128) = 0;
        *((vvar_396{reg 48} + 0x200) as &u64) = v46;
        *((vvar_396{reg 48} + 520) as &i64) = 0;
        *((vvar_396{reg 48} + 528) as &i64) = 8;
        *((vvar_396{reg 48} + 552) as &i64) = 8;
        *((vvar_396{reg 48} + 576) as &i64) = 8;
        *((vvar_396{reg 48} + 600) as &i64) = 8;
        *((vvar_396{reg 48} + 608) as &i64) = 0;
        *((vvar_396{reg 48} + 616) as &i64) = 0x2000;
        *((vvar_396{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
        *((vvar_396{reg 48} + 632) as &i64) = 0x2000;
        vvar_11{reg 48} = vvar_396{reg 48} - 8;
        *((vvar_396{reg 48} - 8) as &&u8) = &g_4e0fa9;
        std::sync::mpmc::Sender<T>::send(vvar_396{reg 48} + 352, vvar_396{reg 48} + 240, v33, v47);
        if *((vvar_410{reg 48} + 360) as &i64) != *((vvar_410{reg 48} + 216) as &i64) {
            *((vvar_11{reg 48} + 112) as &i64) = 9223372036854775809;
            *((vvar_11{reg 48} + 160) as &u64) = v46 + 1;
            *((vvar_11{reg 48} + 624) as &i128) = *((vvar_11{reg 48} + 464) as &i128);
            *((vvar_11{reg 48} + 608) as &i128) = *((vvar_11{reg 48} + 448) as &i128);
            *((vvar_11{reg 48} + 592) as &i128) = *((vvar_11{reg 48} + 432) as &i128);
            *((vvar_11{reg 48} + 576) as &i128) = *((vvar_11{reg 48} + 416) as &i128);
            v54 = *((vvar_11{reg 48} + 352) as &i128);
            v55 = *((vvar_11{reg 48} + 368) as &i128);
            v56 = *((vvar_11{reg 48} + 384) as &i128);
            *((vvar_11{reg 48} + 560) as &i128) = *((vvar_11{reg 48} + 400) as &i128);
            *((vvar_11{reg 48} + 544) as &u128) = v56;
            *((vvar_11{reg 48} + 528) as &u128) = v55;
            *((vvar_11{reg 48} + 0x200) as &u128) = v54;
            *((vvar_11{reg 48} - 8) as &&u8) = &g_4e19a5;
            core::result::unwrap_failed(); /* do not return */
        }
        v17 = v46 + 1;
        v16 = 9223372036854775809;
        if false {
            goto LABEL_4e0fca;
        }
LABEL_4e0fe0:
        v48 = *((vvar_30{reg 48} + 296) as &i64);
        v49 = *((vvar_30{reg 48} + 0x100) as &i64);
        vvar_11{reg 48} = vvar_30{reg 48} - 8;
        *((vvar_30{reg 48} - 8) as &&u8) = &g_4e0ff8;
        itertools::groupbylazy::IntoChunks<I>::step(v18, v48, v49, v5, v50, v51, *(&v1 as &i64));
        v16 = *((vvar_11{reg 48} + 0x200) as &i64);
        if v16 == 9223372036854775809 {
            v53 = *((vvar_11{reg 48} + 296) as &i64);
            if *(v53) {
                *((vvar_11{reg 48} - 8) as &&u8) = &g_4e1a87;
                core::cell::panic_already_borrowed(); /* do not return */
            }
            if v53[22] == -1 || v53[22] < *((vvar_425{reg 48} + 0x100) as &i64) {
                v53[22] = *((vvar_11{reg 48} + 0x100) as &i64);
            }
            *(v53) = 0;
            v64 = *((vvar_11{reg 48} + 184) as &i64);
            if v64 {
                v65 = 0;
                do {
                    vvar_557{reg 48} = vvar_90{reg 48} - 8;
                    *((vvar_90{reg 48} - 8) as &&u8) = &g_4e1310;
                    v8 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *(&v15->field_10 as &i128) = 0;
                    *(&(&v15->padding_18)[1] as &i128) = 0;
                    *(&v15->padding_38 as &i128) = 0;
                    *((vvar_557{reg 48} + 0x200) as &void*) = v65;
                    *((vvar_557{reg 48} + 520) as &i64) = 0;
                    *((vvar_557{reg 48} + 528) as &i64) = 8;
                    *((vvar_557{reg 48} + 552) as &i64) = 8;
                    *((vvar_557{reg 48} + 576) as &i64) = 8;
                    *((vvar_557{reg 48} + 600) as &i64) = 8;
                    *((vvar_557{reg 48} + 608) as &i64) = 0;
                    *((vvar_557{reg 48} + 616) as &i64) = 0x2000;
                    *((vvar_557{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
                    *((vvar_557{reg 48} + 632) as &i64) = 0x2000;
                    vvar_77{reg 48} = vvar_557{reg 48} - 8;
                    *((vvar_557{reg 48} - 8) as &&u8) = &g_4e13ae;
                    std::sync::mpmc::Sender<T>::send(vvar_557{reg 48} + 352, vvar_425{reg 48} + 240, vvar_425{reg 48} + 0x200, v47);
                    if *((vvar_567{reg 48} + 360) as &i64) != *((vvar_567{reg 48} + 216) as &i64) {
                        *((vvar_77{reg 48} + 624) as &i128) = *((vvar_77{reg 48} + 464) as &i128);
                        *((vvar_77{reg 48} + 608) as &i128) = *((vvar_77{reg 48} + 448) as &i128);
                        *((vvar_77{reg 48} + 592) as &i128) = *((vvar_77{reg 48} + 432) as &i128);
                        *((vvar_77{reg 48} + 576) as &i128) = *((vvar_77{reg 48} + 416) as &i128);
                        v70 = *((vvar_77{reg 48} + 352) as &i128);
                        v71 = *((vvar_77{reg 48} + 368) as &i128);
                        v72 = *((vvar_77{reg 48} + 384) as &i128);
                        *((vvar_77{reg 48} + 560) as &i128) = *((vvar_77{reg 48} + 400) as &i128);
                        *((vvar_77{reg 48} + 544) as &u128) = v72;
                        *((vvar_77{reg 48} + 528) as &u128) = v71;
                        *((vvar_77{reg 48} + 0x200) as &u128) = v70;
                        *((vvar_77{reg 48} - 8) as &&u8) = &g_4e1a5d;
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v65 += 1;
                } while (v64 != v65);
            }
            v69 = *((vvar_77{reg 48} + 280) as &i64);
            vvar_588{reg 48} = vvar_77{reg 48} - 8;
            *((vvar_77{reg 48} - 8) as &&u8) = &g_4e13e8;
            <uu_sort::GlobalSettings as core::clone::Clone>::clone(vvar_77{reg 48} + 352, v69);
            *((vvar_588{reg 48} + 0x200) as &i64) = *((vvar_588{reg 48} + 344) as &i64);
            *((vvar_588{reg 48} + 520) as &i64) = *((vvar_588{reg 48} + 336) as &i64);
            v73 = *((vvar_588{reg 48} + 168) as &i128);
            *((vvar_588{reg 48} + 528) as &u128) = v73;
            *((vvar_588{reg 48} + 544) as &i64) = *((vvar_588{reg 48} + 184) as &i64);
            vvar_633{reg 48} = vvar_588{reg 48} - 8;
            *((vvar_588{reg 48} - 8) as &&u8) = &g_4e1443;
            memcpy(vvar_588{reg 48} + 552, vvar_588{reg 48} + 352, 160);
            *((vvar_633{reg 48} + 368) as &i64) = *((vvar_633{reg 48} + 216) as &i64);
            *((vvar_633{reg 48} + 352) as &i64) = 0;
            vvar_126{reg 48} = vvar_633{reg 48} - 8;
            *((vvar_633{reg 48} - 8) as &&u8) = &g_4e147c;
            std::thread::Builder::spawn_unchecked(vvar_633{reg 48} + 112, vvar_633{reg 48} + 352, vvar_633{reg 48} + 0x200);
            if !*((vvar_644{reg 48} + 112) as &i64) {
                *((vvar_126{reg 48} + 352) as &i64) = *((vvar_126{reg 48} + 120) as &i64);
                *((vvar_126{reg 48} - 8) as &&u8) = &g_4e1abc;
                core::result::unwrap_failed(); /* do not return */
            }
            *((vvar_126{reg 48} + 320) as &i64) = *((vvar_126{reg 48} + 128) as &i64);
            v74 = *((vvar_126{reg 48} + 112) as &i128);
            vvar_156{reg 224} = ((((vvar_85{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_627{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_653{reg 224}))
            *((vvar_126{reg 48} + 304) as &u128) = v74;
            *((vvar_126{reg 48} + 112) as &i64) = 0;
            *((vvar_126{reg 48} + 120) as &i64) = 8;
            *((vvar_126{reg 48} + 128) as &i64) = 0;
            v76 = *((vvar_126{reg 48} + 192) as &i64);
            v77 = *((vvar_126{reg 48} + 200) as &i64);
            v78 = *((vvar_126{reg 48} + 208) as &i64);
            v79 = &v77[v78];
            *((vvar_126{reg 48} + 352) as &&u128) = v77;
            *((vvar_126{reg 48} + 360) as &&u128) = v77;
            *((vvar_126{reg 48} + 368) as &u64) = v76;
            *((vvar_126{reg 48} + 376) as &u64) = v79;
            *((vvar_126{reg 48} + 384) as &i64) = 0;
            if v78 {
                v80 = vvar_126{reg 48} + 232;
                do {
                    *((vvar_150{reg 48} + 360) as &&u128) = v77 + 1;
                    v83 = *(v77);
                    vvar_688{reg 224} = ((vvar_156{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_687{reg 224}))
                    v84 = *((vvar_150{reg 48} + 384) as &i64);
                    *((vvar_150{reg 48} + 384) as &u64) = v84 + 1;
                    *((vvar_150{reg 48} + 224) as &u128) = v83;
                    vvar_692{reg 48} = vvar_150{reg 48} - 8;
                    *((vvar_150{reg 48} - 8) as &&u8) = &g_4e15ca;
                    v85 = std::sync::mpmc::Receiver<T>::recv(vvar_644{reg 48} + 224, v79, v78);
                    if v85 {
                        *((vvar_692{reg 48} + 0x200) as &i64) = 1;
                        *((vvar_692{reg 48} + 520) as &i64) = 1;
                        *((vvar_692{reg 48} + 528) as &u64) = v85;
                        vvar_218{reg 48} = vvar_692{reg 48} - 8;
                        *((vvar_692{reg 48} - 8) as &&u8) = &g_4e160d;
                        v86 = __rust_alloc(24, 8);
                        v86->field_10 = *((vvar_218{reg 48} + 528) as &i64);
                        v89 = *((vvar_218{reg 48} + 0x200) as &i128);
                        v86->field_0 = v89;
                        v90 = *((vvar_218{reg 48} + 224) as &i128);
                        *((vvar_218{reg 48} + 528) as &&struct_1) = v86;
                        *((vvar_218{reg 48} + 536) as &i64) = 0;
                        *((vvar_218{reg 48} + 0x200) as &u128) = v90;
                        *((vvar_218{reg 48} + 544) as &u64) = v84;
                        v91 = *((vvar_218{reg 48} + 128) as &i64);
                        if v91 == *((vvar_701{reg 48} + 112) as &i64) {
                            vvar_218{reg 48} = vvar_218{reg 48} - 8;
                            *((vvar_218{reg 48} - 8) as &&u8) = &g_4e1674;
                            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_644{reg 48} + 112);
                        }
                        v92 = *((vvar_218{reg 48} + 120) as &i64);
                        v93 = 5 * v91;
                        v94 = *((vvar_218{reg 48} + 0x200) as &i128);
                        vvar_753{reg 224} = ((((((vvar_688{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_719{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_721{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_752{reg 224}))
                        v95 = *((vvar_218{reg 48} + 528) as &i128);
                        vvar_755{reg 256} = ((vvar_157{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_754{reg 256}))
                        v78 = *((vvar_218{reg 48} + 544) as &i64);
                        *(32 + v92 + 0x8 * v93 as u64) = v78;
                        *(16 + v92 + 0x8 * v93 as u64) = v95;
                        *(v92 + 0x8 * v93 as u64) = v94;
                        *((vvar_218{reg 48} + 128) as &u64) = v91 + 1;
                    } else {
                        v87 = *((vvar_692{reg 48} + 224) as &i64);
                        if !v87 {
                            v88 = *((vvar_692{reg 48} + 232) as &i64);
                            *(&v88[65] as &i32) = vvar_953 - 1;
                            if BinaryOp CasCmpNE {
                                goto LABEL_0x4e16a7;
                            }
                            if !vvar_953 - 1 {
                                goto LABEL_4e16b5;
                            }
                            continue;
LABEL_4e16b5:
                            vvar_734{reg 48} = vvar_692{reg 48} - 8;
                            *((vvar_692{reg 48} - 8) as &&u8) = &g_4e16bd;
                            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v88);
                            *(&v88[66] as &i8) = 1;
                            if BinaryOp CasCmpNE {
                                goto LABEL_0x4e16bf;
                            }
                            if !vvar_954 {
                                continue;
                            }
                            vvar_747{reg 48} = vvar_734{reg 48} - 8;
                            *((vvar_734{reg 48} - 8) as &&u8) = &g_4e16d6;
                        } else if v87 != 1 {
                            vvar_731{reg 48} = vvar_692{reg 48} - 8;
                            *((vvar_692{reg 48} - 8) as &&u8) = &g_4e16e3;
                            std::sync::mpmc::counter::Receiver<C>::release(v80);
                            continue;
                        } else {
                            vvar_728{reg 48} = vvar_692{reg 48} - 8;
                            *((vvar_692{reg 48} - 8) as &&u8) = &g_4e169a;
                            std::sync::mpmc::counter::Receiver<C>::release(v80);
                        }
                    }
                } while ((v77 = *((vvar_200{reg 48} + 360) as &i64), v77 != *((vvar_200{reg 48} + 376) as &i64)));
            }
            vvar_162{reg 48} = vvar_126{reg 48} - 8;
            *((vvar_126{reg 48} - 8) as &&u8) = &g_4e16f5;
            v96 = *((vvar_162{reg 48} + 128) as &i64);
            *((vvar_162{reg 48} + 528) as &u64) = v96;
            *((vvar_162{reg 48} + 0x200) as &i128) = *((vvar_162{reg 48} + 112) as &i128);
            *((vvar_162{reg 48} + 536) as &i64) = *((vvar_162{reg 48} + 280) as &i64);
            if v96 {
                loop {
                    vvar_162{reg 48} = vvar_963{reg 48};
                    v99 = (v96 >> 1) - 1;
                    if v99 == -1 {
                        break;
                    }
                    v100 = *((vvar_162{reg 48} + 528) as &i64);
                    vvar_162{reg 48} = vvar_162{reg 48} - 8;
                    *((vvar_162{reg 48} - 8) as &&u8) = &g_4e175a;
                    binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(vvar_771{reg 48} + 0x200, v99, v100);
                }
            }
            v103 = *((vvar_162{reg 48} + 0x200) as &i128);
            v104 = *((vvar_162{reg 48} + 288) as &i64);
            v104->field_20 = *((vvar_162{reg 48} + 528) as &i64);
            v104->field_28 = *((vvar_162{reg 48} + 536) as &i64);
            v104->field_10 = v103;
            v105 = *((vvar_162{reg 48} + 240) as &i128);
            v104->field_30 = *((vvar_162{reg 48} + 304) as &i128);
            v106 = *((vvar_162{reg 48} + 320) as &i64);
            v104->field_40 = v106;
            v104->field_0 = v105;
            v104->field_48 = 0;
            return v106;
        }
    }
    *((vvar_72{reg 48} + 112) as &i64) = 9223372036854775809;
    *((vvar_72{reg 48} + 160) as &u64) = v30 + 1;
    v52 = *((vvar_72{reg 48} + 288) as &i64);
    (&v52->field_0)[1] = v37;
    v52->field_0 = 3;
    *(&v32->field_200 as &i32) = vvar_951 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4e1143;
    }
    if !vvar_951 - 1 {
        goto LABEL_0x4e114d;
    }
}
