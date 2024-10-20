fn uu_tac::tac(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v15: i8;  // [bp-0x238]
    let v16: i8;  // [bp-0x230]
    let v17: i8;  // [bp-0x228]
    let v18: i8;  // [bp-0x220]
    let v22: i32;  // [sp-0x1ec]
    let v27: i64;  // [bp-0x1c8]
    let v28: i128;  // [bp-0x1c0]
    let v31: i64;  // [bp-0x1b0]
    let v39: i64;  // [sp-0x110]
    let v40: i64;  // [sp-0x108]
    let v45: i64;  // [sp-0xe0]
    let v51: i64;  // [sp-0xa8]
    let v53: i64;  // [bp-0x98]
    let v54: i128;  // [sp-0x88]
    let v57: i64;  // [sp-0x60]
    let v62: i128;  // xmm0
    let v63: i256;  // ymm0
    let v64: i256;  // ymm0
    let v65: i128;  // xmm1
    let v66: i256;  // ymm1
    let v67: i256;  // ymm1
    let v68: i64;  // rax
    let v190: i128;  // xmm0

    v22 = a2;
    if !a3 {
        v51 = a4;
        v45 = a5;
        v53 = 0;
        if !(!a1) {
            goto LABEL_52b66a;
        }
LABEL_52cbf7:
        return 0;
    }
    regex::regex::bytes::Regex::new(&v15, a4, a5);
    if !v15 {
        v31 = v18;
        v28 = v16;
        v27 = 0x8000000000000000;
        v68 = __rust_alloc(32, 8);
        v190 = v27;
        *((v68 + 16) as &i128) = *((&v28 as &char + 8) as &i128);
        *(v68 as &i128) = v190;
        return v68;
    }
    v51 = a4;
    v45 = a5;
    v62 = v15;
    vvar_37{reg 224} = ((vvar_768{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_767{reg 224}))
    v65 = v17;
    vvar_38{reg 256} = ((vvar_771{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_770{reg 256}))
    v54 = v65;
    v53 = v62;
    if !a1 {
        goto LABEL_52cbf7;
    }
LABEL_52b66a:
    v57 = a1 * 16 + a0;
    v40 = "src/uu/tac/src/tac.rs";
    v39 = "src/uu/tac/src/tac.rs";
}
