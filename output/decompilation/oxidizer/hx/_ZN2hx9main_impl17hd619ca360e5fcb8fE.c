fn hx::main_impl(a0: i64) {
    let v0: struct80;  // [bp-0x12a8]
    let v1: struct40;  // [bp-0x1258]
    let v2: struct130;  // [bp-0x1208]
    let v3: u16;  // [bp-0x113b]
    let v4: u8;  // [bp-0x1130]
    let v5: void*;  // [bp-0x1010]
    let v6: u8;  // [bp-0x15]

    v5 = 0;
    v6 = 0;
    v2 = tokio::runtime::builder::Builder::new_multi_thread();
    v3 = 257;
    v1 = tokio::runtime::builder::Builder::build(&v2);
    v0 = core::result::Result<T,E>::expect(&v1);
    tokio::runtime::runtime::Runtime::block_on(a0, &v0, &v4);
    return;
}
