fn uu_tail::follow::watch::Observer::from(a0: u64, a1: u64, a2: u64) -> int {
    let v0: u8;  // [sp-0x83]
    let v1: u8;  // [sp-0x82]
    let v2: u8;  // [sp-0x81]
    let v3: u64;  // [sp-0x80]
    let v4: i8;  // [bp-0x70]
    let v5: struct32;  // [sp-0x68], Other Possible Types: u256
    let v6: u64;  // [sp-0x48]
    let v7: u64;  // [sp-0x40]
    let v8: u8;  // [sp-0x38]
    let v9: u8;  // [sp-0x37]
    let v11: u64;  // r15
    let v12: &&struct_0;  // fs
    let v13: &u64;  // rax
    let v14: u64;  // r12
    let v15: u64;  // r13
    let v16: &u64;  // rax
    let v20: u32;  // eax
    let v21: u128;  // xmm0
    let v22: u128;  // xmm0
    let v23: u128;  // xmm1
    let v24: u128;  // xmm2
    let v25: u256;  // ymm0

    v1 = a1->field_48;
    v2 = a1->field_49;
    v0 = a1->field_4c;
    v11 = a1->field_28;
    if *(&*(v12)->padding_-40[64] as &i64) {
        v13 = &*(v12)->padding_-40[64];
        v14 = v13[1];
        v15 = v13[2];
    } else {
        v14 = std::sys::pal::unix::rand::hashmap_random_keys();
        v16 = &*(v12)->padding_-40[64];
        *(v16) = 1;
        v16[2] = v15;
    }
    *(v12)->padding_-40[56] = v6 + 1;
    v5 = hashbrown::raw::RawTable<T,A>::with_capacity_in(v11);
    v6 = v14;
    v7 = v15;
    v3 = 0x8000000000000000;
    v8 = a1->field_4a;
    v9 = 0;
    v21 = *(&v7 as &i128);
    *((&a0->field_68 as &char + 8) as &u128) = v21;
    v22 = *(&v3 as &i128);
    v23 = v4;
    v24 = *((&v5 as &char + 8) as &i128);
    *((&a0->field_58 as &char + 8) as &i128) = *((&v5 as &char + 24) as &i128);
    *((&a0->field_48 as &char + 8) as &u128) = v24;
    *((&a0->field_38 as &char + 8) as &u128) = v23;
    (&a0->field_30)[1] = v22;
    *((&a0->field_78 as &char + 12) as &u8) = v1;
    *((&a0->field_78 as &char + 14) as &u8) = v0;
    *((&a0->field_78 as &char + 13) as &u8) = v2;
    a0->field_0 = 3;
    a0->field_20 = 0;
    a0->field_28 = 8;
    a0->field_30 = 0;
    *((&a0->field_78 as &char + 8) as &u32) = v20;
    return Conv(256->64, ((((vvar_100{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_99{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_102{reg 224})));
}
