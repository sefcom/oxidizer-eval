fn uu_sort::merge::merge_without_limit(a0: u32, a1: &u64, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v2: u128;  // xmm0
    let v3: u64;  // rax
    let v4: u64;  // rdi
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
    let v20: &struct_3;  // r13
    let v21: &struct_5;  // r15
    let v22: u256;  // ymm3
    let v23: u64;  // rax
    let v24: &struct_1;  // r12
    let v25: &struct_10;  // rdx
    let v26: u128;  // xmm0
    let v27: u128;  // xmm1
    let v28: &struct_8;  // rcx
    let v29: u64;  // r14
    let v30: &struct_9;  // rcx
    let v31: u128;  // xmm0
    let v32: u128;  // xmm1
    let v33: u128;  // xmm2
    let v34: u128;  // xmm3
    let v35: u64;  // rdx
    let v36: &struct_3;  // r15
    let v37: &struct_4;  // rax
    let v38: &struct_4;  // rbx
    let v39: &u64;  // r13
    let v40: &u64;  // rax
    let v41: &u64;  // rcx
    let v42: u128;  // xmm0
    let v43: &struct_12;  // rcx
    let v44: u128;  // xmm1
    let v45: u128;  // xmm2
    let v46: u128;  // xmm3
    let v47: &u128;  // rbx
    let v48: &u128;  // rax
    let v49: &u128;  // rcx
    let v50: u128;  // xmm0
    let v51: u128;  // xmm0
    let v52: u128;  // xmm0
    let v53: u128;  // xmm0
    let v54: u128;  // xmm1
    let v55: u128;  // xmm2
    let v56: u128;  // xmm3
    let v57: u64;  // rcx
    let v58: u64;  // r15
    let v59: u64;  // rcx
    let v60: &struct_2;  // rax
    let v61: u128;  // xmm0
    let v62: u128;  // xmm1
    let v63: u128;  // xmm2
    let v70: u64;  // r14
    let v71: &struct_6;  // r13
    let v72: void*;  // rbx
    let v73: u256;  // ymm0
    let v74: u64;  // rcx
    let v75: u64;  // rsi
    let v76: u128;  // xmm0
    let v77: u128;  // xmm1
    let v78: u128;  // xmm2
    let v79: u128;  // xmm0
    let v80: u128;  // xmm0
    let v81: u256;  // ymm0
    let v82: u64;  // rcx
    let v83: &u128;  // rax
    let v84: u64;  // rdx
    let v85: u64;  // rsi
    let v87: u128;  // xmm0
    let v88: u64;  // rbx
    let v89: u64;  // rax
    let v90: &struct_0;  // rax
    let v91: u64;  // rax
    let v92: &u64;  // rbx
    let v93: u128;  // xmm0
    let v94: u128;  // xmm0
    let v95: &u128;  // rbx
    let v96: &u128;  // rax
    let v97: &u128;  // rcx
    let v98: u128;  // xmm0
    let v99: u128;  // xmm1
    let v101: u64;  // rsi
    let v103: u64;  // rsi
    let v104: u64;  // rdx
    let v107: u128;  // xmm0
    let v108: &struct_11;  // rcx
    let v109: u128;  // xmm0
    let v110: u64;  // rax

    vvar_284{reg 48} = (&v0 & -128) - 0x500;
    *((vvar_284{reg 48} + 232) as &u64) = a2;
    *((vvar_284{reg 48} + 224) as &u64) = a0;
    *((vvar_284{reg 48} + 216) as &&u64) = a1;
    vvar_6{reg 48} = vvar_284{reg 48} - 8;
    *((vvar_284{reg 48} - 8) as &&u8) = &g_4dd933;
    std::sync::mpmc::channel(vvar_284{reg 48} + 0x200);
    v2 = *((vvar_6{reg 48} + 0x200) as &i128);
    v3 = *((vvar_6{reg 48} + 528) as &i64);
    v4 = *((vvar_6{reg 48} + 536) as &i64);
    *((vvar_6{reg 48} + 184) as &u128) = v2;
    *((vvar_6{reg 48} + 496) as &u64) = v3;
    *((vvar_6{reg 48} + 200) as &u64) = v3;
    v5 = a1[3];
    v6 = a1[1];
    *((vvar_6{reg 48} + 488) as &u64) = v4;
    *((vvar_6{reg 48} + 208) as &u64) = v4;
    v7 = (v5 - v6) / 48;
    if v5 == v6 {
        *((vvar_6{reg 48} + 64) as &i64) = 0;
        *((vvar_6{reg 48} + 72) as &i64) = 8;
        *((vvar_6{reg 48} + 80) as &i64) = 0;
        v8 = 8;
    } else {
        vvar_320{reg 48} = vvar_6{reg 48} - 8;
        *((vvar_6{reg 48} - 8) as &&u8) = &g_4dd9d6;
        *((vvar_320{reg 48} + 64) as &u64) = v7;
        *((vvar_320{reg 48} + 72) as &long long) = __rust_alloc(v7 * 120, 8);
        *((vvar_320{reg 48} + 80) as &i64) = 0;
        vvar_6{reg 48} = vvar_320{reg 48} - 8;
        *((vvar_320{reg 48} - 8) as &&u8) = &g_4dda0b;
        v8 = __rust_alloc(v7 * 16, 8);
        a1 = *((vvar_6{reg 48} + 216) as &i64);
    }
    *((vvar_6{reg 48} + 88) as &u64) = v7;
    *((vvar_6{reg 48} + 96) as &u64) = v8;
    *((vvar_6{reg 48} + 104) as &i64) = 0;
    v9 = *(&a1 as &i128);
    vvar_36{reg 224} = ((((vvar_292{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_291{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_351{reg 224}))
    v12 = *(&a1[2] as &i128);
    vvar_38{reg 256} = ((vvar_354{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_353{reg 256}))
    v15 = *(&a1[4] as &i128);
    vvar_58{reg 288} = ((vvar_357{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_356{reg 288}))
    *((vvar_6{reg 48} + 160) as &u128) = v15;
    *((vvar_6{reg 48} + 144) as &u128) = v12;
    *((vvar_6{reg 48} + 128) as &u128) = v9;
    *((vvar_6{reg 48} + 176) as &i64) = 0;
    v18 = *((vvar_6{reg 48} + 152) as &i64);
    v19 = *((vvar_6{reg 48} + 136) as &i64);
    *((vvar_6{reg 48} + 240) as &u64) = v18;
    if v19 == v18 {
LABEL_4dded2:
        vvar_64{reg 48} = vvar_26{reg 48} - 8;
        *((vvar_26{reg 48} - 8) as &&u8) = &g_4ddee2;
        v70 = *((vvar_64{reg 48} + 80) as &i64);
        if v70 {
            v71 = vvar_64{reg 48} + 536;
            v72 = 0;
            do {
                vvar_618{reg 48} = vvar_97{reg 48} - 8;
                *((vvar_97{reg 48} - 8) as &&u8) = &g_4ddf20;
                v11 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v71->field_0 = 0;
                *(&(&v71->padding_10)[1] as &i128) = 0;
                *(&v71->padding_28 as &i128) = 0;
                *((vvar_618{reg 48} + 0x200) as &void*) = v72;
                *((vvar_618{reg 48} + 520) as &i64) = 0;
                *((vvar_618{reg 48} + 528) as &i64) = 8;
                *((vvar_618{reg 48} + 552) as &i64) = 8;
                *((vvar_618{reg 48} + 576) as &i64) = 8;
                *((vvar_618{reg 48} + 600) as &i64) = 8;
                *((vvar_618{reg 48} + 608) as &i64) = 0;
                *((vvar_618{reg 48} + 616) as &i64) = 0x2000;
                *((vvar_618{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
                *((vvar_618{reg 48} + 632) as &i64) = 0x2000;
                vvar_64{reg 48} = vvar_618{reg 48} - 8;
                *((vvar_618{reg 48} - 8) as &&u8) = &g_4ddfbe;
                std::sync::mpmc::Sender<T>::send(vvar_618{reg 48} + 248, vvar_575{reg 48} + 184, vvar_575{reg 48} + 0x200, v74);
                if *((vvar_628{reg 48} + 0x100) as &i64) != 0x8000000000000000 {
                    *((vvar_64{reg 48} + 624) as &i128) = *((vvar_64{reg 48} + 360) as &i128);
                    *((vvar_64{reg 48} + 608) as &i128) = *((vvar_64{reg 48} + 344) as &i128);
                    *((vvar_64{reg 48} + 592) as &i128) = *((vvar_64{reg 48} + 328) as &i128);
                    *((vvar_64{reg 48} + 576) as &i128) = *((vvar_64{reg 48} + 312) as &i128);
                    v76 = *((vvar_64{reg 48} + 248) as &i128);
                    v77 = *((vvar_64{reg 48} + 264) as &i128);
                    v78 = *((vvar_64{reg 48} + 280) as &i128);
                    *((vvar_64{reg 48} + 560) as &i128) = *((vvar_64{reg 48} + 296) as &i128);
                    *((vvar_64{reg 48} + 544) as &u128) = v78;
                    *((vvar_64{reg 48} + 528) as &u128) = v77;
                    *((vvar_64{reg 48} + 0x200) as &u128) = v76;
                    *((vvar_64{reg 48} - 8) as &&u8) = &g_4de671;
                    core::result::unwrap_failed(); /* do not return */
                }
                v72 += 1;
            } while (v70 != v72);
        }
        v75 = *((vvar_64{reg 48} + 232) as &i64);
        vvar_652{reg 48} = vvar_64{reg 48} - 8;
        *((vvar_64{reg 48} - 8) as &&u8) = &g_4ddffa;
        <uu_sort::GlobalSettings as core::clone::Clone>::clone(vvar_64{reg 48} + 248, v75);
        *((vvar_652{reg 48} + 0x200) as &i64) = *((vvar_652{reg 48} + 496) as &i64);
        *((vvar_652{reg 48} + 520) as &i64) = *((vvar_652{reg 48} + 488) as &i64);
        v79 = *((vvar_652{reg 48} + 64) as &i128);
        *((vvar_652{reg 48} + 528) as &u128) = v79;
        *((vvar_652{reg 48} + 544) as &i64) = *((vvar_652{reg 48} + 80) as &i64);
        vvar_692{reg 48} = vvar_652{reg 48} - 8;
        *((vvar_652{reg 48} - 8) as &&u8) = &g_4de04f;
        memcpy(vvar_652{reg 48} + 552, vvar_652{reg 48} + 248, 160);
        *((vvar_692{reg 48} + 264) as &i64) = 0x8000000000000000;
        *((vvar_692{reg 48} + 248) as &i64) = 0;
        vvar_108{reg 48} = vvar_692{reg 48} - 8;
        *((vvar_692{reg 48} - 8) as &&u8) = &g_4de08d;
        std::thread::Builder::spawn_unchecked(vvar_692{reg 48} + 408, vvar_692{reg 48} + 248, vvar_692{reg 48} + 0x200);
        if !*((vvar_707{reg 48} + 408) as &i64) {
            *((vvar_108{reg 48} + 248) as &i64) = *((vvar_108{reg 48} + 416) as &i64);
            *((vvar_108{reg 48} - 8) as &&u8) = &g_4de7ca;
            core::result::unwrap_failed(); /* do not return */
        }
        *((vvar_108{reg 48} + 144) as &i64) = *((vvar_108{reg 48} + 424) as &i64);
        v80 = *((vvar_108{reg 48} + 408) as &i128);
        vvar_131{reg 224} = ((((vvar_73{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_686{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_720{reg 224}))
        *((vvar_108{reg 48} + 128) as &u128) = v80;
        *((vvar_108{reg 48} + 408) as &i64) = 0;
        *((vvar_108{reg 48} + 416) as &i64) = 8;
        *((vvar_108{reg 48} + 424) as &i64) = 0;
        v82 = *((vvar_108{reg 48} + 88) as &i64);
        v83 = *((vvar_108{reg 48} + 96) as &i64);
        v84 = *((vvar_108{reg 48} + 104) as &i64);
        v85 = &v83[v84];
        *((vvar_108{reg 48} + 248) as &&u128) = v83;
        *((vvar_108{reg 48} + 0x100) as &&u128) = v83;
        *((vvar_108{reg 48} + 264) as &u64) = v82;
        *((vvar_108{reg 48} + 272) as &u64) = v85;
        *((vvar_108{reg 48} + 280) as &i64) = 0;
        if v84 {
            do {
                *((vvar_125{reg 48} + 0x100) as &&u128) = v83 + 1;
                v87 = *(v83);
                vvar_756{reg 224} = ((vvar_131{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_755{reg 224}))
                v88 = *((vvar_125{reg 48} + 280) as &i64);
                *((vvar_125{reg 48} + 280) as &u64) = v88 + 1;
                *((vvar_125{reg 48} + 112) as &u128) = v87;
                vvar_760{reg 48} = vvar_125{reg 48} - 8;
                *((vvar_125{reg 48} - 8) as &&u8) = &g_4de1d3;
                v89 = std::sync::mpmc::Receiver<T>::recv(vvar_707{reg 48} + 112, v85, v84);
                if v89 {
                    *((vvar_760{reg 48} + 0x200) as &i64) = 1;
                    *((vvar_760{reg 48} + 520) as &i64) = 1;
                    *((vvar_760{reg 48} + 528) as &u64) = v89;
                    vvar_184{reg 48} = vvar_760{reg 48} - 8;
                    *((vvar_760{reg 48} - 8) as &&u8) = &g_4de20d;
                    v90 = __rust_alloc(24, 8);
                    v90->field_10 = *((vvar_184{reg 48} + 528) as &i64);
                    v93 = *((vvar_184{reg 48} + 0x200) as &i128);
                    v90->field_0 = v93;
                    v94 = *((vvar_184{reg 48} + 112) as &i128);
                    *((vvar_184{reg 48} + 528) as &&struct_0) = v90;
                    *((vvar_184{reg 48} + 536) as &i64) = 0;
                    *((vvar_184{reg 48} + 0x200) as &u128) = v94;
                    *((vvar_184{reg 48} + 544) as &u64) = v88;
                    v95 = *((vvar_184{reg 48} + 424) as &i64);
                    if v95 == *((vvar_768{reg 48} + 408) as &i64) {
                        vvar_184{reg 48} = vvar_184{reg 48} - 8;
                        *((vvar_184{reg 48} - 8) as &&u8) = &g_4de274;
                        alloc::raw_vec::RawVec<T,A>::grow_one(vvar_707{reg 48} + 408);
                    }
                    v96 = *((vvar_184{reg 48} + 416) as &i64);
                    v97 = v95 * 5;
                    v98 = *((vvar_184{reg 48} + 0x200) as &i128);
                    vvar_819{reg 224} = ((((((vvar_756{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_786{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_788{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_818{reg 224}))
                    v99 = *((vvar_184{reg 48} + 528) as &i128);
                    vvar_821{reg 256} = ((vvar_133{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_820{reg 256}))
                    v84 = *((vvar_184{reg 48} + 544) as &i64);
                    *(32 + v96 + 0x8 * v97 as u64) = v84;
                    *(16 + v96 + 0x8 * v97 as u64) = v99;
                    *(v96 + 0x8 * v97 as u64) = v98;
                    *((vvar_184{reg 48} + 424) as &&u128) = v95 as &char + 1;
                } else {
                    v91 = *((vvar_760{reg 48} + 112) as &i64);
                    if !v91 {
                        v92 = *((vvar_760{reg 48} + 120) as &i64);
                        *(&v92[65] as &i32) = vvar_1003 - 1;
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x4de2a3;
                        }
                        if !vvar_1003 - 1 {
                            goto LABEL_4de2b1;
                        }
                        continue;
LABEL_4de2b1:
                        vvar_801{reg 48} = vvar_760{reg 48} - 8;
                        *((vvar_760{reg 48} - 8) as &&u8) = &g_4de2b9;
                        std::sync::mpmc::array::Channel<T>::disconnect_receivers(v92);
                        *(&v92[66] as &i8) = 1;
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x4de2bb;
                        }
                        if !vvar_1004 {
                            continue;
                        }
                        vvar_814{reg 48} = vvar_801{reg 48} - 8;
                        *((vvar_801{reg 48} - 8) as &&u8) = &g_4de2d1;
                    } else if v91 != 1 {
                        vvar_798{reg 48} = vvar_760{reg 48} - 8;
                        *((vvar_760{reg 48} - 8) as &&u8) = &g_4de2e0;
                        std::sync::mpmc::counter::Receiver<C>::release(vvar_760{reg 48} + 120);
                        continue;
                    } else {
                        vvar_795{reg 48} = vvar_760{reg 48} - 8;
                        *((vvar_760{reg 48} - 8) as &&u8) = &g_4de299;
                        std::sync::mpmc::counter::Receiver<C>::release(vvar_760{reg 48} + 120);
                    }
                }
            } while ((v83 = *((vvar_173{reg 48} + 0x100) as &i64), v83 != *((vvar_173{reg 48} + 272) as &i64)));
        }
        vvar_138{reg 48} = vvar_108{reg 48} - 8;
        *((vvar_108{reg 48} - 8) as &&u8) = &g_4de2f2;
        v101 = *((vvar_138{reg 48} + 424) as &i64);
        *((vvar_138{reg 48} + 528) as &u64) = v101;
        *((vvar_138{reg 48} + 0x200) as &i128) = *((vvar_138{reg 48} + 408) as &i128);
        *((vvar_138{reg 48} + 536) as &i64) = *((vvar_138{reg 48} + 232) as &i64);
        if v101 {
            loop {
                vvar_138{reg 48} = vvar_1014{reg 48};
                v103 = (v101 >> 1) - 1;
                if v103 == -1 {
                    break;
                }
                v104 = *((vvar_138{reg 48} + 528) as &i64);
                vvar_138{reg 48} = vvar_138{reg 48} - 8;
                *((vvar_138{reg 48} - 8) as &&u8) = &g_4de35a;
                binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(vvar_837{reg 48} + 0x200, v103, v104);
            }
        }
        v107 = *((vvar_138{reg 48} + 0x200) as &i128);
        v108 = *((vvar_138{reg 48} + 224) as &i64);
        v108->field_20 = *((vvar_138{reg 48} + 528) as &i64);
        v108->field_28 = *((vvar_138{reg 48} + 536) as &i64);
        v108->field_10 = v107;
        v109 = *((vvar_138{reg 48} + 184) as &i128);
        v108->field_30 = *((vvar_138{reg 48} + 128) as &i128);
        v110 = *((vvar_138{reg 48} + 144) as &i64);
        v108->field_40 = v110;
        v108->field_0 = v109;
        v108->field_48 = 0;
        return v110;
    }
    v20 = vvar_6{reg 48} + 520;
    v21 = v19 + 48;
    *((vvar_6{reg 48} + 56) as &i64) = 0;
    *((vvar_6{reg 48} + 504) as &i64) = 9223372036854775809;
    loop {
        v23 = v21[6].field_-30;
        if v23 == 0x8000000000000000 {
LABEL_4ddebd:
            *((vvar_6{reg 48} + 136) as &&struct_5) = v21;
            *((vvar_6{reg 48} + 176) as &i64) = *((vvar_6{reg 48} + 56) as &i64);
            goto LABEL_4dded2;
        }
        v24 = v21 + 6;
        v25 = vvar_6{reg 48} + 0x100;
        v25->field_20 = *((&v24->field_18 as &char + 8) as &i64);
        v26 = *(&(&v24->padding_0)[1] as &i128);
        vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_382{reg 224}))
        v27 = *((&v24->field_8 as &char + 8) as &i128);
        vvar_38{reg 256} = ((vvar_38{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_384{reg 256}))
        v25->field_10 = v27;
        v25->field_0 = v26;
        v28 = *((vvar_6{reg 48} + 168) as &i64);
        *((vvar_6{reg 48} + 248) as &u64) = v23;
        vvar_6{reg 48} = vvar_6{reg 48} - 8;
        *((vvar_6{reg 48} - 8) as &&u8) = &g_4ddb55;
        v28->field_20();
        v29 = *((vvar_6{reg 48} + 0x200) as &i64);
        if v29 == *((vvar_390{reg 48} + 504) as &i64) {
            v21 = v19 + 48;
            goto LABEL_4ddebd;
        }
        *((vvar_6{reg 48} + 48) as &&struct_5) = v21;
        v30 = vvar_6{reg 48} + 416;
        *(&v30->field_40 as &[u8; 8]) = v20->padding_38;
        v31 = v20->field_0;
        v32 = v20->field_10;
        v33 = v20->field_20;
        v34 = v20->field_28;
        v30->field_30 = v34;
        v30->field_20 = v33;
        v30->field_10 = v32;
        v30->field_0 = v31;
        *((vvar_6{reg 48} + 40) as &i64) = *((vvar_6{reg 48} + 56) as &i64) + 1;
        *((vvar_6{reg 48} + 408) as &u64) = v29;
        vvar_414{reg 48} = vvar_6{reg 48} - 8;
        *((vvar_6{reg 48} - 8) as &&u8) = &g_4ddbca;
        std::sync::mpmc::array::Channel<T>::with_capacity(vvar_390{reg 48} + 0x200, 2, v35, v30);
        v36 = v20;
        *((vvar_414{reg 48} + 0x400) as &i64) = 1;
        *((vvar_414{reg 48} + 1032) as &i64) = 1;
        *((vvar_414{reg 48} + 1040) as &i8) = 0;
        vvar_421{reg 48} = vvar_414{reg 48} - 8;
        *((vvar_414{reg 48} - 8) as &&u8) = &g_4ddc07;
        v37 = __rust_alloc(640, 128);
        v38 = v37;
        vvar_147{reg 48} = vvar_421{reg 48} - 8;
        *((vvar_421{reg 48} - 8) as &&u8) = &g_4ddc29;
        memcpy(v37, vvar_421{reg 48} + 0x200, 640);
        *((vvar_147{reg 48} + 112) as &i64) = 0;
        *((vvar_147{reg 48} + 120) as &&struct_4) = v38;
        *((vvar_147{reg 48} + 0x200) as &i64) = 0;
        *((vvar_147{reg 48} + 520) as &&struct_4) = v38;
        v39 = *((vvar_147{reg 48} + 104) as &i64);
        if v39 == *((vvar_430{reg 48} + 88) as &i64) {
            vvar_147{reg 48} = vvar_147{reg 48} - 8;
            *((vvar_147{reg 48} - 8) as &&u8) = &g_4ddc61;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_430{reg 48} + 88);
        }
        v40 = *((vvar_147{reg 48} + 96) as &i64);
        v41 = v39 * 16;
        *((v40 + v41) as &i64) = 0;
        *((v40 + v41 + 8) as &&struct_4) = v38;
        *((vvar_147{reg 48} + 104) as &&u64) = v39 as &char + 1;
        v42 = *((vvar_147{reg 48} + 416) as &i128);
        if v29 == 0x8000000000000000 {
            break;
        }
        v43 = vvar_147{reg 48} + 416;
        v20 = v36;
        v36->padding_48[0] = v43->field_40;
        v44 = v43->field_10;
        v45 = v43->field_20;
        v46 = v43->field_30;
        *(&v36->padding_38 as &u128) = v46;
        v36->field_28 = v45;
        v36->field_20 = v44;
        *((vvar_147{reg 48} + 0x200) as &i64) = 0;
        *((vvar_147{reg 48} + 520) as &&struct_4) = v38;
        *((vvar_147{reg 48} + 528) as &u64) = v29;
        *((vvar_147{reg 48} + 536) as &u128) = v42;
        *((vvar_147{reg 48} + 608) as &i64) = 0;
        *((vvar_147{reg 48} + 616) as &i64) = 1;
        *((vvar_147{reg 48} + 624) as &i64) = 0;
        v47 = *((vvar_147{reg 48} + 80) as &i64);
        if v47 == *((vvar_147{reg 48} + 64) as &i64) {
            vvar_147{reg 48} = vvar_147{reg 48} - 8;
            *((vvar_147{reg 48} - 8) as &&u8) = &g_4ddd29;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_147{reg 48} + 64);
        }
        v48 = *((vvar_168{reg 48} + 72) as &i64);
        v49 = v47 * 120;
        *((v48 + v49 + 112) as &i64) = *((vvar_168{reg 48} + 624) as &i64);
        v50 = *((vvar_168{reg 48} + 608) as &i128);
        *((v48 + v49 + 96) as &u128) = v50;
        v51 = *((vvar_168{reg 48} + 592) as &i128);
        *((v48 + v49 + 80) as &u128) = v51;
        v52 = *((vvar_168{reg 48} + 576) as &i128);
        *((v48 + v49 + 64) as &u128) = v52;
        v53 = *((vvar_168{reg 48} + 0x200) as &i128);
        v54 = *((vvar_168{reg 48} + 528) as &i128);
        vvar_38{reg 256} = ((((((vvar_38{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_400{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_453{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_477{reg 256}))
        v55 = *((vvar_168{reg 48} + 544) as &i128);
        vvar_58{reg 288} = ((((((vvar_58{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_402{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_455{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_479{reg 288}))
        v56 = *((vvar_168{reg 48} + 560) as &i128);
        vvar_60{reg 320} = ((((((vvar_60{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_404{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_457{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_481{reg 320}))
        *((v48 + v49 + 48) as &u128) = v56;
        *((v48 + v49 + 32) as &u128) = v55;
        *((v48 + v49 + 16) as &u128) = v54;
        *((v48 + v49) as &u128) = v53;
        *((vvar_168{reg 48} + 80) as &&u128) = v47 as &char + 1;
        vvar_490{reg 48} = vvar_168{reg 48} - 8;
        *((vvar_168{reg 48} - 8) as &&u8) = &g_4dddb1;
        vvar_36{reg 224} = (((((((((((((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_398{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_444{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_469{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_471{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_473{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_475{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
        v20->field_10 = 0;
        *((&v20->field_20 as &char + 8) as &i128) = 0;
        *(&v20->padding_38 as &i128) = 0;
        v57 = *((vvar_490{reg 48} + 56) as &i64);
        *((vvar_490{reg 48} + 0x200) as &i64) = *((vvar_490{reg 48} + 56) as &i64);
        *((vvar_490{reg 48} + 520) as &i64) = 0;
        *((vvar_490{reg 48} + 528) as &i64) = 8;
        *((vvar_490{reg 48} + 552) as &i64) = 8;
        *((vvar_490{reg 48} + 576) as &i64) = 8;
        *((vvar_490{reg 48} + 600) as &i64) = 8;
        *((vvar_490{reg 48} + 608) as &i64) = 0;
        *((vvar_490{reg 48} + 616) as &i64) = 0x2000;
        *((vvar_490{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
        *((vvar_490{reg 48} + 632) as &i64) = 0x2000;
        v58 = *((vvar_490{reg 48} + 48) as &i64);
        vvar_6{reg 48} = vvar_490{reg 48} - 8;
        *((vvar_490{reg 48} - 8) as &&u8) = &g_4dde66;
        std::sync::mpmc::Sender<T>::send(vvar_490{reg 48} + 248, vvar_490{reg 48} + 184, vvar_490{reg 48} + 0x200, v57);
        if *((vvar_503{reg 48} + 0x100) as &i64) != 0x8000000000000000 {
            *((vvar_6{reg 48} + 136) as &u64) = v58;
            *((vvar_6{reg 48} + 176) as &i64) = *((vvar_6{reg 48} + 40) as &i64);
            *((vvar_6{reg 48} + 624) as &i128) = *((vvar_6{reg 48} + 360) as &i128);
            *((vvar_6{reg 48} + 608) as &i128) = *((vvar_6{reg 48} + 344) as &i128);
            *((vvar_6{reg 48} + 592) as &i128) = *((vvar_6{reg 48} + 328) as &i128);
            *((vvar_6{reg 48} + 576) as &i128) = *((vvar_6{reg 48} + 312) as &i128);
            v61 = *((vvar_6{reg 48} + 248) as &i128);
            v62 = *((vvar_6{reg 48} + 264) as &i128);
            v63 = *((vvar_6{reg 48} + 280) as &i128);
            *((vvar_6{reg 48} + 560) as &i128) = *((vvar_6{reg 48} + 296) as &i128);
            *((vvar_6{reg 48} + 544) as &u128) = v63;
            *((vvar_6{reg 48} + 528) as &u128) = v62;
            *((vvar_6{reg 48} + 0x200) as &u128) = v61;
            *((vvar_6{reg 48} - 8) as &&u8) = &g_4de792;
            core::result::unwrap_failed(); /* do not return */
        }
        v21 = v58 + 48;
        v19 = &v24->field_28;
        v59 = *((vvar_6{reg 48} + 40) as &i64);
        *((vvar_6{reg 48} + 56) as &u64) = v59;
        if v19 == *((vvar_503{reg 48} + 240) as &i64) {
            v21 = *((vvar_6{reg 48} + 240) as &i64);
            *((vvar_6{reg 48} + 56) as &u64) = v59;
            goto LABEL_4ddebd;
        }
    }
    *((vvar_147{reg 48} + 136) as &i64) = *((vvar_147{reg 48} + 48) as &i64);
    *((vvar_147{reg 48} + 176) as &i64) = *((vvar_147{reg 48} + 40) as &i64);
    v60 = *((vvar_147{reg 48} + 224) as &i64);
    (&v60->field_0)[1] = v42;
    v60->field_0 = 3;
    *(&v38->field_200 as &i32) = vvar_1001 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4de3f2;
    }
    if !vvar_1001 - 1 {
        goto LABEL_0x4de3fc;
    }
}
