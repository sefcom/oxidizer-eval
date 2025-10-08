fn meilitool::try_opening_poly_database(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct12, struct8> {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v3: u192;  // [bp-0x80]
    let v5: struct24;  // [bp-0x68]
    let v6: struct28;  // [bp-0x50]
    let v7: struct32;  // [bp-0x30]

    v0 = a3;
    v1 = a4;
    v6 = struct28 {
        field_0: a1
        field_8: a3
        field_16: a4
        field_24: 0
    };
    v7 = heed::databases::database::DatabaseOpenOptions<T,KC,DC,C,CDUP>::open(&v6, a2);
    v5 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v7, &v0)?;
    anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(a0, &v5, &v0);
    return;
}
