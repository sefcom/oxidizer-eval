fn fuel_core_client::main() -> int {
    let v0: struct80;  // [bp-0x4b8]
    let v1: struct40;  // [bp-0x468]
    let v2: struct130;  // [bp-0x418]
    let v3: u16;  // [bp-0x34b]
    let v4: u8;  // [bp-0x340]
    let v5: u8;  // [bp-0x18]

    v5 = 0;
    v2 = tokio::runtime::builder::Builder::new_current_thread();
    v3 = 257;
    v1 = tokio::runtime::builder::Builder::build(&v2);
    v0 = core::result::Result<T,E>::expect(&v1);
    tokio::runtime::runtime::Runtime::block_on(&v0, &v4);
    return;
}
