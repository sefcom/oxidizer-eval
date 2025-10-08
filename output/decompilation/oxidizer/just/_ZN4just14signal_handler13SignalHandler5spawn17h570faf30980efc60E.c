fn just::signal_handler::SignalHandler::spawn(a0: i64, a1: void*) -> int {
    let v1: struct157;  // [bp-0x26c]
    let v2: u128;  // [bp-0x268]
    let v3: alloc::string::String;  // [bp-0x260]
    let v4: iNone;  // [bp-0x25c]
    let v5: Result<struct52, struct16>;  // [bp-0x240]
    let v6: struct16;  // [bp-0x230]
    let v7: struct24;  // [bp-0x220]
    let v8: core::fmt::rt::Argument;  // [bp-0x210]
    let v9: alloc::string::String;  // [bp-0x208]
    let v10: Option<struct224>;  // [bp-0x1f0], Other Possible Types: struct32
    let v11: struct104;  // [bp-0x1e8]
    let v12: Option<struct224>;  // [bp-0x110]
    let v14: struct72;  // r15
    let v15: struct80;  // rbx
    let v16: core::fmt::Arguments;  // eax

    v14 = just::signal_handler::SignalHandler::instance();
    v10 = std::process::Command::spawn(a1);
    if v10.field_0 == 1 {
        return struct32 {
            field_0: 0x8000000000000000
            field_8: v11
            padding_16: <UNKNOWN>
            field_56: <UNKNOWN>
        };
    }
    v4 = *((&v10.field_4 as &char + 8) as &i128);
    v2 = *(&(&v10.field_0)[1] as &i128);
    v1 = v3 >> 31;
    if v3 < 0 {
        v9 = format!("invalid child PID: {}", &v0);
        return struct32 {
            field_0: 0x8000000000000000
            field_8: std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v9), &g_830e98)
            padding_16: <UNKNOWN>
            field_56: <UNKNOWN>
        };
    }
    memcpy(&v10, a1, 224);
    v12 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v14 + 8, v3 as u64, &v10);
    v5 = core::ops::function::Fn::call(&v2);
    v15 = just::signal_handler::SignalHandler::instance();
    v10 = alloc::collections::btree::map::BTreeMap<K,V,A>::remove(v15 + 8, v3 as u64);
    v16 = *((v15 + 32) as &i32);
    return struct64 {
        field_0: v5 as i128
        field_16: v6
        field_32: v7
        field_48: v8
        field_56: v16
    };
}
