fn uu_sort::merge::merge_without_limit(a0: u32, a1: &u64, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v2: u128;  // xmm0
    let v3: u64;  // rdi
    let v4: u64;  // r8
    let v5: u64;  // rcx
    let v6: u64;  // rsi
    let v7: u64;  // rbx
    let v8: u64;  // rax
    let v9: u128;  // xmm0
    let v10: u256;  // ymm0
    let v11: u256;  // ymm0
    let v12: u128;  // xmm1
    let v13: u256;  // ymm1
    let v14: u256;  // ymm1
    let v15: u128;  // xmm2
    let v16: u256;  // ymm2
    let v17: u256;  // ymm2
    let v18: u64;  // rax
    let v19: u64;  // rbx
    let v20: &struct_8;  // r12
    let v21: &struct_9;  // r15
    let v22: u256;  // ymm3
    let v23: u64;  // rax
    let v24: &struct_5;  // r13
    let v25: u128;  // xmm0
    let v26: &struct_7;  // rcx
    let v27: u64;  // r14
    let v28: &struct_0;  // rcx
    let v29: u128;  // xmm0
    let v30: u64;  // rdx
    let v31: &struct_1;  // rax
    let v32: &struct_1;  // rbx
    let v33: &u64;  // r12
    let v34: &u64;  // rax
    let v35: &u64;  // rcx
    let v36: u128;  // xmm0
    let v37: u64;  // rax
    let v38: &u128;  // rbx
    let v39: &u128;  // rax
    let v40: &u128;  // rcx
    let v41: u128;  // xmm0
    let v42: u128;  // xmm1
    let v43: u128;  // xmm2
    let v44: u128;  // xmm3
    let v45: u64;  // rcx
    let v46: u64;  // r15
    let v47: u64;  // rcx
    let v48: &struct_2;  // rax
    let v49: u128;  // xmm0
    let v50: u128;  // xmm1
    let v51: u128;  // xmm2
    let v58: u64;  // r14
    let v59: &struct_3;  // r13
    let v60: void*;  // rbx
    let v61: u256;  // ymm0
    let v62: u64;  // rcx
    let v63: u64;  // rsi
    let v64: u128;  // xmm0
    let v65: u128;  // xmm1
    let v66: u128;  // xmm2
    let v67: u128;  // xmm0
    let v70: u128;  // xmm0
    let v71: u256;  // ymm0
    let v72: u64;  // rcx
    let v73: &u128;  // rax
    let v74: u64;  // rdx
    let v75: u64;  // rsi
    let v76: u128;  // xmm0
    let v77: u64;  // rbx
    let v78: u64;  // rax
    let v79: &struct_0;  // rax
    let v80: u64;  // rax
    let v81: &u64;  // rbx
    let v82: u128;  // xmm0
    let v83: u128;  // xmm0
    let v84: &u128;  // rbx
    let v85: &u128;  // rax
    let v86: &u128;  // rcx
    let v87: u128;  // xmm0
    let v88: u128;  // xmm1
    let v90: u64;  // rsi
    let v93: u64;  // rsi
    let v94: u64;  // rdx
    let v96: u128;  // xmm0
    let v97: &struct_4;  // rcx
    let v98: u128;  // xmm0
    let v99: u64;  // rax

    vvar_294{reg 48} = (&v0 & -128) - 0x500;
    *((vvar_294{reg 48} + 272) as &u64) = a2;
    *((vvar_294{reg 48} + 264) as &u64) = a0;
    *((vvar_294{reg 48} + 0x100) as &&u64) = a1;
    vvar_7{reg 48} = vvar_294{reg 48} - 8;
    *((vvar_294{reg 48} - 8) as &&u8) = &g_4deae3;
    std::sync::mpmc::channel(vvar_294{reg 48} + 0x200);
    v2 = *((vvar_7{reg 48} + 0x200) as &i128);
    v3 = *((vvar_7{reg 48} + 528) as &i64);
    v4 = *((vvar_7{reg 48} + 536) as &i64);
    *((vvar_7{reg 48} + 224) as &u128) = v2;
    *((vvar_7{reg 48} + 240) as &u64) = v3;
    v5 = a1[3];
    v6 = a1[1];
    *((vvar_7{reg 48} + 248) as &u64) = v4;
    v7 = (v5 - v6) / 24;
    *((vvar_7{reg 48} + 496) as &u64) = v3;
    *((vvar_7{reg 48} + 488) as &u64) = v4;
    if v5 == v6 {
        *((vvar_7{reg 48} + 104) as &i64) = 0;
        *((vvar_7{reg 48} + 112) as &i64) = 8;
        *((vvar_7{reg 48} + 120) as &i64) = 0;
        v8 = 8;
    } else {
        vvar_331{reg 48} = vvar_7{reg 48} - 8;
        *((vvar_7{reg 48} - 8) as &&u8) = &g_4deb8e;
        *((vvar_331{reg 48} + 104) as &u64) = v7;
        *((vvar_331{reg 48} + 112) as &long long) = __rust_alloc(v7 * 72, 8);
        *((vvar_331{reg 48} + 120) as &i64) = 0;
        vvar_7{reg 48} = vvar_331{reg 48} - 8;
        *((vvar_331{reg 48} - 8) as &&u8) = &g_4debc3;
        v8 = __rust_alloc(v7 * 16, 8);
        a1 = *((vvar_7{reg 48} + 0x100) as &i64);
    }
    *((vvar_7{reg 48} + 184) as &u64) = v7;
    *((vvar_7{reg 48} + 192) as &u64) = v8;
    *((vvar_7{reg 48} + 200) as &i64) = 0;
    v9 = *(&a1 as &i128);
    vvar_37{reg 224} = ((((vvar_302{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_301{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_362{reg 224}))
    v12 = *(&a1[2] as &i128);
    vvar_39{reg 256} = ((vvar_365{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_364{reg 256}))
    v15 = *(&a1[4] as &i128);
    vvar_59{reg 288} = ((vvar_368{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_367{reg 288}))
    *((vvar_7{reg 48} + 160) as &u128) = v15;
    *((vvar_7{reg 48} + 144) as &u128) = v12;
    *((vvar_7{reg 48} + 128) as &u128) = v9;
    *((vvar_7{reg 48} + 176) as &i64) = 0;
    v18 = *((vvar_7{reg 48} + 152) as &i64);
    v19 = *((vvar_7{reg 48} + 136) as &i64);
    *((vvar_7{reg 48} + 280) as &u64) = v18;
    if v19 == v18 {
LABEL_4df037:
        vvar_65{reg 48} = vvar_27{reg 48} - 8;
        *((vvar_27{reg 48} - 8) as &&u8) = &g_4df046;
        v58 = *((vvar_65{reg 48} + 120) as &i64);
        if v58 {
            v59 = vvar_65{reg 48} + 536;
            v60 = 0;
            do {
                vvar_607{reg 48} = vvar_98{reg 48} - 8;
                *((vvar_98{reg 48} - 8) as &&u8) = &g_4df080;
                v11 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v59->field_0 = 0;
                *(&(&v59->padding_10)[1] as &i128) = 0;
                *(&v59->padding_28 as &i128) = 0;
                *((vvar_607{reg 48} + 0x200) as &void*) = v60;
                *((vvar_607{reg 48} + 520) as &i64) = 0;
                *((vvar_607{reg 48} + 528) as &i64) = 8;
                *((vvar_607{reg 48} + 552) as &i64) = 8;
                *((vvar_607{reg 48} + 576) as &i64) = 8;
                *((vvar_607{reg 48} + 600) as &i64) = 8;
                *((vvar_607{reg 48} + 608) as &i64) = 0;
                *((vvar_607{reg 48} + 616) as &i64) = 0x2000;
                *((vvar_607{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
                *((vvar_607{reg 48} + 632) as &i64) = 0x2000;
                vvar_65{reg 48} = vvar_607{reg 48} - 8;
                *((vvar_607{reg 48} - 8) as &&u8) = &g_4df11e;
                std::sync::mpmc::Sender<T>::send(vvar_607{reg 48} + 328, vvar_564{reg 48} + 224, vvar_564{reg 48} + 0x200, v62);
                if *((vvar_617{reg 48} + 336) as &i64) != 0x8000000000000000 {
                    *((vvar_65{reg 48} + 624) as &i128) = *((vvar_65{reg 48} + 440) as &i128);
                    *((vvar_65{reg 48} + 608) as &i128) = *((vvar_65{reg 48} + 424) as &i128);
                    *((vvar_65{reg 48} + 592) as &i128) = *((vvar_65{reg 48} + 408) as &i128);
                    *((vvar_65{reg 48} + 576) as &i128) = *((vvar_65{reg 48} + 392) as &i128);
                    v64 = *((vvar_65{reg 48} + 328) as &i128);
                    v65 = *((vvar_65{reg 48} + 344) as &i128);
                    v66 = *((vvar_65{reg 48} + 360) as &i128);
                    *((vvar_65{reg 48} + 560) as &i128) = *((vvar_65{reg 48} + 376) as &i128);
                    *((vvar_65{reg 48} + 544) as &u128) = v66;
                    *((vvar_65{reg 48} + 528) as &u128) = v65;
                    *((vvar_65{reg 48} + 0x200) as &u128) = v64;
                    *((vvar_65{reg 48} - 8) as &&u8) = &g_4df821;
                    core::result::unwrap_failed(); /* do not return */
                }
                v60 += 1;
            } while (v58 != v60);
        }
        v63 = *((vvar_65{reg 48} + 272) as &i64);
        vvar_641{reg 48} = vvar_65{reg 48} - 8;
        *((vvar_65{reg 48} - 8) as &&u8) = &g_4df159;
        <uu_sort::GlobalSettings as core::clone::Clone>::clone(vvar_65{reg 48} + 328, v63);
        *((vvar_641{reg 48} + 0x200) as &i64) = *((vvar_641{reg 48} + 496) as &i64);
        *((vvar_641{reg 48} + 520) as &i64) = *((vvar_641{reg 48} + 488) as &i64);
        v67 = *((vvar_641{reg 48} + 104) as &i128);
        *((vvar_641{reg 48} + 528) as &u128) = v67;
        *((vvar_641{reg 48} + 544) as &i64) = *((vvar_641{reg 48} + 120) as &i64);
        vvar_681{reg 48} = vvar_641{reg 48} - 8;
        *((vvar_641{reg 48} - 8) as &&u8) = &g_4df1ae;
        memcpy(vvar_641{reg 48} + 552, vvar_641{reg 48} + 328, 160);
        *((vvar_681{reg 48} + 344) as &i64) = 0x8000000000000000;
        *((vvar_681{reg 48} + 328) as &i64) = 0;
        vvar_109{reg 48} = vvar_681{reg 48} - 8;
        *((vvar_681{reg 48} - 8) as &&u8) = &g_4df1eb;
        std::thread::Builder::spawn_unchecked(vvar_681{reg 48} + 128, vvar_681{reg 48} + 328, vvar_681{reg 48} + 0x200);
        if !*((vvar_696{reg 48} + 128) as &i64) {
            *((vvar_109{reg 48} + 328) as &i64) = *((vvar_109{reg 48} + 136) as &i64);
            *((vvar_109{reg 48} - 8) as &&u8) = &g_4df97a;
            core::result::unwrap_failed(); /* do not return */
        }
        *((vvar_109{reg 48} + 304) as &i64) = *((vvar_109{reg 48} + 144) as &i64);
        v70 = *((vvar_109{reg 48} + 128) as &i128);
        vvar_132{reg 224} = ((((vvar_74{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_675{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_709{reg 224}))
        *((vvar_109{reg 48} + 288) as &u128) = v70;
        *((vvar_109{reg 48} + 128) as &i64) = 0;
        *((vvar_109{reg 48} + 136) as &i64) = 8;
        *((vvar_109{reg 48} + 144) as &i64) = 0;
        v72 = *((vvar_109{reg 48} + 184) as &i64);
        v73 = *((vvar_109{reg 48} + 192) as &i64);
        v74 = *((vvar_109{reg 48} + 200) as &i64);
        v75 = &v73[v74];
        *((vvar_109{reg 48} + 328) as &&u128) = v73;
        *((vvar_109{reg 48} + 336) as &&u128) = v73;
        *((vvar_109{reg 48} + 344) as &u64) = v72;
        *((vvar_109{reg 48} + 352) as &u64) = v75;
        *((vvar_109{reg 48} + 360) as &i64) = 0;
        if v74 {
            do {
                *((vvar_126{reg 48} + 336) as &&u128) = v73 + 1;
                v76 = *(v73);
                vvar_749{reg 224} = ((vvar_132{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_748{reg 224}))
                v77 = *((vvar_126{reg 48} + 360) as &i64);
                *((vvar_126{reg 48} + 360) as &u64) = v77 + 1;
                *((vvar_126{reg 48} + 208) as &u128) = v76;
                vvar_753{reg 48} = vvar_126{reg 48} - 8;
                *((vvar_126{reg 48} - 8) as &&u8) = &g_4df346;
                v78 = std::sync::mpmc::Receiver<T>::recv(vvar_696{reg 48} + 208, v75, v74);
                if v78 {
                    *((vvar_753{reg 48} + 0x200) as &i64) = 1;
                    *((vvar_753{reg 48} + 520) as &i64) = 1;
                    *((vvar_753{reg 48} + 528) as &u64) = v78;
                    vvar_185{reg 48} = vvar_753{reg 48} - 8;
                    *((vvar_753{reg 48} - 8) as &&u8) = &g_4df380;
                    v79 = __rust_alloc(24, 8);
                    v79->field_10 = *((vvar_185{reg 48} + 528) as &i64);
                    v82 = *((vvar_185{reg 48} + 0x200) as &i128);
                    v79->field_0 = v82;
                    v83 = *((vvar_185{reg 48} + 208) as &i128);
                    *((vvar_185{reg 48} + 528) as &&struct_0) = v79;
                    *((vvar_185{reg 48} + 536) as &i64) = 0;
                    *((vvar_185{reg 48} + 0x200) as &u128) = v83;
                    *((vvar_185{reg 48} + 544) as &u64) = v77;
                    v84 = *((vvar_185{reg 48} + 144) as &i64);
                    if v84 == *((vvar_761{reg 48} + 128) as &i64) {
                        vvar_185{reg 48} = vvar_185{reg 48} - 8;
                        *((vvar_185{reg 48} - 8) as &&u8) = &g_4df3ea;
                        alloc::raw_vec::RawVec<T,A>::grow_one(vvar_696{reg 48} + 128);
                    }
                    v85 = *((vvar_185{reg 48} + 136) as &i64);
                    v86 = v84 * 5;
                    v87 = *((vvar_185{reg 48} + 0x200) as &i128);
                    vvar_812{reg 224} = ((((((vvar_749{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_779{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_781{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_811{reg 224}))
                    v88 = *((vvar_185{reg 48} + 528) as &i128);
                    vvar_814{reg 256} = ((vvar_134{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_813{reg 256}))
                    v74 = *((vvar_185{reg 48} + 544) as &i64);
                    *(32 + v85 + 0x8 * v86 as u64) = v74;
                    *(16 + v85 + 0x8 * v86 as u64) = v88;
                    *(v85 + 0x8 * v86 as u64) = v87;
                    *((vvar_185{reg 48} + 144) as &&u128) = v84 as &char + 1;
                } else {
                    v80 = *((vvar_753{reg 48} + 208) as &i64);
                    if !v80 {
                        v81 = *((vvar_753{reg 48} + 216) as &i64);
                        *(&v81[65] as &i32) = vvar_1009 - 1;
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x4df41c;
                        }
                        if !vvar_1009 - 1 {
                            goto LABEL_4df42a;
                        }
                        continue;
LABEL_4df42a:
                        vvar_794{reg 48} = vvar_753{reg 48} - 8;
                        *((vvar_753{reg 48} - 8) as &&u8) = &g_4df432;
                        std::sync::mpmc::array::Channel<T>::disconnect_receivers(v81);
                        *(&v81[66] as &i8) = 1;
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x4df434;
                        }
                        if !vvar_1010 {
                            continue;
                        }
                        vvar_807{reg 48} = vvar_794{reg 48} - 8;
                        *((vvar_794{reg 48} - 8) as &&u8) = &g_4df44a;
                    } else if v80 == 1 {
                        vvar_788{reg 48} = vvar_753{reg 48} - 8;
                        *((vvar_753{reg 48} - 8) as &&u8) = &g_4df40f;
                        std::sync::mpmc::counter::Receiver<C>::release(vvar_753{reg 48} + 216);
                        continue;
                    } else {
                        vvar_791{reg 48} = vvar_753{reg 48} - 8;
                        *((vvar_753{reg 48} - 8) as &&u8) = &g_4df45c;
                        std::sync::mpmc::counter::Receiver<C>::release(vvar_753{reg 48} + 216);
                    }
                }
            } while ((v73 = *((vvar_174{reg 48} + 336) as &i64), v73 != *((vvar_174{reg 48} + 352) as &i64)));
        }
        vvar_139{reg 48} = vvar_109{reg 48} - 8;
        *((vvar_109{reg 48} - 8) as &&u8) = &g_4df46e;
        v90 = *((vvar_139{reg 48} + 144) as &i64);
        *((vvar_139{reg 48} + 528) as &u64) = v90;
        *((vvar_139{reg 48} + 0x200) as &i128) = *((vvar_139{reg 48} + 128) as &i128);
        *((vvar_139{reg 48} + 536) as &i64) = *((vvar_139{reg 48} + 272) as &i64);
        if v90 {
            loop {
                vvar_139{reg 48} = vvar_1020{reg 48};
                v93 = (v90 >> 1) - 1;
                if v93 == -1 {
                    break;
                }
                v94 = *((vvar_139{reg 48} + 528) as &i64);
                vvar_139{reg 48} = vvar_139{reg 48} - 8;
                *((vvar_139{reg 48} - 8) as &&u8) = &g_4df4da;
                binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(vvar_838{reg 48} + 0x200, v93, v94);
            }
        }
        v96 = *((vvar_139{reg 48} + 0x200) as &i128);
        v97 = *((vvar_139{reg 48} + 264) as &i64);
        v97->field_20 = *((vvar_139{reg 48} + 528) as &i64);
        v97->field_28 = *((vvar_139{reg 48} + 536) as &i64);
        v97->field_10 = v96;
        v98 = *((vvar_139{reg 48} + 224) as &i128);
        v97->field_30 = *((vvar_139{reg 48} + 288) as &i128);
        v99 = *((vvar_139{reg 48} + 304) as &i64);
        v97->field_40 = v99;
        v97->field_0 = v98;
        v97->field_48 = 0;
        return v99;
    }
    v20 = vvar_7{reg 48} + 520;
    v21 = v19 + 24;
    *((vvar_7{reg 48} + 96) as &i64) = 0;
    *((vvar_7{reg 48} + 504) as &i64) = 9223372036854775809;
    loop {
        v23 = v21[3].field_-18;
        if v23 == 0x8000000000000000 {
LABEL_4df022:
            *((vvar_7{reg 48} + 136) as &&struct_9) = v21;
            *((vvar_7{reg 48} + 176) as &i64) = *((vvar_7{reg 48} + 96) as &i64);
            goto LABEL_4df037;
        }
        v24 = v21 + 3;
        v25 = *(&(&v24->padding_0)[1] as &i128);
        vvar_37{reg 224} = ((vvar_37{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_391{reg 224}))
        *((vvar_7{reg 48} + 336) as &u128) = v25;
        v26 = *((vvar_7{reg 48} + 168) as &i64);
        *((vvar_7{reg 48} + 328) as &u64) = v23;
        vvar_7{reg 48} = vvar_7{reg 48} - 8;
        *((vvar_7{reg 48} - 8) as &&u8) = &g_4ded01;
        v26->field_20();
        v27 = *((vvar_7{reg 48} + 0x200) as &i64);
        if v27 == *((vvar_398{reg 48} + 504) as &i64) {
            v21 = v19 + 24;
            goto LABEL_4df022;
        }
        *((vvar_7{reg 48} + 88) as &&struct_9) = v21;
        v28 = vvar_7{reg 48} + 296;
        v28->field_10 = v20->field_10;
        v29 = v20->field_0;
        v28->field_0 = v29;
        *((vvar_7{reg 48} + 80) as &i64) = *((vvar_7{reg 48} + 96) as &i64) + 1;
        *((vvar_7{reg 48} + 288) as &u64) = v27;
        vvar_416{reg 48} = vvar_7{reg 48} - 8;
        *((vvar_7{reg 48} - 8) as &&u8) = &g_4ded5c;
        std::sync::mpmc::array::Channel<T>::with_capacity(vvar_398{reg 48} + 0x200, 2, v30, v28);
        v20 = v20;
        *((vvar_416{reg 48} + 0x400) as &i64) = 1;
        *((vvar_416{reg 48} + 1032) as &i64) = 1;
        *((vvar_416{reg 48} + 1040) as &i8) = 0;
        vvar_423{reg 48} = vvar_416{reg 48} - 8;
        *((vvar_416{reg 48} - 8) as &&u8) = &g_4ded99;
        v31 = __rust_alloc(640, 128);
        v32 = v31;
        vvar_148{reg 48} = vvar_423{reg 48} - 8;
        *((vvar_423{reg 48} - 8) as &&u8) = &g_4dedbb;
        memcpy(v31, vvar_423{reg 48} + 0x200, 640);
        *((vvar_148{reg 48} + 208) as &i64) = 0;
        *((vvar_148{reg 48} + 216) as &&struct_1) = v32;
        *((vvar_148{reg 48} + 0x200) as &i64) = 0;
        *((vvar_148{reg 48} + 520) as &&struct_1) = v32;
        v33 = *((vvar_148{reg 48} + 200) as &i64);
        if v33 == *((vvar_432{reg 48} + 184) as &i64) {
            vvar_148{reg 48} = vvar_148{reg 48} - 8;
            *((vvar_148{reg 48} - 8) as &&u8) = &g_4dee02;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_432{reg 48} + 184);
        }
        v34 = *((vvar_148{reg 48} + 192) as &i64);
        v35 = v33 * 16;
        *((v34 + v35) as &i64) = 0;
        *((v34 + v35 + 8) as &&struct_1) = v32;
        *((vvar_148{reg 48} + 200) as &&u64) = v33 as &char + 1;
        v36 = *((vvar_148{reg 48} + 296) as &i128);
        if v27 == 0x8000000000000000 {
            break;
        }
        v37 = *((vvar_148{reg 48} + 312) as &i64);
        *((vvar_148{reg 48} + 0x200) as &i64) = 0;
        *((vvar_148{reg 48} + 520) as &&struct_1) = v32;
        *((vvar_148{reg 48} + 528) as &u64) = v27;
        *((vvar_148{reg 48} + 536) as &u128) = v36;
        *((vvar_148{reg 48} + 552) as &u64) = v37;
        *((vvar_148{reg 48} + 560) as &i64) = 0;
        *((vvar_148{reg 48} + 568) as &i64) = 1;
        *((vvar_148{reg 48} + 576) as &i64) = 0;
        v38 = *((vvar_148{reg 48} + 120) as &i64);
        if v38 == *((vvar_148{reg 48} + 104) as &i64) {
            vvar_148{reg 48} = vvar_148{reg 48} - 8;
            *((vvar_148{reg 48} - 8) as &&u8) = &g_4deeb2;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_148{reg 48} + 104);
        }
        v39 = *((vvar_169{reg 48} + 112) as &i64);
        v40 = v38 * 9;
        *((64 + v39 + 0x8 * v40 as u64) as &i64) = *((vvar_169{reg 48} + 576) as &i64);
        v41 = *((vvar_169{reg 48} + 0x200) as &i128);
        v42 = *((vvar_169{reg 48} + 528) as &i128);
        vvar_39{reg 256} = ((vvar_39{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_465{reg 256}))
        v43 = *((vvar_169{reg 48} + 544) as &i128);
        vvar_59{reg 288} = ((vvar_59{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_467{reg 288}))
        v44 = *((vvar_169{reg 48} + 560) as &i128);
        vvar_61{reg 320} = ((vvar_61{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_469{reg 320}))
        *(48 + v39 + 0x8 * v40 as u64) = v44;
        *(32 + v39 + 0x8 * v40 as u64) = v43;
        *(16 + v39 + 0x8 * v40 as u64) = v42;
        *(v39 + 0x8 * v40 as u64) = v41;
        *((vvar_169{reg 48} + 120) as &&u128) = v38 as &char + 1;
        vvar_478{reg 48} = vvar_169{reg 48} - 8;
        *((vvar_169{reg 48} - 8) as &&u8) = &g_4def13;
        vvar_37{reg 224} = (((((((vvar_37{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_406{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_446{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_463{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
        *(&v20->field_10 as &i128) = 0;
        *(&(&v20->padding_18)[1] as &i128) = 0;
        *(&v20->padding_38 as &i128) = 0;
        v45 = *((vvar_478{reg 48} + 96) as &i64);
        *((vvar_478{reg 48} + 0x200) as &i64) = *((vvar_478{reg 48} + 96) as &i64);
        *((vvar_478{reg 48} + 520) as &i64) = 0;
        *((vvar_478{reg 48} + 528) as &i64) = 8;
        *((vvar_478{reg 48} + 552) as &i64) = 8;
        *((vvar_478{reg 48} + 576) as &i64) = 8;
        *((vvar_478{reg 48} + 600) as &i64) = 8;
        *((vvar_478{reg 48} + 608) as &i64) = 0;
        *((vvar_478{reg 48} + 616) as &i64) = 0x2000;
        *((vvar_478{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
        *((vvar_478{reg 48} + 632) as &i64) = 0x2000;
        v46 = *((vvar_478{reg 48} + 88) as &i64);
        vvar_7{reg 48} = vvar_478{reg 48} - 8;
        *((vvar_478{reg 48} - 8) as &&u8) = &g_4defcb;
        std::sync::mpmc::Sender<T>::send(vvar_478{reg 48} + 328, vvar_478{reg 48} + 224, vvar_478{reg 48} + 0x200, v45);
        if *((vvar_492{reg 48} + 336) as &i64) != 0x8000000000000000 {
            *((vvar_7{reg 48} + 136) as &u64) = v46;
            *((vvar_7{reg 48} + 176) as &i64) = *((vvar_7{reg 48} + 80) as &i64);
            *((vvar_7{reg 48} + 624) as &i128) = *((vvar_7{reg 48} + 440) as &i128);
            *((vvar_7{reg 48} + 608) as &i128) = *((vvar_7{reg 48} + 424) as &i128);
            *((vvar_7{reg 48} + 592) as &i128) = *((vvar_7{reg 48} + 408) as &i128);
            *((vvar_7{reg 48} + 576) as &i128) = *((vvar_7{reg 48} + 392) as &i128);
            v49 = *((vvar_7{reg 48} + 328) as &i128);
            v50 = *((vvar_7{reg 48} + 344) as &i128);
            v51 = *((vvar_7{reg 48} + 360) as &i128);
            *((vvar_7{reg 48} + 560) as &i128) = *((vvar_7{reg 48} + 376) as &i128);
            *((vvar_7{reg 48} + 544) as &u128) = v51;
            *((vvar_7{reg 48} + 528) as &u128) = v50;
            *((vvar_7{reg 48} + 0x200) as &u128) = v49;
            *((vvar_7{reg 48} - 8) as &&u8) = &g_4df942;
            core::result::unwrap_failed(); /* do not return */
        }
        v21 = v46 + 24;
        v19 = &v24->field_8 as &char + 8;
        v47 = *((vvar_7{reg 48} + 80) as &i64);
        *((vvar_7{reg 48} + 96) as &u64) = v47;
        if v19 == *((vvar_492{reg 48} + 280) as &i64) {
            v21 = *((vvar_7{reg 48} + 280) as &i64);
            *((vvar_7{reg 48} + 96) as &u64) = v47;
            goto LABEL_4df022;
        }
    }
    *((vvar_148{reg 48} + 136) as &i64) = *((vvar_148{reg 48} + 88) as &i64);
    *((vvar_148{reg 48} + 176) as &i64) = *((vvar_148{reg 48} + 80) as &i64);
    v48 = *((vvar_148{reg 48} + 264) as &i64);
    (&v48->field_0)[1] = v36;
    v48->field_0 = 3;
    *(&v32->field_200 as &i32) = vvar_1007 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4df572;
    }
    if !vvar_1007 - 1 {
        goto LABEL_0x4df57c;
    }
}
