fn uu_sum::sysv_sum(a0: i64, a1: &u64) -> u64 {
    let v0: u64;  // [sp-0x1038]
    let v1: void*;  // [sp-0x1030]
    let v3: u64;  // rax
    let v5: void*;  // r13
    let v6: &&struct_0;  // rbp
    let v7: void*;  // r15
    let v8: u256;  // ymm1
    let v9: u256;  // ymm0
    let v10: u256;  // ymm4
    let v11: u256;  // ymm2
    let v12: u256;  // ymm3
    let v13: u64;  // rdx
    let v15: u64;  // rcx
    let v17: u128;  // xmm1
    let v18: u256;  // ymm1
    let v19: u256;  // ymm0
    let v20: void*;  // rsi
    let v21: u128;  // xmm2
    let v22: u128;  // xmm3
    let v23: u128;  // xmm2
    let v24: u128;  // xmm2
    let v25: u128;  // xmm1
    let v26: u128;  // xmm3
    let v27: u128;  // xmm3
    let v28: u128;  // xmm0
    let v29: u128;  // xmm0
    let v30: u128;  // xmm1
    let v31: u128;  // xmm1
    let v32: u64;  // rax
    let v33: u64;  // rax
    let v34: &&struct_0;  // rax

    v1 = 0;
    v0 = v3;
    v5 = 0;
    memset(&v1, 0, 0x1000);
    v6 = a1[3];
    v7 = 0;
    loop {
        if v6() {
            break;
        } else {
            if !v13 {
                break;
            }
            if v13 >= 4097 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            v7 += v13;
            if v13 >= 8 {
                v15 = v13 & -8;
                vvar_119{reg 256} = Conv(64->128, vvar_7{reg 120})
                vvar_45{reg 256} = ((vvar_14{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_119{reg 256}))
                v19 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v20 = 0;
                v10 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                do {
                    vvar_129{reg 288} = Conv(32->128, Load(addr=(stack_base-4144 + vvar_41{reg 64}), size=4, endness=Iend_LE))
                    vvar_131{reg 320} = Conv(32->128, Load(addr=(stack_base-4140 + vvar_41{reg 64}), size=4, endness=Iend_LE))
                    v23 = BinaryOp InterleaveLOV;
                    v24 = BinaryOp InterleaveLOV;
                    vvar_17{reg 288} = ((((((vvar_47{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_129{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_133{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_135{reg 288}))
                    v25 = BinaryOp AddV;
                    vvar_45{reg 256} = ((vvar_45{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_137{reg 256}))
                    v26 = BinaryOp InterleaveLOV;
                    v27 = BinaryOp InterleaveLOV;
                    vvar_18{reg 320} = ((((((vvar_48{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_131{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_139{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_141{reg 320}))
                    v28 = BinaryOp AddV;
                    vvar_46{reg 224} = ((vvar_46{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_143{reg 224}))
                    v20 += 8;
                } while (v15 != v20);
                v29 = BinaryOp AddV;
                v30 = v29 >> 96 CONCAT v29 >> 64 CONCAT v29 >> 96 CONCAT v29 >> 64;
                v31 = BinaryOp AddV;
                vvar_14{reg 256} = ((((vvar_45{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_151{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_153{reg 256}))
                vvar_15{reg 224} = ((((((vvar_46{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_149{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>)) CONCAT Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>))) CONCAT (Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>)) CONCAT Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>)))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>)) CONCAT Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>))) CONCAT (Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>)) CONCAT Conv(64->32, (Conv(128->64, vvar_153{reg 256}) >> 0x20<8>)))) + vvar_153{reg 256})))
                v5 = v9;
                if v15 == v13 {
                    continue;
                }
            }
            do {
                v33 = v32 + 1;
                v5 = v5 + *(v32 as &i8) & 4294967295;
            } while (v33 != (&v1 as &u8 + v13) as &void*);
        }
    }
    if *(a1) {
        v34();
    }
    return v7 + 511 >> 9;
}
