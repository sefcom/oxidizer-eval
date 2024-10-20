fn uu_sort::GlobalSettings::init_precomputed(a0: void*) -> u64 {
    let v1: &struct_0;  // rcx
    let v2: u64;  // rax
    let v3: u64;  // r8
    let v4: &struct_0;  // rcx
    let v5: &struct_0;  // rsi
    let v6: u64;  // rdx
    let v8: u64;  // rsi
    let v9: void*;  // rsi
    let v10: void*;  // rdx
    let v11: void*;  // r8
    let v12: &struct_1;  // r10
    let v13: &u8;  // r9
    let v14: u64;  // rdx
    let v15: u64;  // rsi
    let v16: void*;  // rdx
    let v17: void*;  // r8
    let v18: &struct_1;  // r10
    let v19: &u8;  // r9
    let v20: u64;  // rdx
    let v21: void*;  // rdx
    let v22: &struct_1;  // rsi
    let v23: u256;  // ymm0
    let v24: u256;  // ymm0
    let v25: u256;  // ymm1
    let v26: u256;  // ymm1
    let v27: u64;  // rdx
    let v28: u256;  // ymm4
    let v29: u256;  // ymm5
    let v30: u128;  // xmm4
    let v31: u128;  // xmm5
    let v32: u128;  // xmm4
    let v33: u128;  // xmm4
    let v34: u128;  // xmm4
    let v35: u128;  // xmm4
    let v36: u128;  // xmm4
    let v37: u128;  // xmm0
    let v38: u128;  // xmm5
    let v39: u128;  // xmm5
    let v40: u128;  // xmm4
    let v41: u128;  // xmm4
    let v42: u128;  // xmm4
    let v43: u128;  // xmm1
    let v45: u64;  // rax
    let v46: &u8;  // rcx

    v1 = a0->field_8;
    v2 = a0->field_10;
    v3 = v2 * 56;
    do {
        v5 = v4;
        v6 = v3;
    } while (v6 && (v3 = v6 - 56, !v5->field_36));
    a0->field_60 = v6;
    if !v2 {
        a0->field_58 = 0;
        a0->field_48 = 0;
        v9 = 0;
    } else {
        v8 = v2 & 3;
        if v2 < 4 {
            v10 = 0;
            v11 = 0;
        } else {
            v12 = &v1[4].padding_0[3];
            v10 = 0;
            v11 = 0;
            do {
                v10 = v12->field_-a8 + v12->field_-70 + v12->field_-38 + v12->field_0 + v10;
                v11 += 4;
                v12 = &v12[1].padding_-a7[54];
            } while ((v2 & -4) != v11);
        }
        if v8 {
            v13 = 0;
            do {
                v10 += *(((55 + 0x38 * v11 as u64 + v1 as &u8) as &struct_0 + v13) as &i8);
                v13 += 56;
            } while (v8 * 56 != v13);
        }
        a0->field_58 = v14;
        v15 = v2 & 3;
        if v2 < 4 {
            v16 = 0;
            v17 = 0;
        } else {
            v18 = &v1[4].padding_0[1];
            v16 = 0;
            v17 = 0;
            do {
                v16 = (-0x100 | v18->field_-70 < 2) + (-0x100 | v18->field_0 < 2) + v16 + (v18->field_-38 < 2) + (v18->field_-a8 < 2);
                v17 += 4;
                v18 = &v18[1].padding_-a7[54];
            } while ((v2 & -4) != v17);
        }
        if v15 {
            v19 = 0;
            do {
                v20 += *(((53 + 0x38 * v17 as u64 + v1 as &u8) as &struct_0 + v19) as &i8) < 2;
                v19 += 56;
            } while (v15 * 56 != v19);
        }
        a0->field_48 = v20;
        if v2 < 4 {
            v9 = 0;
            v21 = 0;
            goto LABEL_4c0166;
        } else {
            v21 = v2 & -4;
            v22 = &v1[4].padding_0[1];
            v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do {
                vvar_282{reg 352} = Conv(32->128, ((Conv(8->32, Load(addr=(vvar_93{reg 64} - 0x70<64>), size=1, endness=Iend_LE)) * 0x100<32>) | Conv(8->32, Load(addr=(vvar_93{reg 64} - 0xa8<64>), size=1, endness=Iend_LE))))
                vvar_288{reg 384} = Conv(32->128, ((Conv(8->32, Load(addr=vvar_93{reg 64}, size=1, endness=Iend_LE)) * 0x100<32>) | Conv(8->32, Load(addr=(vvar_93{reg 64} - 0x38<64>), size=1, endness=Iend_LE))))
                v32 = BinaryOp CmpEQV;
                v33 = BinaryOp InterleaveLOV;
                v34 = v33 >> 64 CONCAT v33 >> 48 CONCAT v33 >> 16 CONCAT v33 >> 16 CONCAT v33;
                v35 = v34 >> 96 CONCAT v34 >> 32 CONCAT v34 >> 32 CONCAT v34;
                v36 = v35 & 18446744073709551617;
                v37 = BinaryOp AddV;
                vvar_96{reg 224} = ((vvar_96{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_300{reg 224}))
                v38 = BinaryOp CmpEQV;
                v39 = BinaryOp InterleaveLOV;
                vvar_99{reg 384} = ((((((vvar_99{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_288{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_302{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_304{reg 384}))
                v40 = v39 >> 64 CONCAT v39 >> 48 CONCAT v39 >> 16 CONCAT v39 >> 16 CONCAT v39;
                v41 = v40 >> 96 CONCAT v40 >> 32 CONCAT v40 >> 32 CONCAT v40;
                v42 = v41 & 18446744073709551617;
                vvar_98{reg 352} = ((((((((((((((((((vvar_98{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_282{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_290{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_292{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_294{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_296{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_298{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_306{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_308{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_310{reg 352}))
                v43 = BinaryOp AddV;
                vvar_97{reg 256} = ((vvar_97{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_312{reg 256}))
                v22 = &v22[1].padding_-a7[54];
            } while (v27 != 4);
            vvar_79{reg 64} = Conv(256->64, ((((vvar_96{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x40<8>))) CONCAT (Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x40<8>)))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x40<8>))) CONCAT (Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_312{reg 256} + vvar_300{reg 224}) >> 0x40<8>)))) + (vvar_312{reg 256} + vvar_300{reg 224})))))
            if v2 != v21 {
LABEL_4c0166:
                v45 = v2 - v21;
                v46 = 53 + v1 as &u8 + 0x38 * v21 as u64;
                do {
                    v9 += -0x100 | *(v46) == 2;
                    v46 += 56;
                    v2 = v45 - 1;
                } while (v45 != 1);
            }
        }
    }
    a0->field_50 = v9;
    return v2;
}
