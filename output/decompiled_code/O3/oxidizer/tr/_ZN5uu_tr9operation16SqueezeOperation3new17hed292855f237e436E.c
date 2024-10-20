fn uu_tr::operation::SqueezeOperation::new(a0: u64, a1: u64, a2: u64) -> int {
    let v0: u64;  // [sp-0x90]
    let v1: u128;  // [sp-0x88]
    let v2: u128;  // [sp-0x78]
    let v3: u64;  // [sp-0x68]
    let v4: u64;  // [sp-0x60]
    let v5: Enum;  // [sp-0x50], Other Possible Types: u64
    let v6: u64;  // [sp-0x48]
    let v7: u64;  // [sp-0x40]
    let v8: u64;  // [sp-0x38]
    let v10: u64;  // r15
    let v11: u64;  // r12
    let v12: &&struct_0;  // fs
    let v13: &u64;  // rax
    let v14: u64;  // r13
    let v15: u64;  // rbp
    let v16: &u64;  // rax
    let v17: u128;  // xmm0
    let v18: u128;  // xmm0
    let v19: u256;  // ymm0

    v0 = *(a1);
    v10 = a1[1];
    v11 = a1[2];
    if *(&*(v12)->padding_-28[40] as &i64) {
        v13 = &*(v12)->padding_-28[40];
        v14 = v13[1];
        v15 = v13[2];
    } else {
        v14 = std::sys::pal::unix::rand::hashmap_random_keys();
        v16 = &*(v12)->padding_-28[40];
        *(v16) = 1;
        v16[1] = v14;
        v16[2] = v15;
    }
    *(v12)->padding_-28[32] = v14 + 1;
    v17 = g_4ee4d0;
    v1 = v17;
    v18 = g_4ee4e0;
    v2 = v18;
    v3 = v14;
    v4 = v15;
    if v11 {
        hashbrown::raw::RawTable<T,A>::reserve_rehash(&v1, v11, &v3);
    }
    v5 = v10;
    v6 = v10;
    v7 = v0;
    v8 = v11 + v10;
    v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v1);
    a0->field_20 = *(&v3 as &i128);
    a0->field_10 = v2;
    a0->field_0 = v1;
    a0->field_30 = 0;
    return Conv(256->64, ((((((vvar_55{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_54{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_57{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_107{stack -136})));
}
