fn meilitool::upgrade::v1_12::store_stats_of(a0: u32, a1: u32, a2: u64, a3: void*, a4: u64, a5: i384, a6: u64) -> long long {
    let v0: u64;  // [bp-0x30]
    let v1: core::fmt::Arguments;  // [bp-0x28]
    let v2: struct20;  // [bp-0x20]

    v0 = a4;
    v1 = a5;
    v2 = heed::databases::database::Database<KC,DC,C,CDUP>::put(a0, a1, a3, a2, a6);
    return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v2, &v0, a2);
}
