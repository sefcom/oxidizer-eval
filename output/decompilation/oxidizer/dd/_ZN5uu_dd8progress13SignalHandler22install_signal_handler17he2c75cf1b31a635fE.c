fn uu_dd::progress::SignalHandler::install_signal_handler(a1: i64, a2: i64) -> Result<struct64, struct16> {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0x118], Other Possible Types: Result<struct56, struct16>
    let v1: struct24;  // [bp-0x118]
    let v2: u64;  // [bp-0x110]
    let v3: u128;  // [bp-0x108]
    let v4: u64;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: u64;  // [bp-0xe8], Other Possible Types: core::result::Result<std::fs::File, std::io::error::Error>
    let v7: u64;  // [bp-0xe0]
    let v8: u64;  // [bp-0xd8]
    let v9: struct24;  // [bp-0xd0]
    let v10: u64;  // [bp-0xd0]
    let v11: u64;  // [bp-0xc8]
    let v12: u128;  // [bp-0xc0]
    let v13: u8;  // [bp-0xb0]
    let v14: Result<struct16, struct12>;  // [bp-0xa0]
    let v15: u128;  // [bp-0x98]
    let v16: u128;  // [bp-0x88]
    let v17: u64;  // [bp-0x78]
    let v18: struct24;  // [bp-0x70]
    let v19: u64;  // [bp-0x60]
    let v20: struct24;  // [bp-0x58]
    let v21: void*;  // [bp-0x40]
    let v22: u64;  // [bp-0x30]
    let v24: i64;  // rdi
    let v25: i64;  // rdi

    v0 = signal_hook::iterator::SignalsInfo<E>::new(0xa);
    match v0 {
        Err(_) => {
            *((v24 + 8) as &u64) = v2;
            *(v24 as &i64) = 0;
            return;
        },
        Ok(_) => {
            v14 = v6;
            memcpy(&v13, &v0, 16);
            v12 = v3;
            v10 = v0 as i64;
            v11 = v2;
            <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v15, &v10);
            v6 = v14;
            memcpy(&v0 as u8, &v13 as u128, 16);
            v1 = v9;
            v7 = a0;
            v8 = a1;
            v22 = 0x8000000000000000;
            v21 = 0;
            v20 = std::thread::Builder::spawn_unchecked(&v21, &v1);
            v18 = core::result::Result<T,E>::expect(&v20);
            v4 = v17;
            v3 = v16;
            v0 = v15;
            v7 = v19;
            memcpy(&v0 as u8, &v18, 16);
            *((v25 + 16) as &u128) = v16;
            *(v25 as &u128) = v15;
            *((v25 + 48) as &core::result::Result<std::fs::File, std::io::error::Error>) = v6;
            *((v25 + 56) as &u64) = v7;
            *((v25 + 32) as &u64) = v4;
            *((v25 + 40) as &u64) = v5;
            return;
        },
    }
}
