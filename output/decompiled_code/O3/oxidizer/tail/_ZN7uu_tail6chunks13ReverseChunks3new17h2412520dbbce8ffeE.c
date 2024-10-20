fn uu_tail::chunks::ReverseChunks::new(a0: &u64, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v4: u64;  // [sp-0x8]
    let v6: u64;  // r15
    let v7: u64;  // r14
    let v8: u64;  // r12
    let v9: u64;  // rbx
    let v10: u64;  // rax
    let v11: u64;  // rdx
    let v12: u64;  // rdx
    let v13: u64;  // r15
    let v14: u128;  // xmm1
    let v15: u128;  // xmm1
    let v16: u128;  // xmm1
    let v17: u128;  // xmm0
    let v18: u128;  // xmm0
    let v19: u128;  // xmm0
    let v20: u128;  // xmm0
    let v21: u256;  // ymm0
    let v22: u256;  // ymm0
    let v23: u64;  // rdx
    let v24: u256;  // ymm1
    let v25: u256;  // ymm1
    let v26: u64;  // rdx
    let v27: u64;  // cc_ndep

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    if <std::fs::File as std::io::Seek>::seek(a1, 2) {
        v0 = v11;
        core::result::unwrap_failed(); /* do not return */
    } else if <std::fs::File as std::io::Seek>::seek(a1, 1) {
        v0 = v23;
        core::result::unwrap_failed(); /* do not return */
    } else {
        v13 = v12 - v12;
        vvar_57{reg 256} = Conv(64->128, vvar_56{reg 136})
        v15 = BinaryOp InterleaveLOV;
        v16 = v15 - 0x45300000000000004330000000000000;
        v17 = v16;
        v18 = v16 >> 64 CONCAT v17 >> 64;
        v19 = BinaryOp AddV;
        v20 = BinaryOp MulV;
        vvar_72{reg 224} = ((((((((vvar_65{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_64{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_67{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_69{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_71{reg 224}))
        ceil(v22);
        vvar_92{reg 256} = ((((((((((vvar_58{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_57{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_60{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_62{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_71{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_71{reg 224} SubV 0x43e0000000000000<128>)))
        v26 = v25 & v22 >> 63 | v22;
        if !(amd64g_calculate_condition(3, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v27) as char) {
            v26 = 0;
        }
        if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
            *(a0) = a1;
            a0[1] = v13;
            a0[2] = v26;
            a0[3] = 0;
            return a0;
        }
        v26 = -1;
    }
}
