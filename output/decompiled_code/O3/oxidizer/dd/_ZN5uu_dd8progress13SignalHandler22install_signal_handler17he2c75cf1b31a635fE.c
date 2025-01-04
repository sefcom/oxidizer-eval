fn uu_dd::progress::SignalHandler::install_signal_handler(a0: &Result<struct64, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x118], Other Possible Types: Result<struct56, struct16>
    let v1: i128;  // [sp-0x108]
    let v2: i128;  // [bp-0xf8]
    let v3: i192;  // [bp-0xf0]
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i64;  // [sp-0xd8]
    let v7: struct56;  // [sp-0xd0]
    let v9: i128;  // [sp-0xc0]
    let v10: i128;  // [sp-0xb0]
    let v11: i64;  // [sp-0xa0]
    let v12: struct40;  // [sp-0x98], Other Possible Types: i320
    let v13: i192;  // [sp-0x70], Other Possible Types: struct24
    let v14: i192;  // [sp-0x58], Other Possible Types: struct24
    let v15: struct8;  // [bp-0x40]
    let v16: i64;  // [sp-0x30]
    let v20: i128;  // xmm0

    v0 = signal_hook::iterator::SignalsInfo<E>::new(0xa);
    match v0 {
        Err(_) => {
            return struct16 {
                field_0: 0
                field_8: v8
            };
        },
        Ok(_) => {
            v7 = struct56 {
                field_0: v18
                field_8: v19
                field_16: v1
                field_32: *((&v0 as &char + 32) as &i128)
                field_48: v4
            };
            v12 = <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v7);
            v4 = v11;
            v20 = *(&v7.field_0 as &i128);
            v2 = v10;
            v1 = v9;
            v0 = v20;
            v5 = a1;
            v6 = a2;
            v16 = 0x8000000000000000;
            v15 = struct8 {
                field_0: 0
            };
            v14 = std::thread::Builder::spawn_unchecked(&v15, &v0);
            v13 = core::result::Result<T,E>::expect(&v14);
            v0 = v12;
            v3 = v13;
            *((a0 + 16) as &i128) = v1;
            *(a0 as &i128) = v0;
            *((a0 + 48) as &i64) = v4;
            *((a0 + 56) as &i64) = v5;
            *((a0 + 32) as &i64) = v2;
            *((a0 + 40) as &i192) = v3;
            return struct16 {
                field_0: 0
                field_8: v8
            };
        },
    }
}
