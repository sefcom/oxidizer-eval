fn uu_sort::check::check(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v2: u8;  // r14b
    let v3: &u64;  // r15
    let v4: u64;  // rdx
    let v5: u64;  // rcx
    let v6: u64;  // rax
    let v7: u64;  // rbx
    let v8: u64;  // rdx
    let v9: u64;  // rax
    let v10: u64;  // r14
    let v11: u128;  // xmm0
    let v12: u256;  // ymm0
    let v14: u32;  // r15d
    let v15: u256;  // ymm0
    let v16: u64;  // r15
    let v17: u64;  // rax
    let v18: u128;  // xmm0
    let v19: u128;  // xmm0
    let v20: u128;  // xmm0
    let v21: u128;  // xmm0
    let v22: u128;  // xmm0
    let v23: u128;  // xmm0
    let v24: u64;  // rax
    let v25: u128;  // xmm0
    let v26: u64;  // rax
    let v27: &u64;  // rax

    vvar_282{reg 48} = (&v0 & -128) - 0x500;
    v2 = (&a2->field_78)[1];
    vvar_290{reg 48} = vvar_282{reg 48} - 8;
    *((vvar_282{reg 48} - 8) as &&u8) = &g_4f220c;
    uu_sort::open(vvar_282{reg 48} + 0x200, a0, a1);
    v3 = *((vvar_290{reg 48} + 520) as &i64);
    v4 = *((vvar_290{reg 48} + 528) as &i64);
    if *((vvar_290{reg 48} + 0x200) as &i64) {
        return v3;
    }
    *((vvar_290{reg 48} + 144) as &u8) = v2;
    *((vvar_290{reg 48} + 272) as &u64) = a1;
    *((vvar_290{reg 48} + 280) as &&u64) = v3;
    *((vvar_290{reg 48} + 288) as &u64) = v4;
    vvar_301{reg 48} = vvar_290{reg 48} - 8;
    *((vvar_290{reg 48} - 8) as &&u8) = &g_4f2260;
    std::sync::mpmc::array::Channel<T>::with_capacity(vvar_290{reg 48} + 0x200, 2, v4, v5);
    *((vvar_301{reg 48} + 0x400) as &i64) = 1;
    *((vvar_301{reg 48} + 1032) as &i64) = 1;
    *((vvar_301{reg 48} + 1040) as &i8) = 0;
    vvar_307{reg 48} = vvar_301{reg 48} - 8;
    *((vvar_301{reg 48} - 8) as &&u8) = &g_4f229b;
    v6 = __rust_alloc(640, 128);
    v7 = v6;
    vvar_316{reg 48} = vvar_307{reg 48} - 8;
    *((vvar_307{reg 48} - 8) as &&u8) = &g_4f22bd;
    memcpy(v6, vvar_307{reg 48} + 0x200, 640);
    *((vvar_316{reg 48} + 160) as &i64) = 0;
    *((vvar_316{reg 48} + 168) as &u64) = v7;
    *((vvar_316{reg 48} + 480) as &i64) = 0;
    *((vvar_316{reg 48} + 488) as &u64) = v7;
    vvar_324{reg 48} = vvar_316{reg 48} - 8;
    *((vvar_316{reg 48} - 8) as &&u8) = &g_4f22f7;
    std::sync::mpmc::array::Channel<T>::with_capacity(vvar_316{reg 48} + 0x200, 2, v8, v5);
    *((vvar_324{reg 48} + 0x400) as &i64) = 1;
    *((vvar_324{reg 48} + 1032) as &i64) = 1;
    *((vvar_324{reg 48} + 1040) as &i8) = 0;
    vvar_329{reg 48} = vvar_324{reg 48} - 8;
    *((vvar_324{reg 48} - 8) as &&u8) = &g_4f232b;
    v9 = __rust_alloc(640, 128);
    v10 = v9;
    vvar_338{reg 48} = vvar_329{reg 48} - 8;
    *((vvar_329{reg 48} - 8) as &&u8) = &g_4f234d;
    memcpy(v9, vvar_329{reg 48} + 0x200, 640);
    *((vvar_338{reg 48} + 496) as &i64) = 0;
    *((vvar_338{reg 48} + 504) as &u64) = v10;
    *((vvar_338{reg 48} + 336) as &i64) = 0;
    *((vvar_338{reg 48} + 344) as &u64) = v10;
    if !*((&(&a2->field_78)[1] as &char + 3) as &i8) {
        v14 = 0;
    } else {
        v11 = *(&a2->field_7c as &i128);
        *((vvar_338{reg 48} + 208) as &u128) = v11;
        v14 = (v3 | -0x100 | 1) as u32;
    }
    *((vvar_338{reg 48} + 152) as &u8) = (&a2->field_87)[5];
    vvar_16{reg 224} = (((((vvar_348{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_347{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=(vvar_13 + 0x7c<64>), size=8, endness=Iend_LE)))
    STORE(addr=(vvar_338{reg 48} + 0xf0<64>), data=Conv(256->128, vvar_16{reg 224}), size=16, endness=Iend_LE, guard=None)
    *((vvar_338{reg 48} + 176) as &i8) = *((&(&a2->field_78)[1] as &char + 1) as &i8);
    *((vvar_338{reg 48} + 127) as &i8) = *((&(&a2->field_78)[1] as &char + 2) as &i8);
    *((vvar_338{reg 48} + 128) as &i32) = 0;
    vvar_365{reg 48} = vvar_338{reg 48} - 8;
    *((vvar_338{reg 48} - 8) as &&u8) = &g_4f23ea;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(vvar_338{reg 48} + 296, a2);
    *((vvar_365{reg 48} + 128) as &u32) = v14;
    *((vvar_365{reg 48} + 264) as &u64) = a0;
    *((vvar_365{reg 48} + 232) as &i32) = a2->field_70;
    vvar_12{reg 48} = vvar_365{reg 48} - 8;
    *((vvar_365{reg 48} - 8) as &&u8) = &g_4f2417;
    <alloc::string::String as core::clone::Clone>::clone(vvar_365{reg 48} + 184, &a2->padding_0[24] as &struct_3);
    *((vvar_12{reg 48} + 143) as &u8) = (&a2->field_87)[6];
    v16 = *(&a2->field_60 as &i64);
    v17 = 0x8000000000000000;
    if a2->field_30 != 0x8000000000000000 {
        vvar_12{reg 48} = vvar_12{reg 48} - 8;
        *((vvar_12{reg 48} - 8) as &&u8) = &g_4f2452;
        <alloc::string::String as core::clone::Clone>::clone(vvar_370{reg 48} + 0x200, &a2->field_30 as &struct_3);
        v17 = *((vvar_12{reg 48} + 0x200) as &i64);
        v18 = *((vvar_12{reg 48} + 520) as &i128);
        vvar_16{reg 224} = ((vvar_16{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_385{reg 224}))
        *((vvar_12{reg 48} + 320) as &u128) = v18;
    }
    v19 = *((vvar_12{reg 48} + 296) as &i128);
    *((vvar_12{reg 48} + 352) as &u128) = v19;
    *((vvar_12{reg 48} + 368) as &i64) = *((vvar_12{reg 48} + 312) as &i64);
    *((vvar_12{reg 48} + 392) as &i64) = *((vvar_12{reg 48} + 200) as &i64);
    v20 = *((vvar_12{reg 48} + 208) as &i128);
    *((vvar_12{reg 48} + 680) as &u128) = v20;
    v21 = *((vvar_12{reg 48} + 320) as &i128);
    *((vvar_12{reg 48} + 600) as &u128) = v21;
    *((vvar_12{reg 48} + 704) as &i64) = *((vvar_12{reg 48} + 280) as &i64);
    *((vvar_12{reg 48} + 712) as &i64) = *((vvar_12{reg 48} + 288) as &i64);
    *((vvar_12{reg 48} + 0x200) as &i64) = 0;
    *((vvar_12{reg 48} + 520) as &u64) = v7;
    v22 = *((vvar_12{reg 48} + 184) as &i128);
    *((vvar_12{reg 48} + 376) as &u128) = v22;
    *((vvar_12{reg 48} + 528) as &i64) = 0;
    *((vvar_12{reg 48} + 536) as &u64) = v10;
    *((vvar_12{reg 48} + 576) as &i64) = *((vvar_12{reg 48} + 384) as &i64);
    *((vvar_12{reg 48} + 584) as &i64) = *((vvar_12{reg 48} + 392) as &i64);
    *((vvar_12{reg 48} + 560) as &i64) = *((vvar_12{reg 48} + 368) as &i64);
    *((vvar_12{reg 48} + 568) as &i64) = *((vvar_12{reg 48} + 376) as &i64);
    v23 = *((vvar_12{reg 48} + 352) as &i128);
    *((vvar_12{reg 48} + 544) as &u128) = v23;
    *((vvar_12{reg 48} + 592) as &u64) = v17;
    v24 = *((&a2->field_48 as &char + 8) as &i64);
    v25 = (&a2->padding_38)[1];
    *((vvar_12{reg 48} + 616) as &u128) = v25;
    *((vvar_12{reg 48} + 632) as &u64) = v24;
    *((vvar_12{reg 48} + 640) as &i8) = a2->field_58;
    v26 = a2->field_68;
    *((vvar_12{reg 48} + 648) as &u64) = v16;
    *((vvar_12{reg 48} + 656) as &u64) = v26;
    *((vvar_12{reg 48} + 664) as &i32) = *((vvar_12{reg 48} + 232) as &i32);
    STORE(addr=(vvar_12{reg 48} + 0x29c<64>), data=Conv(256->64, ((((((((((((((vvar_16{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_388{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_392{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_394{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_398{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_404{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_407{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=(vvar_12{reg 48} + 0xf0<64>), size=16, endness=Iend_LE)))), size=8, endness=Iend_LE, guard=None)
    *((vvar_12{reg 48} + 676) as &i8) = *((vvar_12{reg 48} + 144) as &i8);
    *((vvar_12{reg 48} + 677) as &i8) = *((vvar_12{reg 48} + 176) as &i8);
    *((vvar_12{reg 48} + 678) as &i8) = *((vvar_12{reg 48} + 127) as &i8);
    *((vvar_12{reg 48} + 679) as &i8) = *((vvar_12{reg 48} + 128) as &i32);
    *((vvar_12{reg 48} + 696) as &i8) = *((vvar_12{reg 48} + 152) as &i8);
    *((vvar_12{reg 48} + 697) as &i8) = *((vvar_12{reg 48} + 143) as &i8);
    *((vvar_12{reg 48} + 368) as &i64) = 0x8000000000000000;
    *((vvar_12{reg 48} + 352) as &i64) = 0;
    *((vvar_12{reg 48} + 128) as &i32) = -255;
    vvar_426{reg 48} = vvar_12{reg 48} - 8;
    *((vvar_12{reg 48} - 8) as &&u8) = &g_4f265e;
    std::thread::Builder::spawn_unchecked(vvar_12{reg 48} + 184, vvar_12{reg 48} + 352, vvar_12{reg 48} + 0x200);
    if !*((vvar_426{reg 48} + 184) as &i64) {
        *((vvar_426{reg 48} + 352) as &i64) = *((vvar_426{reg 48} + 192) as &i64);
        *((vvar_426{reg 48} - 8) as &&u8) = &g_4f2f85;
        core::result::unwrap_failed(); /* do not return */
    }
    *((vvar_426{reg 48} + 368) as &i64) = *((vvar_426{reg 48} + 200) as &i64);
    *((vvar_426{reg 48} + 352) as &i128) = *((vvar_426{reg 48} + 184) as &i128);
    vvar_435{reg 48} = vvar_426{reg 48} - 8;
    *((vvar_426{reg 48} - 8) as &&u8) = &g_4f269b;
    v27 = *((vvar_435{reg 48} + 352) as &i64);
    *(v27 as &i32) = vvar_969 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4f26a3;
    }
    if !vvar_969 - 1 {
        goto LABEL_0x4f26a9;
    }
}
