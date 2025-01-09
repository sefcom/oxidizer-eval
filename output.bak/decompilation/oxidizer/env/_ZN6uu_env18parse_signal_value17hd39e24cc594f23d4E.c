fn uu_env::parse_signal_value(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: struct28;  // [sp-0xb8], Other Possible Types: i64
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [bp-0xa0]
    let v4: i64;  // [sp-0x98]
    let v5: struct24;  // [sp-0x88], Other Possible Types: i192
    let v6: i64;  // [sp-0x70]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: i8;  // [sp-0x48]
    let v15: i64;  // rax
    let v16: i64;  // rax

    v5 = alloc::str::<impl str>::to_uppercase(a1, a2);
    v15 = uucore::features::signals::signal_by_name_or_value(*((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64));
    v8 = 0;
    v9 = a1;
    v10 = a2;
    v11 = 1;
    v6 = &v8;
    v7 = <os_display::Quoted as core::fmt::Display>::fmt;
    v0 = &g_5488b0;
    v1 = 2;
    v4 = 0;
    v2 = &v6;
    v3 = 1;
    core::option::Option<T>::map_or_else();
    v0 = struct28 {
        field_0: v12
        field_16: v13
        field_24: 125
    };
    v16 = alloc::boxed::Box<T>::new(&v0);
    return struct16 {
        field_0: v16
        field_8: &g_548908
    };
}
