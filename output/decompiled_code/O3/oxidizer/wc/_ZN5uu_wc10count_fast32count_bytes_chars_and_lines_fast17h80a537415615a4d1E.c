fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0: void*, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x4038], Other Possible Types: void*
    let v1: void*;  // [sp-0x4030]
    let v2: void*;  // [sp-0x3030]
    let v3: void*;  // [sp-0x2030]
    let v4: void*;  // [sp-0x1030]
    let v6: u64;  // rax
    let v7: void*;  // r13
    let v8: u256;  // ymm4
    let v9: u256;  // ymm5
    let v10: u256;  // ymm6
    let v11: u256;  // ymm0
    let v12: u256;  // ymm1
    let v13: u256;  // ymm2
    let v14: u256;  // ymm3
    let v15: u64;  // rdx
    let v16: void*;  // rcx
    let v17: void*;  // rax
    let v18: u256;  // ymm0
    let v19: void*;  // rcx
    let v20: u256;  // ymm1
    let v21: u128;  // xmm2
    let v22: u128;  // xmm3
    let v23: u128;  // xmm2
    let v24: u128;  // xmm3
    let v25: u128;  // xmm2
    let v26: u128;  // xmm2
    let v27: u128;  // xmm2
    let v28: u128;  // xmm2
    let v29: u128;  // xmm2
    let v30: u128;  // xmm0
    let v31: u128;  // xmm3
    let v32: u128;  // xmm3
    let v33: u128;  // xmm2
    let v34: u128;  // xmm2
    let v35: u128;  // xmm2
    let v36: u128;  // xmm1
    let v37: u128;  // xmm1

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v6;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    v7 = 0;
    loop {
        while (<std::fs::File as std::io::Read>::read(a1, &v1, 0x4000)) {
            if std::io::error::Error::kind(v15) as i8 != 35 {
                a0->field_0 = v7;
                a0->field_8 = v0;
                a0->field_10 = 0;
                a0->field_20 = 0;
                a0[1].field_0 = v15;
                return a0;
            }
        }
        if !v15 {
            a0->field_0 = v7;
            a0->field_8 = v0;
            a0->field_10 = 0;
            *(&a0->field_20 as &i128) = 0;
            return a0;
        }
        if v15 > 0x4000 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v8 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 49344;
        v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 32896;
        v10 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617;
        if v15 < 4 {
            v16 = 0;
            v17 = 0;
        } else {
            v17 = v15 & -4;
            v18 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v19 = 0;
            v20 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do {
                vvar_150{reg 288} = Conv(16->128, Load(addr=(stack_base-16432 + vvar_38{reg 24}), size=2, endness=Iend_LE))
                vvar_153{reg 320} = Conv(16->128, Load(addr=(stack_base-16430 + vvar_38{reg 24}), size=2, endness=Iend_LE))
                v23 = v21 & 49344;
                v24 = v22 & 49344;
                v25 = BinaryOp CmpGTV;
                v26 = BinaryOp InterleaveLOV;
                v27 = v26 >> 64 CONCAT v26 >> 48 CONCAT v26 >> 16 CONCAT v26 >> 16 CONCAT v26;
                v28 = v27 >> 96 CONCAT v27 >> 32 CONCAT v27 >> 32 CONCAT v27;
                v29 = v28 & 18446744073709551617;
                v30 = BinaryOp AddV;
                vvar_39{reg 224} = ((vvar_39{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_169{reg 224}))
                v31 = BinaryOp CmpGTV;
                v32 = BinaryOp InterleaveLOV;
                vvar_32{reg 320} = ((((((((vvar_42{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_153{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_157{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_171{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_173{reg 320}))
                v33 = v32 >> 64 CONCAT v32 >> 48 CONCAT v32 >> 16 CONCAT v32 >> 16 CONCAT v32;
                v34 = v33 >> 96 CONCAT v33 >> 32 CONCAT v33 >> 32 CONCAT v33;
                v35 = v34 & 18446744073709551617;
                vvar_31{reg 288} = ((((((((((((((((((((vvar_41{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_150{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_155{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_159{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_161{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_163{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_165{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_167{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_175{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_177{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_179{reg 288}))
                v36 = BinaryOp AddV;
                vvar_40{reg 256} = ((vvar_40{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_181{reg 256}))
                v19 += 4;
            } while (v17 != v19);
            v37 = BinaryOp AddV;
            vvar_30{reg 256} = ((vvar_40{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_187{reg 256}))
            vvar_29{reg 224} = ((((vvar_39{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->32, (vvar_187{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_187{reg 256} >> 0x40<8>))) CONCAT (Conv(128->32, (vvar_187{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_187{reg 256} >> 0x40<8>)))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->32, (vvar_187{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_187{reg 256} >> 0x40<8>))) CONCAT (Conv(128->32, (vvar_187{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_187{reg 256} >> 0x40<8>)))) + vvar_187{reg 256})))
            v16 = v11;
            if v17 == v15 {
                goto LABEL_48c91c;
            }
        }
        do {
            v16 += -0x100 | (*((&v1 + v17) as &i8) & 192) != 128;
            v17 += 1;
        } while (v15 != v17);
LABEL_48c91c:
        v7 += v15;
        v0 += v16;
    }
}
