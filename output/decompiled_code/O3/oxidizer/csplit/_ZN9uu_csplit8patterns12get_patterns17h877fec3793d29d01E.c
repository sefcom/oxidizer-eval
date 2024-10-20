fn uu_csplit::patterns::get_patterns(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x24c]
    let v9: i64;  // [sp-0x208]
    let v10: i64;  // [sp-0x200]
    let v11: i8;  // [bp-0x1f8]
    let v12: i8;  // [bp-0x1f0]
    let v13: i8;  // [bp-0x1e8]
    let v14: i64;  // [sp-0x1e0]
    let v18: i128;  // [bp-0x1a8]
    let v19: i64;  // [sp-0x198]
    let v25: i64;  // [sp-0x130]
    let v32: i128;  // [bp-0xd8]
    let v33: i128;  // [sp-0xc8]
    let v34: i64;  // [sp-0xb0]
    let v35: i128;  // [sp-0xa8]
    let v36: i128;  // [sp-0x98]
    let v42: i64;  // r14
    let v43: i64;  // rax
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i128;  // xmm0
    let v48: i256;  // ymm0
    let v49: i256;  // ymm0
    let v50: i128;  // xmm1
    let v51: i256;  // ymm1
    let v52: i256;  // ymm1

    v42 = a1;
    if !a2 {
        v43 = 8;
    } else {
        v43 = __rust_alloc(a2 * 56, 8);
    }
    v9 = v43;
    v10 = 0;
    if !v11 {
        v19 = v14;
        v18 = v12;
        core::result::unwrap_failed(); /* do not return */
    }
    v45 = v11;
    v46 = v13;
    v36 = v46;
    v35 = v45;
    v0 = regex::regex::string::Regex::new(&v11, &g_4673ef, 56) | -0x100 | 1;
    regex::regex::string::Regex::new(&v11, &g_467444, 23);
    if !v11 {
        v19 = v14;
        v18 = (&v11)[8];
        core::result::unwrap_failed(); /* do not return */
    }
    v47 = v11;
    vvar_571{reg 224} = ((((vvar_544{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_543{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_570{reg 224}))
    v50 = v13;
    vvar_573{reg 256} = ((((vvar_547{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_546{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_572{reg 256}))
    v33 = v50;
    v32 = v47;
    v25 = 0;
    v34 = a1 + a2 * 24;
    if !v25 {
        goto LABEL_0x53c240;
    } else {
        goto LABEL_0x53c090;
    }
}
