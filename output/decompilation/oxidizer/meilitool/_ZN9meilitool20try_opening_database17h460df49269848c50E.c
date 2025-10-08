fn meilitool::try_opening_database(a1: i64, a2: i64) -> Result<struct12, struct8> {
    let a0: u64;  // rdi
    let v0: &str;  // [bp-0x90]
    let v2: struct24;  // [bp-0x80]
    let v4: struct24;  // [bp-0x68]
    let v5: struct28;  // [bp-0x50]
    let v6: struct32;  // [bp-0x30]

    v0 = "index-stats";
    v5 = struct28 {
        field_0: a1
        field_8: "index-stats"
        field_24: 0
    };
    v6 = heed::databases::database::DatabaseOpenOptions<T,KC,DC,C,CDUP>::open(&v5, a2);
    v4 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v6, &v0 as u64)?;
    anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(a0, &v4, &v0 as u64);
    return;
}
