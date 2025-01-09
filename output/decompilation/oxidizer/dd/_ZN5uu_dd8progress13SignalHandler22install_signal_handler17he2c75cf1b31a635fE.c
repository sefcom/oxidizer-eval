fn uu_dd::progress::SignalHandler::install_signal_handler(a0: &struct64, a1: u32, a2: u32) -> u64 {
    let v0: i448;  // [sp-0x118], Other Possible Types: struct72, Result<struct56, struct8>, struct40
    let v3: struct24;  // [sp-0xf0]
    let v6: struct56;  // [bp-0xd0]
    let v10: struct40;  // [sp-0x98]
    let v11: struct24;  // [sp-0x70]
    let v12: struct24;  // [sp-0x58], Other Possible Types: i192
    let v13: struct8;  // [bp-0x40]
    let v14: i64;  // [sp-0x30]
    let v16: i64;  // rcx
    let v17: i64;  // rax
    let v18: i128;  // xmm0

    v0 = signal_hook::iterator::SignalsInfo<E>::new(0xa);
    v16 = v0;
    v17 = *((&v0 as &char + 8) as &i64);
    v6 = struct56 {
        field_0: v16
        field_8: v17
        field_16: v1
        field_32: *((&v0 as &char + 32) as &i128)
        field_48: v4
    };
    v10 = <signal_hook::iterator::backend::Handle as core::clone::Clone>::clone(&v6);
    v18 = *(&v6.field_0 as &i128);
    v0 = struct72 {
        field_0: v18
        field_16: v7
        field_32: v8
        field_48: v9
        field_56: a1
        field_64: a2
    };
    v14 = 0x8000000000000000;
    v13 = struct8 {
        field_0: 0
    };
    v12 = std::thread::Builder::spawn_unchecked(&v13, &v0);
    v11 = core::result::Result<T,E>::expect(&v12);
    v0 = v10;
    v3 = v11;
    return struct64 {
        field_0: v0
        field_16: v1
        field_32: v2
        field_40: v3
        field_48: v4
        field_56: v5
    };
}
