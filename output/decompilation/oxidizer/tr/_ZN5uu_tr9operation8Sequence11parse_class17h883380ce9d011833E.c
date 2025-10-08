fn uu_tr::operation::Sequence::parse_class(a0: u64, a1: u64, a2: u64) -> int {
    let v0: &str;  // [bp-0x1d8]
    let v1: &str;  // [bp-0x1c8]
    let v2: u8;  // [bp-0x1b8]
    let v3: u8;  // [bp-0x1b7]
    let v4: &str;  // [bp-0x1a8]
    let v5: u8;  // [bp-0x198]
    let v6: u8;  // [bp-0x197]
    let v7: &str;  // [bp-0x188]
    let v8: u8;  // [bp-0x178]
    let v9: u8;  // [bp-0x177]
    let v10: &str;  // [bp-0x168]
    let v11: u8;  // [bp-0x158]
    let v12: u8;  // [bp-0x157]
    let v13: &str;  // [bp-0x148]
    let v14: u8;  // [bp-0x138]
    let v15: u8;  // [bp-0x137]
    let v16: &str;  // [bp-0x128]
    let v17: struct48;  // [bp-0x118]
    let v18: u8;  // [bp-0x117]
    let v19: &str;  // [bp-0x108]
    let v20: u8;  // [bp-0xf8]
    let v21: u8;  // [bp-0xf7]
    let v22: &str;  // [bp-0xe8]
    let v23: u8;  // [bp-0xd8]
    let v24: u8;  // [bp-0xd7]
    let v25: &str;  // [bp-0xc8]
    let v26: u8;  // [bp-0xb8]
    let v27: u8;  // [bp-0xb7]
    let v28: u64;  // [bp-0xa8]
    let v29: u64;  // [bp-0xa0]
    let v30: u8;  // [bp-0x98]
    let v31: u8;  // [bp-0x97]
    let v32: &str;  // [bp-0x88]
    let v33: struct33;  // [bp-0x78]
    let v34: u8;  // [bp-0x77]
    let v35: &str;  // [bp-0x68]
    let v36: u8;  // [bp-0x58]
    let v37: u8;  // [bp-0x57]
    let v38: &str;  // [bp-0x48]
    let v39: u32;  // [bp-0x38]
    let v40: u64;  // [bp-0x18]
    let v41: void*;  // [bp-0x10]

    v0 = "[:";
    v1 = ":]";
    v2 = 4;
    v3 = 0;
    v4 = "alnum";
    v5 = 4;
    v6 = 1;
    v7 = "alpha";
    v8 = 4;
    v9 = 2;
    v10 = "blank";
    v11 = 4;
    v12 = 3;
    v13 = "cntrl";
    v14 = 4;
    v15 = 4;
    v16 = "digit";
    v17 = 4;
    v18 = 5;
    v19 = "graph";
    v20 = 4;
    v21 = 6;
    v22 = "lower";
    v23 = 4;
    v24 = 7;
    v25 = "print";
    v26 = 4;
    v27 = 8;
    v28 = &g_41bbaa;
    v29 = 5;
    v30 = 4;
    v31 = 9;
    v32 = "space";
    v33 = 4;
    v34 = 10;
    v35 = "upper";
    v36 = 4;
    v37 = 11;
    v38 = "xdigit";
    v39 = 0;
    v40 = 1;
    v41 = 0;
    <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process(a0, &v0 as u64, a1, a2);
    return;
}
