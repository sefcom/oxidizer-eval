fn uu_tail::follow::files::FileHandling::get_mut(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x98], Other Possible Types: struct24
    let v1: i64;  // [sp-0x88]
    let v2: i64;  // [sp-0x78]
    let v3: i192;  // [sp-0x70], Other Possible Types: Enum
    let v4: i128;  // [sp-0x58]
    let v5: i128;  // [sp-0x48]
    let v7: i64;  // rdx
    let v8: i64;  // rcx
    let v9: i64;  // r8
    let v10: i64;  // r9
    let v11: i128;  // xmm0
    let v12: i256;  // ymm0
    let v14: i64;  // rax
    let v15: i64;  // rbx
    let v16: i64;  // r15
    let v17: i128;  // xmm0
    let v18: i128;  // xmm0
    let v19: i128;  // xmm0
    let v20: i128;  // xmm0
    let v21: i256;  // ymm0
    let v23: i64;  // r13
    let v24: i128;  // xmm0
    let v26: i64;  // rbp
    let v27: i64;  // rbp
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v31: i128;  // xmm0

    if !(!std::path::Path::is_absolute(a1, a2) as i8) || !(!<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a1, a2, v7, v8, v9, v10) as i8) {
LABEL_4ae337:
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
        if !*((a0 + 48) as &i64) {
            core::option::unwrap_failed(); /* do not return */
        }
    } else {
        v3 = std::sys::pal::unix::fs::canonicalize(a1, a2);
        if v3 == 0x8000000000000000 {
            goto LABEL_4ae337;
        }
        v1 = *((&v3 as &char + 16) as &i64);
        v11 = v3;
        v0 = v11;
        if !*((a0 + 48) as &i64) {
LABEL_4ae47a:
            core::option::unwrap_failed(); /* do not return */
        }
    }
    v14 = core::hash::BuildHasher::hash_one(a0 + 56, &v0);
    v15 = *((a0 + 32) as &i64);
    v16 = v15 & v14;
    vvar_172{reg 224} = Conv(64->128, (vvar_163{reg 16} >> 0x39<8>))
    v18 = BinaryOp InterleaveLOV;
    v19 = v18 >> 64 CONCAT v18 CONCAT v18 CONCAT v18 CONCAT v18;
    v20 = v19 CONCAT v19 CONCAT v19 CONCAT v19;
    vvar_55{reg 224} = ((((((((((vvar_147{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_146{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_172{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_174{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_176{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_178{reg 224}))
    v4 = v20;
    v2 = *((a0 + 24) as &i64);
    loop {
        v23 = 0;
        v24 = *((v2 + v16) as &i128);
        v5 = v24;
        v26 = UnaryOp GetMSBs;
        if v26 {
            do {
                v27 = v26;
                v28 = (!(v27 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
                if <std::path::PathBuf as core::cmp::PartialEq>::eq(*((&v0 as &char + 8) as &i64), v1, *((v2 - 240 + -(v28 + v16 & v15) * 240 + 8) as &i64), *((v2 - 240 + -(v28 + v16 & v15) * 240 + 16) as &i64), v9, v10) as i8 {
                    return v2 + -(v28 + v16 & v15) * 240 - 216;
                }
                v29 = v27 - 1 & 4294967295;
            } while ((v29 & v27));
        }
        v31 = v5;
        vvar_55{reg 224} = ((((((((vvar_55{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_186{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_186{reg 224} CmpEQV vvar_305{stack -88}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_235{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_235{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
        if UnaryOp GetMSBs {
            break;
        }
        v16 = v16 + v23 + 16 & v15;
    }
    goto LABEL_4ae47a;
}
