fn meilitool::upgrade::v1_10::update_index_stats(a0: u32, a1: u32, a2: u64, a3: u64, a4: u64, a5: void*) -> long long {
    let v0: u32;  // [bp-0x170]
    let v1: u32;  // [bp-0x16d]
    let v2: u64;  // [bp-0x168]
    let v3: u64;  // [bp-0x160]
    let v4: iNone;  // [bp-0x158]
    let v5: u64;  // [bp-0x148]
    let v6: u32;  // [bp-0x138]
    let v7: struct81;  // [bp-0x138]
    let v8: u32;  // [bp-0x135]
    let v9: u8;  // [bp-0x131]
    let v10: u64;  // [bp-0x130]
    let v11: iNone;  // [bp-0x128]
    let v12: iNone;  // [bp-0x118]
    let v13: u64;  // [bp-0x108]
    let v14: iNone;  // [bp-0x100]
    let v15: u64;  // [bp-0xf0]
    let v16: struct80;  // [bp-0xe8]
    let v17: u32;  // [bp-0xe5]
    let v18: u8;  // [bp-0xe1]
    let v19: u64;  // [bp-0xe0]
    let v20: iNone;  // [bp-0xd8]
    let v21: iNone;  // [bp-0xc8]
    let v22: u64;  // [bp-0xb8]
    let v23: iNone;  // [bp-0xb0]
    let v24: u64;  // [bp-0xa0]
    let v25: iNone;  // [bp-0x98]
    let v26: struct20;  // [bp-0x80], Other Possible Types: struct80

    v2 = a2;
    v3 = a3;
    v7 = heed::databases::database::Database<KC,DC,C,CDUP>::get(a0, a1, a5, a4);
    v26 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v7, &v2);
    v16 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v26);
    if v18 == 2 {
        return v19;
    }
    v1 = v17;
    v0 = v16.field_0;
    v25 = v20;
    v4 = v23;
    v5 = v24;
    if (v18 & 1) {
        return 0;
    }
    v15 = v5;
    v14 = v4;
    v6 = v0;
    v8 = v1;
    v11 = v25;
    v12 = v21;
    v13 = v22;
    v9 = v18;
    v10 = v19;
    v26 = heed::databases::database::Database<KC,DC,C,CDUP>::put(a0, a1, a5, a4, &v7);
    return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v26, &v2, a2));
}
