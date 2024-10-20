fn uu_du::Stat::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x230]
    let v1: i128;  // [bp-0x228]
    let v2: i32;  // [sp-0x220]
    let v3: i32;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i192;  // [sp-0x208], Other Possible Types: struct24
    let v6: i128;  // [sp-0x1f8]
    let v7: i128;  // [sp-0x1e8]
    let v8: i128;  // [sp-0x1d8]
    let v9: i128;  // [sp-0x1c8]
    let v10: i1408;  // [sp-0x1b8], Other Possible Types: Enum, struct24, struct20, struct12
    let v11: i128;  // [sp-0x108]
    let v12: i128;  // [sp-0xf8]
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i128;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc0]
    let v17: i128;  // [sp-0xb8]
    let v18: i32;  // [sp-0xa8]
    let v19: i128;  // [sp-0xa4]
    let v20: i32;  // [sp-0x94]
    let v21: i128;  // [sp-0x90]
    let v22: i64;  // [sp-0x80]
    let v23: i128;  // [sp-0x78]
    let v24: i64;  // [sp-0x68]
    let v25: i128;  // [sp-0x60]
    let v26: i128;  // [sp-0x50]
    let v27: i128;  // [sp-0x40]
    let v29: i64;  // rdx
    let v30: i64;  // r12
    let v32: i64;  // rcx
    let v33: i64;  // r8
    let v34: i64;  // r9
    let v36: i64;  // rsi
    let v37: i64;  // rax
    let v38: i128;  // xmm0
    let v39: i256;  // ymm4
    let v40: i256;  // ymm4
    let v41: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i256;  // ymm0
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm1
    let v57: i256;  // ymm0
    let v58: i64;  // rcx
    let v59: i64;  // rcx
    let v60: i64;  // rax
    let v61: i256;  // ymm1

    v29 = 0x8000000000000000 ^ *((a3 + 24) as &i64);
    if v29 >= 3 {
        v29 = 1;
    }
    if !v29 {
LABEL_4ac8c4:
        v10 = std::sys::pal::unix::fs::stat(a1, a2);
    } else if v29 != 1 {
LABEL_4ac8da:
        v10 = std::sys::pal::unix::fs::lstat(a1, a2);
    } else {
        v30 = *((a3 + 32) as &i64);
        v10 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
        if !<T as core::slice::cmp::SliceContains>::slice_contains(&v10, v30, *((a3 + 40) as &i64), v32, v33, v34) as i8 {
            goto LABEL_4ac8da;
        }
        goto LABEL_4ac8c4;
    }
    v37 = v10;
    if v37 != 2 {
        v38 = *((&v10 as &char + 16) as &i128);
        v11 = v38;
        v36 = *((&v10 as &char + 32) as &i64);
        vvar_46{reg 352} = ((vvar_189{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-400, size=16, endness=Iend_LE)))
        v30 = *((&v10 as &char + 56) as &i32);
        v41 = *((&v10 as &char + 60) as &i128);
        v1 = v41;
        v3 = *((&v10 as &char + 76) as &i32);
        v47 = *((&v10 as &char + 128) as &i128);
        v5 = v47;
        v48 = *((&v10 as &char + 144) as &i128);
        v6 = v48;
        v49 = *((&v10 as &char + 160) as &i128);
        v7 = v49;
    }
    if v37 == 2 {
        *((a0 + 16) as &i64) = v14;
        *((a0 + 8) as &i64) = 0;
        *(a0 as &i64) = 2;
        return a0;
    }
    v4 = &v5;
    v53 = v11;
    v15 = v53;
    v54 = v1;
    v19 = v54;
    v20 = v3;
    v55 = v5;
    v56 = v6;
    v25 = v55;
    v26 = v56;
    v27 = v7;
    v13 = v37;
    v14 = *((&v10 as &char + 8) as &i64);
    v16 = v36;
    vvar_375{stack -472} = Conv(256->128, vvar_46{reg 352})
    v17 = v8;
    v18 = v30;
    vvar_378{stack -144} = Conv(256->128, ((vvar_196{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-360, size=16, endness=Iend_LE))))
    v0 = *((&v10 as &char + 96) as &i64);
    v22 = v0;
    vvar_381{stack -456} = Conv(256->128, ((vvar_200{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-336, size=16, endness=Iend_LE))))
    v23 = v9;
    v24 = *((&v10 as &char + 120) as &i64);
    v12 = v21;
    v5 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
    vvar_239{reg 224} = ((((((((((((((((((vvar_185{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_184{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_192{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_203{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_205{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_207{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_214{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_216{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_219{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_384{stack -248}))
    v58 = v57;
    if std::path::Path::is_dir(a1, a2) as i8 {
        v58 = 0;
    }
    v10 = std::fs::Metadata::created(&v13);
    if v2 == 0x3b9aca00 {
        goto LABEL_4acb0b;
    } else {
        v1 = v10;
        v10 = std::time::SystemTime::duration_since(&v1, 0, 0);
        if !v10 {
            v59 = *((&v10 as &char + 8) as &i64);
            v60 = 1;
        } else {
LABEL_4acb0b:
            v60 = 0;
        }
    }
    *((a0 + 80) as &i64) = *((&v5 as &char + 16) as &i64);
    *((a0 + 64) as &i128) = v5;
    *((a0 + 8) as &i64) = 0;
    *(a0 as &i64) = 1;
    STORE(addr=(vvar_0 + 0x10<64>), data=Conv(256->64, ((vvar_239{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_375{stack -472}))), size=8, endness=Iend_LE, guard=None)
    *((a0 + 24) as &i64) = 0;
    *((a0 + 32) as &i64) = v16;
    *((a0 + 48) as &i64) = v60;
    *((a0 + 56) as &i64) = v59;
    *((a0 + 88) as &i64) = v58;
    *((a0 + 96) as &i64) = v0;
    *((a0 + 104) as &i64) = 1;
    STORE(addr=(vvar_0 + 0x70<64>), data=Conv(256->64, ((((vvar_222{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_221{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_381{stack -456}))), size=8, endness=Iend_LE, guard=None)
    *((a0 + 120) as &i64) = v24;
    *((a0 + 128) as &u8) = (v18 & 0xf000) == 0x4000;
    return a0;
}
