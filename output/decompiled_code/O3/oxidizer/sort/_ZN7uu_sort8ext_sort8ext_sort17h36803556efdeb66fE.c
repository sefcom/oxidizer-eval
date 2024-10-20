fn uu_sort::ext_sort::ext_sort() -> u32 {
    let v0: i8;  // [bp-0x30]
    let v2: u64;  // rcx
    let v3: u64;  // rdx
    let v4: u64;  // rax
    let v5: u64;  // rbx
    let v6: u64;  // rax
    let v7: u64;  // r13
    let v8: &struct_6;  // rsi
    let v9: u128;  // xmm0
    let v10: u256;  // ymm0
    let v12: u32;  // r15d
    let v13: u64;  // rdi
    let v14: u256;  // ymm0
    let v15: u32;  // r12d
    let v16: u64;  // r15
    let v17: u64;  // rax
    let v18: u128;  // xmm0
    let v19: &struct_1;  // r14
    let v20: u128;  // xmm0
    let v21: u128;  // xmm0
    let v22: u128;  // xmm0
    let v23: u128;  // xmm0
    let v24: u128;  // xmm0
    let v25: u64;  // rax
    let v26: u128;  // xmm0
    let v27: u64;  // rax
    let v28: u256;  // ymm0
    let v30: u64;  // r14
    let v31: &u64;  // r12
    let v33: &u64;  // rax

    vvar_721{reg 48} = (&v0 & -128) - 0x600;
    *((vvar_721{reg 48} + 392) as &u64) = v2;
    *((vvar_721{reg 48} + 72) as &u64) = v3;
    vvar_730{reg 48} = vvar_721{reg 48} - 8;
    *((vvar_721{reg 48} - 8) as &&u8) = &g_521aed;
    std::sync::mpmc::array::Channel<T>::with_capacity(vvar_721{reg 48} + 0x200, 1, v3, v2);
    *((vvar_730{reg 48} + 0x400) as &i64) = 1;
    *((vvar_730{reg 48} + 1032) as &i64) = 1;
    *((vvar_730{reg 48} + 1040) as &i8) = 0;
    vvar_736{reg 48} = vvar_730{reg 48} - 8;
    *((vvar_730{reg 48} - 8) as &&u8) = &g_521b28;
    v4 = __rust_alloc(640, 128);
    v5 = v4;
    vvar_745{reg 48} = vvar_736{reg 48} - 8;
    *((vvar_736{reg 48} - 8) as &&u8) = &g_521b4a;
    memcpy(v4, vvar_736{reg 48} + 0x200, 640);
    *((vvar_745{reg 48} + 1184) as &i64) = 0;
    *((vvar_745{reg 48} + 1192) as &u64) = v5;
    *((vvar_745{reg 48} + 376) as &i64) = 0;
    *((vvar_745{reg 48} + 384) as &u64) = v5;
    vvar_753{reg 48} = vvar_745{reg 48} - 8;
    *((vvar_745{reg 48} - 8) as &&u8) = &g_521b84;
    std::sync::mpmc::array::Channel<T>::with_capacity(vvar_745{reg 48} + 0x200, 1, v3, v2);
    *((vvar_753{reg 48} + 0x400) as &i64) = 1;
    *((vvar_753{reg 48} + 1032) as &i64) = 1;
    *((vvar_753{reg 48} + 1040) as &i8) = 0;
    vvar_758{reg 48} = vvar_753{reg 48} - 8;
    *((vvar_753{reg 48} - 8) as &&u8) = &g_521bb8;
    v6 = __rust_alloc(640, 128);
    v7 = v6;
    vvar_767{reg 48} = vvar_758{reg 48} - 8;
    *((vvar_758{reg 48} - 8) as &&u8) = &g_521bda;
    memcpy(v6, vvar_758{reg 48} + 0x200, 640);
    *((vvar_767{reg 48} + 1168) as &i64) = 0;
    *((vvar_767{reg 48} + 1176) as &u64) = v7;
    *((vvar_767{reg 48} + 1200) as &i64) = 0;
    *((vvar_767{reg 48} + 1208) as &u64) = v7;
    if !*((&v8->field_7c as &char + 7) as &i8) {
        v12 = 0;
    } else {
        v9 = *(&v8->field_84 as &i128);
        *((vvar_767{reg 48} + 96) as &u128) = v9;
        v12 = -21;
    }
    *((vvar_767{reg 48} + 248) as &u64) = v13;
    *((vvar_767{reg 48} + 488) as &i8) = *((&v8->field_88 as &char + 8) as &i8);
    vvar_392{reg 224} = (((((vvar_777{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_776{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=(vvar_388{reg 64} + 0x7c<64>), size=8, endness=Iend_LE)))
    STORE(addr=(vvar_767{reg 48} + 0x4c0<64>), data=Conv(256->128, vvar_392{reg 224}), size=16, endness=Iend_LE, guard=None)
    *((vvar_767{reg 48} + 63) as &i8) = *((&v8->field_7c as &char + 4) as &i8);
    *((vvar_767{reg 48} + 94) as &i8) = *((&v8->field_7c as &char + 5) as &i8);
    *((vvar_767{reg 48} + 93) as &i8) = *((&v8->field_7c as &char + 6) as &i8);
    vvar_795{reg 48} = vvar_767{reg 48} - 8;
    *((vvar_767{reg 48} - 8) as &&u8) = &g_521c7a;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(vvar_767{reg 48} + 400, v8);
    *((vvar_795{reg 48} + 508) as &u32) = v12;
    v15 = v8->field_78;
    vvar_387{reg 48} = vvar_795{reg 48} - 8;
    *((vvar_795{reg 48} - 8) as &&u8) = &g_521c98;
    <alloc::string::String as core::clone::Clone>::clone(vvar_795{reg 48} + 0x100, &v8->padding_0[24] as &struct_6);
    *((vvar_387{reg 48} + 48) as &i8) = *((&v8->field_88 as &char + 9) as &i8);
    *((vvar_387{reg 48} + 64) as &u64) = v8->field_68;
    v16 = v8->field_30;
    v17 = 0x8000000000000000;
    *((vvar_387{reg 48} + 80) as &&struct_6) = v8;
    if v16 != 0x8000000000000000 {
        vvar_387{reg 48} = vvar_387{reg 48} - 8;
        *((vvar_387{reg 48} - 8) as &&u8) = &g_521cda;
        <alloc::string::String as core::clone::Clone>::clone(vvar_800{reg 48} + 0x200, &v8->field_30 as &struct_6);
        v17 = *((vvar_387{reg 48} + 0x200) as &i64);
        v18 = *((vvar_387{reg 48} + 520) as &i128);
        vvar_392{reg 224} = ((vvar_392{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_815{reg 224}))
        *((vvar_387{reg 48} + 448) as &u128) = v18;
        v19 = *((vvar_387{reg 48} + 80) as &i64);
    }
    v20 = *((vvar_387{reg 48} + 400) as &i128);
    *((vvar_387{reg 48} + 128) as &u128) = v20;
    *((vvar_387{reg 48} + 144) as &i64) = *((vvar_387{reg 48} + 416) as &i64);
    *((vvar_387{reg 48} + 168) as &i64) = *((vvar_387{reg 48} + 272) as &i64);
    v21 = *((vvar_387{reg 48} + 96) as &i128);
    *((vvar_387{reg 48} + 680) as &u128) = v21;
    v22 = *((vvar_387{reg 48} + 448) as &i128);
    *((vvar_387{reg 48} + 600) as &u128) = v22;
    *((vvar_387{reg 48} + 0x200) as &i64) = 0;
    *((vvar_387{reg 48} + 520) as &u64) = v7;
    v23 = *((vvar_387{reg 48} + 0x100) as &i128);
    *((vvar_387{reg 48} + 152) as &u128) = v23;
    *((vvar_387{reg 48} + 528) as &i64) = 0;
    *((vvar_387{reg 48} + 536) as &u64) = v5;
    *((vvar_387{reg 48} + 576) as &i64) = *((vvar_387{reg 48} + 160) as &i64);
    *((vvar_387{reg 48} + 584) as &i64) = *((vvar_387{reg 48} + 168) as &i64);
    *((vvar_387{reg 48} + 560) as &i64) = *((vvar_387{reg 48} + 144) as &i64);
    *((vvar_387{reg 48} + 568) as &i64) = *((vvar_387{reg 48} + 152) as &i64);
    v24 = *((vvar_387{reg 48} + 128) as &i128);
    *((vvar_387{reg 48} + 544) as &u128) = v24;
    *((vvar_387{reg 48} + 592) as &u64) = v17;
    v25 = *((&v19->field_48 as &char + 8) as &i64);
    v26 = *(&(&v19->padding_0)[1] as &i128);
    *((vvar_387{reg 48} + 616) as &u128) = v26;
    *((vvar_387{reg 48} + 632) as &u64) = v25;
    *((vvar_387{reg 48} + 640) as &i8) = v19->field_58;
    v27 = *(&v19->padding_61[7] as &i64);
    *((vvar_387{reg 48} + 648) as &i64) = *((vvar_387{reg 48} + 64) as &i64);
    *((vvar_387{reg 48} + 656) as &u64) = v27;
    *((vvar_387{reg 48} + 664) as &u32) = v15;
    vvar_841{reg 224} = ((((((((((((((vvar_392{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_818{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_822{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_824{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_826{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_832{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_835{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=(vvar_387{reg 48} + 0x4c0<64>), size=16, endness=Iend_LE)))
    *((vvar_387{reg 48} + 668) as &u64) = v28;
    *((vvar_387{reg 48} + 676) as &i8) = *((vvar_387{reg 48} + 63) as &i8);
    *((vvar_387{reg 48} + 677) as &i8) = *((vvar_387{reg 48} + 94) as &i8);
    *((vvar_387{reg 48} + 678) as &i8) = *((vvar_387{reg 48} + 93) as &i8);
    *((vvar_387{reg 48} + 679) as &i8) = *((vvar_387{reg 48} + 508) as &i32);
    *((vvar_387{reg 48} + 696) as &i8) = *((vvar_387{reg 48} + 488) as &i8);
    *((vvar_387{reg 48} + 697) as &i8) = *((vvar_387{reg 48} + 48) as &i8);
    v30 = 0x8000000000000000;
    *((vvar_387{reg 48} + 144) as &i64) = 0x8000000000000000;
    *((vvar_387{reg 48} + 128) as &i64) = 0;
    vvar_852{reg 48} = vvar_387{reg 48} - 8;
    *((vvar_387{reg 48} - 8) as &&u8) = &g_521eb2;
    std::thread::Builder::spawn_unchecked(vvar_387{reg 48} + 0x100, vvar_387{reg 48} + 128, vvar_387{reg 48} + 0x200);
    v31 = *((vvar_852{reg 48} + 248) as &i64);
    if !*((vvar_852{reg 48} + 0x100) as &i64) {
        *((vvar_852{reg 48} + 128) as &i64) = *((vvar_852{reg 48} + 264) as &i64);
        *((vvar_852{reg 48} - 8) as &&u8) = &g_523b7c;
        core::result::unwrap_failed(); /* do not return */
    }
    *((vvar_852{reg 48} + 144) as &i64) = *((vvar_852{reg 48} + 272) as &i64);
    *((vvar_852{reg 48} + 128) as &i128) = *((vvar_852{reg 48} + 0x100) as &i128);
    vvar_862{reg 48} = vvar_852{reg 48} - 8;
    *((vvar_852{reg 48} - 8) as &&u8) = &g_521ef7;
    v33 = *((vvar_862{reg 48} + 128) as &i64);
    *(v33 as &i32) = vvar_2043 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x521eff;
    }
    if !vvar_2043 - 1 {
        goto LABEL_0x521f05;
    }
}
