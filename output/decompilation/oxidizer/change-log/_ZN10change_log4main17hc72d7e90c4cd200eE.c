fn change_log::main() -> long long {
    let v0: struct80;  // [bp-0x3c48]
    let v1: struct40;  // [bp-0x3bf8]
    let v2: struct130;  // [bp-0x3ba8]
    let v3: u16;  // [bp-0x3adb]
    let v4: u8;  // [bp-0x3ad0]
    let v5: u8;  // [bp-0x39c8]
    let v6: void*;  // [bp-0x3018]
    let v7: void*;  // [bp-0x2018]
    let v8: void*;  // [bp-0x1018]

    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v2 = tokio::runtime::builder::Builder::new_multi_thread();
    v3 = 257;
    v1 = tokio::runtime::builder::Builder::build(&v2);
    v0 = core::result::Result<T,E>::expect(&v1);
    return tokio::runtime::runtime::Runtime::block_on(&v0, &v4);
}
