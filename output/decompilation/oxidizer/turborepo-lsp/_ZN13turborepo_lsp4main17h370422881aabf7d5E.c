fn turborepo_lsp::main() -> int {
    let v0: struct80;  // [bp-0x870]
    let v1: struct40;  // [bp-0x820]
    let v2: struct130;  // [bp-0x7d0]
    let v3: u16;  // [bp-0x703]
    let v4: u8;  // [bp-0x6f8]
    let v5: u8;  // [bp-0x14]

    v5 = 0;
    v2 = tokio::runtime::builder::Builder::new_multi_thread();
    v3 = 257;
    v1 = tokio::runtime::builder::Builder::build(&v2);
    v0 = core::result::Result<T,E>::expect(&v1);
    tokio::runtime::runtime::Runtime::block_on(&v0, &v4);
    return;
}
