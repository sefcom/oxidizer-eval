fn meilitool::upgrade::v1_10::date_round_trip(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32, a5: i64) -> u64 {
    let v0: u32;  // [bp-0x80]
    let v1: struct9;  // [bp-0x80]
    let v2: u32;  // [bp-0x7d]
    let v3: u8;  // [bp-0x79]
    let v4: u64;  // [bp-0x78]
    let v5: u32;  // [bp-0x70]
    let v6: u32;  // [bp-0x6d]
    let v7: u64;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: u64;  // [bp-0x58]
    let v10: u64;  // [bp-0x50]
    let v11: struct20;  // [bp-0x48]

    v7 = a1;
    v8 = a2;
    v9 = a5;
    v10 = 10;
    v11 = heed::databases::database::Database<KC,DC,C,CDUP>::get(a3, a4, a0, a5, 10);
    v0 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v11, &v9, &v7);
    if v3 == 2 {
        return v4;
    }
    v6 = v2;
    v5 = *(&v1.field_7 as &i32);
    if (v3 & 1) {
        return 0;
    }
    v2 = v6;
    v0 = v5;
    v11 = heed::databases::database::Database<KC,DC,C,CDUP>::put(a3, a4, a0, a5, 10, &v0);
    return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v11, &v9, &v7);
}
