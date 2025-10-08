fn turbo_trace::main(a0: u64) -> long long {
    let v0: struct80;  // [bp-0x810]
    let v1: struct40;  // [bp-0x7c0]
    let v2: struct130;  // [bp-0x770]
    let v3: u16;  // [bp-0x6a3]
    let v4: u8;  // [bp-0x698]
    let v5: u8;  // [bp-0x604]

    v5 = 0;
    v2 = tokio::runtime::builder::Builder::new_multi_thread();
    v3 = 257;
    v1 = tokio::runtime::builder::Builder::build(&v2);
    v0 = core::result::Result<T,E>::expect(&v1);
    tokio::runtime::runtime::Runtime::block_on(a0, &v0, &v4);
    return a0;
}
