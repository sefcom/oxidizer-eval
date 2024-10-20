fn uu_sort::merge::merge_without_limit(a0: u32, a1: &u64, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v2: u128;  // xmm0
    let v3: u64;  // rax
    let v4: u64;  // rcx
    let v5: u128;  // xmm0
    let v6: u128;  // xmm1
    let v7: u256;  // ymm1
    let v8: u256;  // ymm1
    let v9: u128;  // xmm2
    let v10: u256;  // ymm2
    let v11: u256;  // ymm2
    let v12: u128;  // xmm3
    let v13: u256;  // ymm3
    let v14: u256;  // ymm3
    let v15: u128;  // xmm0
    let v16: u128;  // xmm0
    let v17: u256;  // ymm0
    let v18: u256;  // ymm0
    let v19: &struct_4;  // r13
    let v20: u64;  // r12
    let v21: void*;  // r14
    let v22: u64;  // rdx
    let v23: &struct_1;  // rcx
    let v24: u128;  // xmm0
    let v25: u128;  // xmm1
    let v26: u128;  // xmm2
    let v27: u128;  // xmm3
    let v28: u64;  // r14
    let v29: &struct_4;  // r13
    let v30: &struct_1;  // rcx
    let v31: u128;  // xmm0
    let v32: u128;  // xmm1
    let v33: u128;  // xmm2
    let v34: u128;  // xmm3
    let v35: &struct_3;  // rax
    let v36: &struct_3;  // r13
    let v37: &u64;  // r15
    let v38: &u64;  // rax
    let v39: &u64;  // rcx
    let v40: u128;  // xmm0
    let v41: &struct_7;  // rdx
    let v42: &struct_0;  // rcx
    let v43: u128;  // xmm1
    let v44: u128;  // xmm2
    let v45: u128;  // xmm3
    let v46: &u128;  // r12
    let v47: &u128;  // rax
    let v48: &u128;  // rcx
    let v49: u128;  // xmm0
    let v50: u128;  // xmm0
    let v51: u128;  // xmm0
    let v52: u128;  // xmm0
    let v53: u128;  // xmm1
    let v54: u128;  // xmm2
    let v55: u128;  // xmm3
    let v56: u64;  // rcx
    let v57: &struct_6;  // rax
    let v58: u128;  // xmm0
    let v59: u128;  // xmm1
    let v60: u128;  // xmm2
    let v63: u64;  // rbx
    let v68: void*;  // r12
    let v69: &struct_5;  // rcx
    let v70: u64;  // rsi
    let v71: u128;  // xmm0
    let v72: u128;  // xmm1
    let v73: u128;  // xmm2
    let v74: u128;  // xmm0
    let v75: u128;  // xmm0
    let v76: u256;  // ymm0
    let v77: u64;  // rcx
    let v78: &u128;  // rax
    let v79: u64;  // rdx
    let v80: u64;  // rsi
    let v81: u64;  // rbx
    let v82: u256;  // ymm1
    let v83: u128;  // xmm0
    let v84: u64;  // r13
    let v85: u64;  // rax
    let v86: &struct_2;  // rax
    let v87: u64;  // rax
    let v88: &u64;  // r13
    let v89: u128;  // xmm0
    let v90: u128;  // xmm0
    let v91: u64;  // r13
    let v92: &u128;  // rax
    let v93: &u128;  // rcx
    let v94: u128;  // xmm0
    let v95: u128;  // xmm1
    let v97: u64;  // rsi
    let v100: u64;  // rsi
    let v101: u64;  // rdx
    let v103: u128;  // xmm0
    let v104: &struct_8;  // rcx
    let v105: u128;  // xmm0
    let v106: u64;  // rax

    vvar_260{reg 48} = (&v0 & -128) - 1408;
    *((vvar_260{reg 48} + 304) as &u64) = a2;
    *((vvar_260{reg 48} + 312) as &u64) = a0;
    vvar_7{reg 48} = vvar_260{reg 48} - 8;
    *((vvar_260{reg 48} - 8) as &&u8) = &g_4dfcc8;
    std::sync::mpmc::channel(vvar_260{reg 48} + 0x200);
    v2 = *((vvar_7{reg 48} + 0x200) as &i128);
    v3 = *((vvar_7{reg 48} + 528) as &i64);
    v4 = *((vvar_7{reg 48} + 536) as &i64);
    *((vvar_7{reg 48} + 160) as &u128) = v2;
    *((vvar_7{reg 48} + 328) as &u64) = v3;
    *((vvar_7{reg 48} + 288) as &u64) = v3;
    *((vvar_7{reg 48} + 320) as &u64) = v4;
    *((vvar_7{reg 48} + 296) as &u64) = v4;
    *((vvar_7{reg 48} + 88) as &i64) = 0;
    *((vvar_7{reg 48} + 96) as &i64) = 8;
    *((vvar_7{reg 48} + 104) as &i64) = 0;
    *((vvar_7{reg 48} + 112) as &i64) = 0;
    *((vvar_7{reg 48} + 120) as &i64) = 8;
    *((vvar_7{reg 48} + 128) as &i64) = 0;
    v5 = *(&a1 as &i128);
    v6 = *(&a1[2] as &i128);
    vvar_18{reg 256} = ((vvar_274{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_273{reg 256}))
    v9 = *(&a1[4] as &i128);
    vvar_19{reg 288} = ((vvar_277{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_276{reg 288}))
    v12 = *(&a1[6] as &i128);
    vvar_20{reg 320} = ((vvar_280{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_279{reg 320}))
    *((vvar_7{reg 48} + 176) as &u128) = v5;
    v15 = *(&a1[10] as &i128);
    *((vvar_7{reg 48} + 0x100) as &u128) = v15;
    v16 = *(&a1[8] as &i128);
    vvar_16{reg 224} = ((((((((vvar_267{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_266{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_271{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_282{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_284{reg 224}))
    *((vvar_7{reg 48} + 240) as &u128) = v16;
    *((vvar_7{reg 48} + 224) as &u128) = v12;
    *((vvar_7{reg 48} + 208) as &u128) = v9;
    *((vvar_7{reg 48} + 192) as &u128) = v6;
    v19 = vvar_7{reg 48} + 520;
    v20 = *((vvar_7{reg 48} + 176) as &i64);
    *((vvar_7{reg 48} + 344) as &i64) = *((vvar_7{reg 48} + 0x100) as &i64);
    *((vvar_7{reg 48} + 336) as &i64) = *((vvar_7{reg 48} + 264) as &i64);
    v21 = 0;
    *((vvar_7{reg 48} + 136) as &i64) = 0x8000000000000000;
    if v20 == 9223372036854775809 {
        goto LABEL_4e0010;
    }
LABEL_4dffd7:
    v23 = vvar_7{reg 48} + 184;
    v19->padding_38[0] = v23->field_40;
    v24 = v23->field_0;
    vvar_16{reg 224} = ((vvar_16{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_297{reg 224}))
    v25 = v23->field_10;
    vvar_18{reg 256} = ((vvar_18{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_299{reg 256}))
    v26 = v23->field_20;
    vvar_19{reg 288} = ((vvar_19{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_301{reg 288}))
    v27 = v23->field_30;
    vvar_20{reg 320} = ((vvar_20{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_303{reg 320}))
    v19->field_28 = v27;
    v19->field_20 = v26;
    v19->field_10 = v25;
    v19->field_0 = v24;
    loop {
        v30 = vvar_43{reg 48} + 1272;
        *(&v30->field_40 as &[u8; 8]) = v29->padding_38;
        v31 = v29->field_0;
        v32 = v29->field_10;
        v33 = v29->field_20;
        v34 = v29->field_28;
        v30->field_30 = v34;
        v30->field_20 = v33;
        v30->field_10 = v32;
        v30->field_0 = v31;
        *((vvar_43{reg 48} + 1264) as &u64) = v20;
        vvar_317{reg 48} = vvar_43{reg 48} - 8;
        *((vvar_43{reg 48} - 8) as &&u8) = &g_4e008b;
        std::sync::mpmc::array::Channel<T>::with_capacity(vvar_43{reg 48} + 0x200, 2, v22, v30);
        *((vvar_317{reg 48} + 0x400) as &i64) = 1;
        *((vvar_317{reg 48} + 1032) as &i64) = 1;
        *((vvar_317{reg 48} + 1040) as &i8) = 0;
        vvar_323{reg 48} = vvar_317{reg 48} - 8;
        *((vvar_317{reg 48} - 8) as &&u8) = &g_4e00c5;
        v35 = __rust_alloc(640, 128);
        v36 = v35;
        vvar_86{reg 48} = vvar_323{reg 48} - 8;
        *((vvar_323{reg 48} - 8) as &&u8) = &g_4e00e7;
        memcpy(v35, vvar_323{reg 48} + 0x200, 640);
        *((vvar_86{reg 48} + 144) as &i64) = 0;
        *((vvar_86{reg 48} + 152) as &&struct_3) = v36;
        *((vvar_86{reg 48} + 0x200) as &i64) = 0;
        *((vvar_86{reg 48} + 520) as &&struct_3) = v36;
        v37 = *((vvar_86{reg 48} + 128) as &i64);
        if v37 == *((vvar_332{reg 48} + 112) as &i64) {
            vvar_86{reg 48} = vvar_86{reg 48} - 8;
            *((vvar_86{reg 48} - 8) as &&u8) = &g_4e0128;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_332{reg 48} + 112);
        }
        v38 = *((vvar_86{reg 48} + 120) as &i64);
        v39 = v37 * 16;
        *((v38 + v39) as &i64) = 0;
        *((v38 + v39 + 8) as &&struct_3) = v36;
        *((vvar_86{reg 48} + 128) as &&u64) = v37 as &char + 1;
        v40 = *((vvar_86{reg 48} + 1272) as &i128);
        if v20 == *((vvar_86{reg 48} + 136) as &i64) {
            break;
        }
        v41 = vvar_86{reg 48} + 1272;
        v42 = vvar_86{reg 48} + 520;
        v42->field_50 = v41->field_40;
        v43 = v41->field_10;
        v44 = v41->field_20;
        v45 = v41->field_30;
        v42->field_40 = v45;
        v42->field_30 = v44;
        v42->field_20 = v43;
        *((vvar_86{reg 48} + 0x200) as &i64) = 0;
        *((vvar_86{reg 48} + 520) as &&struct_3) = v36;
        *((vvar_86{reg 48} + 528) as &u64) = v20;
        *((vvar_86{reg 48} + 536) as &u128) = v40;
        *((vvar_86{reg 48} + 608) as &i64) = 0;
        *((vvar_86{reg 48} + 616) as &i64) = 1;
        *((vvar_86{reg 48} + 624) as &i64) = 0;
        v46 = *((vvar_86{reg 48} + 104) as &i64);
        if v46 == *((vvar_86{reg 48} + 88) as &i64) {
            vvar_86{reg 48} = vvar_86{reg 48} - 8;
            *((vvar_86{reg 48} - 8) as &&u8) = &g_4dfe7e;
            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_86{reg 48} + 88);
        }
        v47 = *((vvar_98{reg 48} + 96) as &i64);
        v48 = v46 * 120;
        *((v47 + v48 + 112) as &i64) = *((vvar_98{reg 48} + 624) as &i64);
        v49 = *((vvar_98{reg 48} + 608) as &i128);
        *((v47 + v48 + 96) as &u128) = v49;
        v50 = *((vvar_98{reg 48} + 592) as &i128);
        *((v47 + v48 + 80) as &u128) = v50;
        v51 = *((vvar_98{reg 48} + 576) as &i128);
        *((v47 + v48 + 64) as &u128) = v51;
        v52 = *((vvar_98{reg 48} + 0x200) as &i128);
        v53 = *((vvar_98{reg 48} + 528) as &i128);
        vvar_18{reg 256} = ((((((vvar_54{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_309{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_354{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_378{reg 256}))
        v54 = *((vvar_98{reg 48} + 544) as &i128);
        vvar_19{reg 288} = ((((((vvar_55{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_311{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_356{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_380{reg 288}))
        v55 = *((vvar_98{reg 48} + 560) as &i128);
        vvar_20{reg 320} = ((((((vvar_56{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_313{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_358{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_382{reg 320}))
        *((v47 + v48 + 48) as &u128) = v55;
        *((v47 + v48 + 32) as &u128) = v54;
        *((v47 + v48 + 16) as &u128) = v53;
        *((v47 + v48) as &u128) = v52;
        *((vvar_98{reg 48} + 104) as &&u128) = v46 as &char + 1;
        vvar_391{reg 48} = vvar_98{reg 48} - 8;
        *((vvar_98{reg 48} - 8) as &&u8) = &g_4dff06;
        v19 = vvar_391{reg 48} + 520;
        vvar_16{reg 224} = (((((((((((((vvar_52{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_307{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_346{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_370{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_372{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_374{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_376{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
        v19->field_10 = 0;
        *((&v19->field_20 as &char + 8) as &i128) = 0;
        *(&v19->padding_38 as &i128) = 0;
        *((vvar_391{reg 48} + 0x200) as &u64) = v28;
        *((vvar_391{reg 48} + 520) as &i64) = 0;
        *((vvar_391{reg 48} + 528) as &i64) = 8;
        *((vvar_391{reg 48} + 552) as &i64) = 8;
        *((vvar_391{reg 48} + 576) as &i64) = 8;
        *((vvar_391{reg 48} + 600) as &i64) = 8;
        *((vvar_391{reg 48} + 608) as &i64) = 0;
        *((vvar_391{reg 48} + 616) as &i64) = 0x2000;
        *((vvar_391{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
        *((vvar_391{reg 48} + 632) as &i64) = 0x2000;
        vvar_7{reg 48} = vvar_391{reg 48} - 8;
        *((vvar_391{reg 48} - 8) as &&u8) = &g_4dffb6;
        std::sync::mpmc::Sender<T>::send(vvar_391{reg 48} + 352, vvar_391{reg 48} + 160, vvar_391{reg 48} + 0x200, v56);
        if *((vvar_402{reg 48} + 360) as &i64) != *((vvar_402{reg 48} + 136) as &i64) {
            *((vvar_7{reg 48} + 176) as &i64) = 9223372036854775809;
            *((vvar_7{reg 48} + 272) as &u64) = v28 + 1;
            *((vvar_7{reg 48} + 624) as &i128) = *((vvar_7{reg 48} + 464) as &i128);
            *((vvar_7{reg 48} + 608) as &i128) = *((vvar_7{reg 48} + 448) as &i128);
            *((vvar_7{reg 48} + 592) as &i128) = *((vvar_7{reg 48} + 432) as &i128);
            *((vvar_7{reg 48} + 576) as &i128) = *((vvar_7{reg 48} + 416) as &i128);
            v58 = *((vvar_7{reg 48} + 352) as &i128);
            v59 = *((vvar_7{reg 48} + 368) as &i128);
            v60 = *((vvar_7{reg 48} + 384) as &i128);
            *((vvar_7{reg 48} + 560) as &i128) = *((vvar_7{reg 48} + 400) as &i128);
            *((vvar_7{reg 48} + 544) as &u128) = v60;
            *((vvar_7{reg 48} + 528) as &u128) = v59;
            *((vvar_7{reg 48} + 0x200) as &u128) = v58;
            *((vvar_7{reg 48} - 8) as &&u8) = &g_4e095a;
            core::result::unwrap_failed(); /* do not return */
        }
        v21 = v28 + 1;
        v20 = 9223372036854775809;
        if false {
            goto LABEL_4dffd7;
        }
LABEL_4e0010:
        vvar_7{reg 48} = vvar_25{reg 48} - 8;
        *((vvar_25{reg 48} - 8) as &&u8) = &g_4e002d;
        itertools::groupbylazy::IntoChunks<I>::step();
        v20 = *((vvar_7{reg 48} + 0x200) as &i64);
        if v20 == 9223372036854775809 {
            *((vvar_7{reg 48} + 176) as &i64) = 9223372036854775809;
            *((vvar_7{reg 48} + 272) as &void*) = v21;
            vvar_61{reg 48} = vvar_7{reg 48} - 8;
            *((vvar_7{reg 48} - 8) as &&u8) = &g_4e028b;
            v63 = *((vvar_61{reg 48} + 104) as &i64);
            if v63 {
                v68 = 0;
                do {
                    vvar_522{reg 48} = vvar_76{reg 48} - 8;
                    *((vvar_76{reg 48} - 8) as &&u8) = &g_4e02d0;
                    v69 = vvar_522{reg 48} + 520;
                    v18 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v69->field_10 = 0;
                    *(&(&v69->padding_20)[1] as &i128) = 0;
                    *(&v69->padding_38 as &i128) = 0;
                    *((vvar_522{reg 48} + 0x200) as &void*) = v68;
                    *((vvar_522{reg 48} + 520) as &i64) = 0;
                    *((vvar_522{reg 48} + 528) as &i64) = 8;
                    *((vvar_522{reg 48} + 552) as &i64) = 8;
                    *((vvar_522{reg 48} + 576) as &i64) = 8;
                    *((vvar_522{reg 48} + 600) as &i64) = 8;
                    *((vvar_522{reg 48} + 608) as &i64) = 0;
                    *((vvar_522{reg 48} + 616) as &i64) = 0x2000;
                    *((vvar_522{reg 48} + 624) as &long long) = __rust_alloc_zeroed(0x2000, 1);
                    *((vvar_522{reg 48} + 632) as &i64) = 0x2000;
                    vvar_61{reg 48} = vvar_522{reg 48} - 8;
                    *((vvar_522{reg 48} - 8) as &&u8) = &g_4e036e;
                    std::sync::mpmc::Sender<T>::send(vvar_438{reg 48} + 352, vvar_438{reg 48} + 160, vvar_438{reg 48} + 0x200, v69);
                    if *((vvar_533{reg 48} + 360) as &i64) != *((vvar_533{reg 48} + 136) as &i64) {
                        *((vvar_61{reg 48} + 624) as &i128) = *((vvar_61{reg 48} + 464) as &i128);
                        *((vvar_61{reg 48} + 608) as &i128) = *((vvar_61{reg 48} + 448) as &i128);
                        *((vvar_61{reg 48} + 592) as &i128) = *((vvar_61{reg 48} + 432) as &i128);
                        *((vvar_61{reg 48} + 576) as &i128) = *((vvar_61{reg 48} + 416) as &i128);
                        v71 = *((vvar_61{reg 48} + 352) as &i128);
                        v72 = *((vvar_61{reg 48} + 368) as &i128);
                        v73 = *((vvar_61{reg 48} + 384) as &i128);
                        *((vvar_61{reg 48} + 560) as &i128) = *((vvar_61{reg 48} + 400) as &i128);
                        *((vvar_61{reg 48} + 544) as &u128) = v73;
                        *((vvar_61{reg 48} + 528) as &u128) = v72;
                        *((vvar_61{reg 48} + 0x200) as &u128) = v71;
                        *((vvar_61{reg 48} - 8) as &&u8) = &g_4e0a12;
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v68 += 1;
                } while (v63 != v68);
            }
            v70 = *((vvar_61{reg 48} + 304) as &i64);
            vvar_557{reg 48} = vvar_61{reg 48} - 8;
            *((vvar_61{reg 48} - 8) as &&u8) = &g_4e03a8;
            <uu_sort::GlobalSettings as core::clone::Clone>::clone(vvar_61{reg 48} + 352, v70);
            *((vvar_557{reg 48} + 0x200) as &i64) = *((vvar_557{reg 48} + 328) as &i64);
            *((vvar_557{reg 48} + 520) as &i64) = *((vvar_557{reg 48} + 320) as &i64);
            v74 = *((vvar_557{reg 48} + 88) as &i128);
            *((vvar_557{reg 48} + 528) as &u128) = v74;
            *((vvar_557{reg 48} + 544) as &i64) = *((vvar_557{reg 48} + 104) as &i64);
            vvar_601{reg 48} = vvar_557{reg 48} - 8;
            *((vvar_557{reg 48} - 8) as &&u8) = &g_4e03fd;
            memcpy(vvar_557{reg 48} + 552, vvar_557{reg 48} + 352, 160);
            *((vvar_601{reg 48} + 368) as &i64) = *((vvar_601{reg 48} + 136) as &i64);
            *((vvar_601{reg 48} + 352) as &i64) = 0;
            vvar_103{reg 48} = vvar_601{reg 48} - 8;
            *((vvar_601{reg 48} - 8) as &&u8) = &g_4e0439;
            std::thread::Builder::spawn_unchecked(vvar_601{reg 48} + 176, vvar_601{reg 48} + 352, vvar_601{reg 48} + 0x200);
            if !*((vvar_612{reg 48} + 176) as &i64) {
                *((vvar_103{reg 48} + 352) as &i64) = *((vvar_103{reg 48} + 184) as &i64);
                *((vvar_103{reg 48} - 8) as &&u8) = &g_4e0a5a;
                core::result::unwrap_failed(); /* do not return */
            }
            *((vvar_103{reg 48} + 0x500) as &i64) = *((vvar_103{reg 48} + 192) as &i64);
            v75 = *((vvar_103{reg 48} + 176) as &i128);
            vvar_126{reg 224} = ((((vvar_70{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_595{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_628{reg 224}))
            *((vvar_103{reg 48} + 1264) as &u128) = v75;
            *((vvar_103{reg 48} + 176) as &i64) = 0;
            *((vvar_103{reg 48} + 184) as &i64) = 8;
            *((vvar_103{reg 48} + 192) as &i64) = 0;
            v77 = *((vvar_103{reg 48} + 112) as &i64);
            v78 = *((vvar_103{reg 48} + 120) as &i64);
            v79 = *((vvar_103{reg 48} + 128) as &i64);
            v80 = &v78[v79];
            *((vvar_103{reg 48} + 352) as &&u128) = v78;
            *((vvar_103{reg 48} + 360) as &&u128) = v78;
            *((vvar_103{reg 48} + 368) as &u64) = v77;
            *((vvar_103{reg 48} + 376) as &u64) = v80;
            *((vvar_103{reg 48} + 384) as &i64) = 0;
            if v79 {
                v81 = vvar_103{reg 48} + 152;
                do {
                    *((vvar_120{reg 48} + 360) as &&u128) = v78 + 1;
                    v83 = *(v78);
                    vvar_665{reg 224} = ((vvar_126{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_664{reg 224}))
                    v84 = *((vvar_120{reg 48} + 384) as &i64);
                    *((vvar_120{reg 48} + 384) as &u64) = v84 + 1;
                    *((vvar_120{reg 48} + 144) as &u128) = v83;
                    vvar_669{reg 48} = vvar_120{reg 48} - 8;
                    *((vvar_120{reg 48} - 8) as &&u8) = &g_4e058d;
                    v85 = std::sync::mpmc::Receiver<T>::recv(vvar_612{reg 48} + 144, v80, v79);
                    if v85 {
                        *((vvar_669{reg 48} + 0x200) as &i64) = 1;
                        *((vvar_669{reg 48} + 520) as &i64) = 1;
                        *((vvar_669{reg 48} + 528) as &u64) = v85;
                        vvar_186{reg 48} = vvar_669{reg 48} - 8;
                        *((vvar_669{reg 48} - 8) as &&u8) = &g_4e05d0;
                        v86 = __rust_alloc(24, 8);
                        v86->field_10 = *((vvar_186{reg 48} + 528) as &i64);
                        v89 = *((vvar_186{reg 48} + 0x200) as &i128);
                        v86->field_0 = v89;
                        v90 = *((vvar_186{reg 48} + 144) as &i128);
                        *((vvar_186{reg 48} + 528) as &&struct_2) = v86;
                        *((vvar_186{reg 48} + 536) as &i64) = 0;
                        *((vvar_186{reg 48} + 0x200) as &u128) = v90;
                        *((vvar_186{reg 48} + 544) as &u64) = v84;
                        v91 = *((vvar_186{reg 48} + 192) as &i64);
                        if v91 == *((vvar_678{reg 48} + 176) as &i64) {
                            vvar_186{reg 48} = vvar_186{reg 48} - 8;
                            *((vvar_186{reg 48} - 8) as &&u8) = &g_4e063a;
                            alloc::raw_vec::RawVec<T,A>::grow_one(vvar_612{reg 48} + 176);
                        }
                        v92 = *((vvar_186{reg 48} + 184) as &i64);
                        v93 = 5 * v91;
                        v94 = *((vvar_186{reg 48} + 0x200) as &i128);
                        vvar_730{reg 224} = ((((((vvar_665{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_696{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_698{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_729{reg 224}))
                        v95 = *((vvar_186{reg 48} + 528) as &i128);
                        vvar_732{reg 256} = ((vvar_128{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_731{reg 256}))
                        v79 = *((vvar_186{reg 48} + 544) as &i64);
                        *(32 + v92 + 0x8 * v93 as u64) = v79;
                        *(16 + v92 + 0x8 * v93 as u64) = v95;
                        *(v92 + 0x8 * v93 as u64) = v94;
                        *((vvar_186{reg 48} + 192) as &u64) = v91 + 1;
                    } else {
                        v87 = *((vvar_669{reg 48} + 144) as &i64);
                        if !v87 {
                            v88 = *((vvar_669{reg 48} + 152) as &i64);
                            *(&v88[65] as &i32) = vvar_901 - 1;
                            if BinaryOp CasCmpNE {
                                goto LABEL_0x4e0667;
                            }
                            if !vvar_901 - 1 {
                                goto LABEL_4e0675;
                            }
                            continue;
LABEL_4e0675:
                            vvar_711{reg 48} = vvar_669{reg 48} - 8;
                            *((vvar_669{reg 48} - 8) as &&u8) = &g_4e067d;
                            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v88);
                            *(&v88[66] as &i8) = 1;
                            if BinaryOp CasCmpNE {
                                goto LABEL_0x4e067f;
                            }
                            if !vvar_902 {
                                continue;
                            }
                            vvar_724{reg 48} = vvar_711{reg 48} - 8;
                            *((vvar_711{reg 48} - 8) as &&u8) = &g_4e0696;
                        } else if v87 != 1 {
                            vvar_708{reg 48} = vvar_669{reg 48} - 8;
                            *((vvar_669{reg 48} - 8) as &&u8) = &g_4e06a3;
                            std::sync::mpmc::counter::Receiver<C>::release(v81);
                            continue;
                        } else {
                            vvar_705{reg 48} = vvar_669{reg 48} - 8;
                            *((vvar_669{reg 48} - 8) as &&u8) = &g_4e065a;
                            std::sync::mpmc::counter::Receiver<C>::release(v81);
                        }
                    }
                } while ((v78 = *((vvar_175{reg 48} + 360) as &i64), v78 != *((vvar_175{reg 48} + 376) as &i64)));
            }
            vvar_147{reg 48} = vvar_103{reg 48} - 8;
            *((vvar_103{reg 48} - 8) as &&u8) = &g_4e06b5;
            v97 = *((vvar_147{reg 48} + 192) as &i64);
            *((vvar_147{reg 48} + 528) as &u64) = v97;
            *((vvar_147{reg 48} + 0x200) as &i128) = *((vvar_147{reg 48} + 176) as &i128);
            *((vvar_147{reg 48} + 536) as &i64) = *((vvar_147{reg 48} + 304) as &i64);
            if v97 {
                loop {
                    vvar_147{reg 48} = vvar_911{reg 48};
                    v100 = (v97 >> 1) - 1;
                    if v100 == -1 {
                        break;
                    }
                    v101 = *((vvar_147{reg 48} + 528) as &i64);
                    vvar_147{reg 48} = vvar_147{reg 48} - 8;
                    *((vvar_147{reg 48} - 8) as &&u8) = &g_4e071a;
                    binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(vvar_747{reg 48} + 0x200, v100, v101);
                }
            }
            v103 = *((vvar_147{reg 48} + 0x200) as &i128);
            v104 = *((vvar_147{reg 48} + 312) as &i64);
            v104->field_20 = *((vvar_147{reg 48} + 528) as &i64);
            v104->field_28 = *((vvar_147{reg 48} + 536) as &i64);
            v104->field_10 = v103;
            v105 = *((vvar_147{reg 48} + 160) as &i128);
            v104->field_30 = *((vvar_147{reg 48} + 1264) as &i128);
            v106 = *((vvar_147{reg 48} + 0x500) as &i64);
            v104->field_40 = v106;
            v104->field_0 = v105;
            v104->field_48 = 0;
            return v106;
        }
    }
    *((vvar_86{reg 48} + 176) as &i64) = 9223372036854775809;
    *((vvar_86{reg 48} + 272) as &u64) = v28 + 1;
    v57 = *((vvar_86{reg 48} + 312) as &i64);
    (&v57->field_0)[1] = v40;
    v57->field_0 = 3;
    *(&v36->field_200 as &i32) = vvar_899 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4e0188;
    }
    if !vvar_899 - 1 {
        goto LABEL_0x4e0192;
    }
}
