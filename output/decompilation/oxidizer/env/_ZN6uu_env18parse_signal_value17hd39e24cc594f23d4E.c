fn uu_env::parse_signal_value(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: i224;  // [bp-0xb8], Other Possible Types: struct28
    let v1: i64;  // [bp-0xa0]
    let v2: i64;  // [sp-0x98]
    let v3: i192;  // [sp-0x88], Other Possible Types: struct24
    let v4: i64;  // [sp-0x70]
    let v5: i64;  // [sp-0x68]
    let v6: i64;  // [sp-0x60]
    let v7: i64;  // [sp-0x58]
    let v8: i64;  // [sp-0x50]
    let v9: i8;  // [sp-0x48]
    let v10: i8;  // [bp-0x40]
    let v12: i64;  // rax
    let v13: i64;  // rax

    v3 = alloc::str::<impl str>::to_uppercase(a1, a2);
    v12 = uucore::features::signals::signal_by_name_or_value(*((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64));
    v6 = 0;
    v7 = a1;
    v8 = a2;
    v9 = 1;
    v4 = &v6;
    v5 = <os_display::Quoted as core::fmt::Display>::fmt;
    v0 = struct28 {
        field_0: &g_5488b0
        field_16: &v4
        field_24: <UNKNOWN>
    };
    v2 = 0;
    v1 = 1;
    core::option::Option<T>::map_or_else();
    v0 = v10;
    v13 = alloc::boxed::Box<T>::new(&v0);
    return struct16 {
        field_0: v13
        field_8: &g_548908
    };
}
