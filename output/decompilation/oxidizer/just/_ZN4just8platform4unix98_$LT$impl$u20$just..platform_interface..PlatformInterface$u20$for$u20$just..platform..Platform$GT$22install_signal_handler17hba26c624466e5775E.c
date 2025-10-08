fn just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::install_signal_handler(a0: i64) -> double {
    let v0: struct24;  // [bp-0xf8]
    let v2: struct104;  // [bp-0xe0]
    let v3: void*;  // [bp-0xe0]
    let v4: struct24;  // [bp-0xdf]
    let v5: struct72;  // [bp-0xdd]
    let v6: struct72;  // [bp-0xdc], Other Possible Types: unsigned int
    let v7: struct16;  // [bp-0xd0]
    let v8: struct24;  // [bp-0xc8]
    let v9: u8;  // [bp-0xb8]
    let v10: alloc::string::String;  // [bp-0xa8]
    let v11: u128;  // [bp-0x98]
    let v12: core::fmt::Arguments;  // [bp-0x88]
    let v13: struct24;  // [bp-0x78]
    let v16: struct24;  // [bp-0x40], Other Possible Types: struct48
    let v17: u192;  // [bp-0x40]
    let v19: u8;  // al
    let v21: iNone;  // xmm0

    v2 = just::signals::Signals::new();
    v19 = v2.field_0;
    if v19 != 56 {
        v21 = *(&v2.field_8 as &i128);
        return struct112 {
            field_0: v19
            field_1: <UNKNOWN>
            field_3: v6
            field_4: v21
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
            field_72: <UNKNOWN>
            field_88: <UNKNOWN>
        };
    }
    v7 = 0x8000000000000000;
    v3 = 0;
    v9 = 0;
    v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("signal handler");
    v13 = v17;
    v16 = std::thread::Builder::name(&v2, &v13);
    v0 = std::thread::Builder::spawn_unchecked(&v16, v6 as u64);
    if !v0.field_0 {
        return struct16 {
            field_0: 47
            padding_1: <UNKNOWN>
            field_8: v0.field_8
        };
    }
    return struct1 {
        field_0: 56
    };
}
