fn uu_dd::progress::SignalHandler::install_signal_handler(a0: i64, a1: u64) -> int {
    let v0: Result<struct56, struct16>;  // [bp-0x118], Other Possible Types: u128
    let v1: struct72;  // [bp-0x118], Other Possible Types: u448
    let v2: u64;  // [bp-0x110]
    let v3: u64;  // [bp-0xf8]
    let v4: u128;  // [bp-0xf0]
    let v5: u64;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: struct56;  // [bp-0xd0]
    let v8: u128;  // [bp-0xc0]
    let v9: u128;  // [bp-0xb0]
    let v10: u64;  // [bp-0xa0]
    let v11: struct40;  // [bp-0x98]
    let v12: u128;  // [bp-0x88]
    let v13: u64;  // [bp-0x78]
    let v14: struct24;  // [bp-0x70]
    let v15: u64;  // [bp-0x60]
    let v16: struct24;  // [bp-0x58]
    let v17: void*;  // [bp-0x40]
    let v18: u64;  // [bp-0x30]
    let v19: u8;  // [bp-0x18]

    v0 = signal_hook::iterator::SignalsInfo<E>::new();
    match v0 {
        Err(_) => {
            return struct16 {
                field_0: 0
                field_8: v2
            };
        },
        Ok(v7) => {
            v11 = <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v7);
            v1 = struct72 {
                field_0: *(&v7.field_0 as &i128)
                field_16: v8
                field_32: v9
                field_48: v10
                field_56: a1
                field_64: &g_53dc30
            };
            v18 = 0x8000000000000000;
            v17 = 0;
            v19 = 0;
            v16 = std::thread::Builder::spawn_unchecked(&v17, &v1);
            v14 = core::result::Result<T,E>::expect(&v16);
            v3 = v13;
            v0 = *(&v11.field_0 as &i128) as u128;
            v6 = v15;
            v4 = v14.field_0;
            return struct64 {
                field_0: *(&v11.field_0 as &i128)
                field_16: v12
                field_32: v3
                field_40: v4 as i64
                field_48: v5
                field_56: v6
            };
        },
    }
}
