fn uu_tsort::Graph::dfs(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: i64;  // [sp-0xa0]
    let v2: i64;  // [sp-0x90]
    let v3: i64;  // [bp-0x78]
    let v4: i128;  // [sp-0x68]
    let v5: i128;  // [bp-0x58]
    let v6: i64;  // [sp-0x40]
    let v7: i64;  // [sp-0x38]
    let v9: i64;  // r12
    let v10: i64;  // r15
    let v11: i64;  // r14
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rcx
    let v15: i64;  // rbx
    let v16: i64;  // r14
    let v17: i128;  // xmm0
    let v18: i128;  // xmm0
    let v19: i128;  // xmm0
    let v20: i128;  // xmm0
    let v21: i256;  // ymm0
    let v22: i256;  // ymm0
    let v23: i128;  // xmm0
    let v25: i64;  // r13
    let v26: i64;  // r13
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v31: i128;  // xmm0
    let v33: i64;  // rax
    let v34: i64;  // rbp
    let v35: i64;  // r14
    let v36: i64;  // rax
    let v37: i64;  // r14

    v9 = a2;
    v2 = a1;
    v6 = a1;
    v7 = a2;
    v10 = *((a4 + 8) as &i64);
    v0 = *((a4 + 16) as &i64);
    if v0 {
        v11 = 0;
        do {
            if *((v10 + v11 + 8) as &i64) == v9 {
                v12 = bcmp(*((v10 + v11) as &i64), v2, v9) as i64;
            }
        } while ((v11 += 16, v0 << 4 != v11));
    }
    if *((a3 + 24) as &i64) {
        v13 = core::hash::BuildHasher::hash_one(a3 + 32, &v6);
        v14 = *(a3 as &i64);
        v15 = *((a3 + 8) as &i64);
        v16 = v15 & v13;
        vvar_328{reg 224} = Conv(64->128, (vvar_319{reg 16} >> 0x39<8>))
        v18 = BinaryOp InterleaveLOV;
        v19 = v18 >> 64 CONCAT v18 CONCAT v18 CONCAT v18 CONCAT v18;
        v20 = v19 CONCAT v19 CONCAT v19 CONCAT v19;
        vvar_30{reg 224} = ((((((((vvar_329{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_328{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_331{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_333{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_335{reg 224}))
        v4 = v20;
        v1 = v14;
        v3 = 0;
        loop {
            v23 = *((v1 + v16) as &i128);
            v5 = v23;
            v25 = UnaryOp GetMSBs;
            if v25 {
                loop {
                    v26 = v25;
                    v28 = v14 - 16 - ((!(v26 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v16 & v15) * 16;
                    if *((v28 + 8) as &i64) == v9 && !bcmp(v2, *(v28 as &i64), v9) {
                        break;
                    }
                    v29 = v26 - 1 & 4294967295;
                    if !(v29 & v26) {
                        goto LABEL_486a6a;
                    }
                }
            }
LABEL_486a6a:
            v31 = v5;
            vvar_30{reg 224} = ((((((((vvar_65{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_343{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_343{reg 224} CmpEQV vvar_631{stack -104}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_390{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_390{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
            if UnaryOp GetMSBs {
                break;
            }
            v33 = v3;
            v3 = v33 + 16;
            v16 = v16 + v33 + 16 & v15;
        }
    }
    v34 = v2;
    hashbrown::map::HashMap<K,V,S,A>::insert(a3, v34, v9);
    a4 = a4;
    v35 = v0;
    if v35 == *(a4 as &i64) {
        alloc::raw_vec::RawVec<T,A>::grow_one(a4);
        v10 = *((a4 + 8) as &i64);
    }
    v36 = v35 * 16;
    *((v10 + v36) as &i64) = v34;
    *((v10 + v36 + 8) as &i64) = v9;
    v37 = v35 + 1;
    *((a4 + 16) as &i64) = v0;
    if !*((a0 + 24) as &i64) {
        goto LABEL_0x486c81;
    } else {
        goto LABEL_0x486b39;
    }
}
