fn uu_dd::progress::SignalHandler::install_signal_handler(a1: i64, a2: i64) -> Result<struct64, struct16> {
    let a0: u64;  // rsi
    let v0: Result<struct56, struct16>;  // [bp-0x118], Other Possible Types: struct16
    let v1: struct72;  // [bp-0x118]
    let v2: struct17;  // [bp-0x110]
    let v3: u128;  // [bp-0x108]
    let v4: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xf8]
    let v5: u128;  // [bp-0xf0]
    let v6: u64;  // [bp-0xe8]
    let v7: u64;  // [bp-0xe0]
    let v8: struct16;  // [bp-0xd0]
    let v9: struct17;  // [bp-0xc8]
    let v10: struct24;  // [bp-0xc0]
    let v11: u128;  // [bp-0xb0]
    let v12: u64;  // [bp-0xa0]
    let v13: struct16;  // [bp-0x98], Other Possible Types: u8
    let v14: u128;  // [bp-0x88]
    let v15: u64;  // [bp-0x78]
    let v16: struct24;  // [bp-0x70]
    let v17: u64;  // [bp-0x60]
    let v18: struct24;  // [bp-0x58]
    let v19: void*;  // [bp-0x40]
    let v20: u64;  // [bp-0x30]
    let v22: i64;  // rdi
    let v24: i64;  // rdi

    v0 = signal_hook::iterator::SignalsInfo<E>::new(0xa);
    match v0 {
        Err(_) => {
            *((v22 + 8) as &struct17) = v2;
            *(v22 as &i64) = 0;
            return;
        },
        Ok(_) => {
            v12 = v6;
            v11 = *((&v0 as &char + 32) as &i128);
            v10 = v3;
            v8 = v0 as i64;
            v9 = v2;
            <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v13, &v8);
            v1 = struct72 {
                field_0: *(&v8.field_0 as &i128)
                field_16: v10
                field_32: v11
                field_48: v12
                field_56: a0
                field_64: a1
            };
            v20 = 0x8000000000000000;
            v19 = 0;
            v18 = std::thread::Builder::spawn_unchecked(&v19, &v1);
            v16 = core::result::Result<T,E>::expect(&v18);
            v4 = v15;
            v3 = v14;
            v0 = v13;
            v7 = v17;
            v5 = v16.field_0;
            *((v24 + 16) as &u128) = v14;
            *(v24 as &struct16) = v13;
            *((v24 + 48) as &u64) = v6;
            *((v24 + 56) as &u64) = v7;
            *((v24 + 32) as &core::result::Result<std::fs::File, std::io::error::Error>) = v4;
            *((v24 + 40) as &i64) = v5 as i64;
            return;
        },
    }
}
