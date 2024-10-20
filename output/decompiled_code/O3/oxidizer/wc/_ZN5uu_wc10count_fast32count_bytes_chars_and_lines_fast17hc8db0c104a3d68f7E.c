fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0: void*, a1: u32) -> u64 {
    let v0: void*;  // [sp-0x4048]
    let v1: u64;  // [sp-0x4038]
    let v2: void*;  // [sp-0x4030]
    let v3: void*;  // [sp-0x3030]
    let v4: void*;  // [sp-0x2030]
    let v5: void*;  // [sp-0x1030]
    let v7: void*;  // rbx
    let v8: void*;  // r13
    let v9: u256;  // ymm4
    let v10: u256;  // ymm5
    let v11: u256;  // ymm6
    let v12: u256;  // ymm0
    let v13: u256;  // ymm1
    let v14: u256;  // ymm2
    let v15: u256;  // ymm3
    let v16: u64;  // rdx
    let v17: void*;  // r13
    let v18: void*;  // rax
    let v19: u256;  // ymm0
    let v20: void*;  // rcx
    let v21: u256;  // ymm1
    let v22: u128;  // xmm2
    let v23: u128;  // xmm3
    let v24: u128;  // xmm2
    let v25: u128;  // xmm3
    let v26: u128;  // xmm2
    let v27: u128;  // xmm2
    let v28: u128;  // xmm2
    let v29: u128;  // xmm2
    let v30: u128;  // xmm2
    let v31: u128;  // xmm0
    let v32: u128;  // xmm3
    let v33: u128;  // xmm3
    let v34: u128;  // xmm2
    let v35: u128;  // xmm2
    let v36: u128;  // xmm2
    let v37: u128;  // xmm1
    let v38: u128;  // xmm1
    let v39: &struct_0;  // rax

    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v7 = 0;
    memset(&v2, 0, 0x4000);
    v8 = 0;
    v0 = 0;
    loop {
        while (<std::io::stdio::StdinLock as std::io::Read>::read(a1, &v2, 0x4000)) {
            if std::io::error::Error::kind(v16) as i8 != 35 {
                v39 = a0;
                v39->field_0 = v0;
                v39->field_8 = v8;
                v39->field_10 = v7;
                *(&(&v39->field_10)[1] as &i128) = 0;
                *((&v39->field_18 as &char + 8) as &u64) = v16;
                return v39;
            }
        }
        if !v16 {
            v39 = a0;
            v39->field_0 = v0;
            v39->field_8 = v8;
            v39->field_10 = v7;
            *(&(&v39->field_10)[1] as &i128) = 0;
            *((&v39->field_18 as &char + 8) as &i64) = 0;
            return v39;
        }
        if v16 > 0x4000 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 49344;
        v10 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 32896;
        v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617;
        v1 = v8;
        if v16 < 4 {
            v17 = 0;
            v18 = 0;
        } else {
            v18 = v16 & -4;
            v19 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v20 = 0;
            v21 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do {
                vvar_151{reg 288} = Conv(16->128, Load(addr=(stack_base-16432 + vvar_40{reg 24}), size=2, endness=Iend_LE))
                vvar_154{reg 320} = Conv(16->128, Load(addr=(stack_base-16430 + vvar_40{reg 24}), size=2, endness=Iend_LE))
                v24 = v22 & 49344;
                v25 = v23 & 49344;
                v26 = BinaryOp CmpGTV;
                v27 = BinaryOp InterleaveLOV;
                v28 = v27 >> 64 CONCAT v27 >> 48 CONCAT v27 >> 16 CONCAT v27 >> 16 CONCAT v27;
                v29 = v28 >> 96 CONCAT v28 >> 32 CONCAT v28 >> 32 CONCAT v28;
                v30 = v29 & 18446744073709551617;
                v31 = BinaryOp AddV;
                vvar_39{reg 224} = ((vvar_39{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_170{reg 224}))
                v32 = BinaryOp CmpGTV;
                v33 = BinaryOp InterleaveLOV;
                vvar_33{reg 320} = ((((((((vvar_43{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_154{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_158{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_172{reg 320})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_174{reg 320}))
                v34 = v33 >> 64 CONCAT v33 >> 48 CONCAT v33 >> 16 CONCAT v33 >> 16 CONCAT v33;
                v35 = v34 >> 96 CONCAT v34 >> 32 CONCAT v34 >> 32 CONCAT v34;
                v36 = v35 & 18446744073709551617;
                vvar_32{reg 288} = ((((((((((((((((((((vvar_42{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_151{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_156{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_160{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_162{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_164{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_166{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_168{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_176{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_178{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_180{reg 288}))
                v37 = BinaryOp AddV;
                vvar_41{reg 256} = ((vvar_41{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_182{reg 256}))
                v20 += 4;
            } while (v18 != v20);
            v38 = BinaryOp AddV;
            vvar_31{reg 256} = ((vvar_41{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_188{reg 256}))
            vvar_29{reg 224} = ((((vvar_39{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->32, (vvar_188{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_188{reg 256} >> 0x40<8>))) CONCAT (Conv(128->32, (vvar_188{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_188{reg 256} >> 0x40<8>)))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->32, (vvar_188{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_188{reg 256} >> 0x40<8>))) CONCAT (Conv(128->32, (vvar_188{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_188{reg 256} >> 0x40<8>)))) + vvar_188{reg 256})))
            v17 = v12;
            if v18 == v16 {
                goto LABEL_48d08b;
            }
        }
        do {
            v17 += -0x100 | (*((&v2 + v18) as &i8) & 192) != 128;
            v18 += 1;
        } while (v16 != v18);
LABEL_48d08b:
        v0 += v16;
        v8 = v1 + v17;
        v7 += bytecount::count(&v2, v16, 10);
    }
}
