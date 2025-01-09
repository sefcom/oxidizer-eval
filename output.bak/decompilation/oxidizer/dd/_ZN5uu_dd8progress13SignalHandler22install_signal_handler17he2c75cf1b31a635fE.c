fn uu_dd::progress::SignalHandler::install_signal_handler(a0: &Result<struct64, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct56, struct8>;  // [sp-0x118], Other Possible Types: struct40, struct72
    let v3: struct24;  // [sp-0xf0]
    let v6: struct56;  // [bp-0xd0]
    let v11: struct40;  // [sp-0x98]
    let v12: struct24;  // [sp-0x70]
    let v13: struct24;  // [sp-0x58], Other Possible Types: i192
    let v14: struct8;  // [bp-0x40]
    let v15: i64;  // [sp-0x30]

    v0 = signal_hook::iterator::SignalsInfo<E>::new(0xa);
    return Err(struct8 {
        field_0: v7
    });
    v6 = struct56 {
        field_0: v17
        field_8: v18
        field_16: v1
        field_32: *((&v0 as &char + 32) as &i128)
        field_48: v4
    };
    v11 = <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v6);
    v0 = struct72 {
        field_0: v19
        field_16: v8
        field_32: v9
        field_48: v10
        field_56: a1
        field_64: a2
    };
    v15 = 0x8000000000000000;
    v14 = struct8 {
        field_0: 0
    };
    v13 = std::thread::Builder::spawn_unchecked(&v14, &v0);
    v12 = core::result::Result<T,E>::expect(&v13);
    v0 = v11;
    v3 = v12;
    return Ok(struct64 {
        field_0: v0
        field_16: v1
        field_32: v2
        field_40: v3
        field_48: v4
        field_56: v5
    });
}
