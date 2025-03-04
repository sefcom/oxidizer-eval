fn uu_env::parse_signal_value(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: iNone;  // [sp-0xb8]
    let v1: struct24;  // [sp-0x88]
    let v2: i64;  // [sp-0x60]
    let v3: i64;  // [sp-0x58]
    let v4: i64;  // [sp-0x50]
    let v5: i8;  // [sp-0x48]
    let v6: String;  // [sp-0x40]
    let v8: i64;  // rax

    v1 = alloc::str::<impl str>::to_uppercase(a1, a2);
    v2 = 0;
    v3 = a1;
    v4 = a2;
    v5 = 1;
    v6 = format!("{}: invalid signal", &v2);
    v0 = *(&v6 as &i224);
    v8 = alloc::boxed::Box<T>::new(&v0);
    return struct16 {
        field_0: v8
        field_8: &g_548908
    };
}
