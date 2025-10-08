fn meilitool::try_clearing_poly_database(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u64;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v2: struct12;  // [bp-0x20]

    v0 = a3;
    v1 = a4;
    v2 = heed::databases::database::Database<KC,DC,C,CDUP>::clear(a1, a2, a0);
    return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v2, &v0, a2);
}
