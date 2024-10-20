fn uu_od::open_input_peek_reader(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: void*;  // [sp-0x70], Other Possible Types: u64
    let v1: u256;  // [sp-0x60], Other Possible Types: struct32
    let v2: &u64;  // [sp-0x58]
    let v3: u64;  // [sp-0x50]
    let v4: void*;  // [sp-0x48]
    let v5: i8;  // [bp-0x40]
    let v6: u8;  // [sp-0x38]
    let v8: &u64;  // rax
    let v9: &u64;  // rcx
    let v10: u64;  // 4096
    let v12: &u8;  // rsi
    let v13: u64;  // rdi
    let v14: u8;  // r8b
    let v15: u64;  // rdx
    let v16: u128;  // xmm0
    let v17: u128;  // xmm1
    let v18: u256;  // ymm0

    if !a2 {
        v8 = 8;
    } else if a2 > 384307168202282325 {
        v0 = 0;
    } else {
        v0 = 8;
        v8 = __rust_alloc(a2 * 24, 8);
        v9 = 16;
        do {
            v12 = *((a1 + v9 - 8) as &i64);
            v13 = *((a1 + v9) as &i64);
            if v13 == 1 {
                v14 = *(v12) == 45;
            }
        } while ((*((v8 + v9 - 16) as &u64) = v14 as u64, *((v8 + v9 - 8) as &&u8) = v12, *((v8 + v9) as &u64) = v13, v9 += 24, v15 = v10 - 1, v10 != 1));
    }
    v1 = a2;
    v2 = v8;
    v3 = a2;
    v4 = 0;
    v6 = 0;
    v1 = uu_od::multifilereader::MultifileReader::next_file();
    v16 = v1;
    v17 = *((&v1 as &char + 16) as &i128);
    *(&a0->field_30 as &i8) = v5;
    a0->field_20 = v17;
    a0->field_10 = v16;
    a0->field_0 = a4;
    a0->field_8 = a5;
    a0->field_40 = a3;
    a0->field_48 = 0;
    a0->field_50 = 1;
    a0->field_58 = 0;
    return Conv(256->64, ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_122{reg 224})));
}
