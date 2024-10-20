fn uu_env::print_env(a0: u8, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x151]
    let v1: i64;  // [sp-0x150]
    let v2: i128;  // [sp-0x148]
    let v3: i64;  // [sp-0x138]
    let v4: i128;  // [sp-0x128]
    let v5: i64;  // [sp-0x118]
    let v6: i128;  // [sp-0x108]
    let v7: i128;  // [sp-0xf8]
    let v8: i64;  // [sp-0xe8]
    let v9: struct40;  // [bp-0xe0], Other Possible Types: i64
    let v10: i64;  // [sp-0xb0]
    let v11: i64;  // [sp-0xa8]
    let v12: i64;  // [sp-0xa0]
    let v13: i64;  // [sp-0x98]
    let v14: i64;  // [sp-0x90]
    let v15: i64;  // [sp-0x88]
    let v16: Enum;  // [sp-0x80], Other Possible Types: i384
    let v17: i8;  // [bp-0x50]
    let v18: i8;  // [bp-0x40]
    let v20: i64;  // rsi
    let v21: i64;  // rdx
    let v22: i128;  // xmm0
    let v23: i256;  // ymm0
    let v24: i256;  // ymm0
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0
    let v27: i64;  // rax
    let v28: i64;  // r14
    let v29: i64;  // rcx
    let v31: i64;  // r14
    let v32: i64;  // rbx
    let v34: i64;  // rax
    let v35: i64;  // rdi

    v0 = a0;
    v8 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v8, v20, v21);
    std::env::vars(&v17);
    v22 = v17;
    vvar_12{reg 224} = ((vvar_91{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_90{reg 224}))
    v7 = v18;
    v6 = v22;
    loop {
        v16 = <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v6);
        if v16 == 0x8000000000000000 {
            break;
        }
        v3 = *((&v16 as &char + 16) as &i64);
        v25 = v16;
        v2 = v25;
        v5 = *((&v16 as &char + 40) as &i64);
        v26 = *((&v16 as &char + 24) as &i128);
        vvar_12{reg 224} = ((((vvar_12{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_111{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_114{reg 224}))
        v4 = v26;
        v10 = &v2;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &v4;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v14 = &v0;
        v15 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v9 = struct40 {
            field_0: &g_50c478
            field_8: 3
            field_16: &v10
            field_24: 3
            field_32: 0
        };
        v27 = std::io::Write::write_fmt(&v1, &v9);
        if v27 {
            v9 = v27;
            core::result::unwrap_failed(); /* do not return */
        }
    }
    v28 = *((&v6 as &char + 8) as &i64);
    v29 = *((&v7 as &char + 8) as &i64);
    if v29 != v28 {
        v31 = v28 + 32;
        do {
            v32 = (v29 - v28) / 48;
            v31 += 48;
        } while (v32 != 1);
    }
    v34 = v7;
    v35 = v1;
    *((v35 + 12) as &i32) = *((v35 + 12) as &i32) - 1;
    if vvar_294 != 1 {
        return v34;
    }
    *(v35 as &i64) = 0;
    *((v35 + 8) as &i32) = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x497459;
    }
    v34 = *((v35 + 8) as &i32);
    if v34 == 2 {
        goto LABEL_0x497473;
    }
    goto LABEL_0x497461;
}
