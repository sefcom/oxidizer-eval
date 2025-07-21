fn uu_env::parse_signal_value(a1: i64, a2: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: struct28;  // [bp-0xb8]
    let v1: alloc::string::String;  // [bp-0x88]
    let v2: void*;  // [bp-0x60]
    let v3: u64;  // [bp-0x58]
    let v4: u64;  // [bp-0x50]
    let v5: u8;  // [bp-0x48]
    let v6: alloc::string::String;  // [bp-0x40]
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rdx

    v1 = alloc::str::<impl str>::to_uppercase(a1, a2);
    v8 = uucore::features::signals::signal_by_name_or_value(v1);
    v2 = 0;
    v3 = a1;
    v4 = a2;
    v5 = 1;
    v6 = format!("{}: invalid signal", &v2);
    v0 = struct28 {
        field_0: *(&v6.vec.buf.cap as &i128)
        field_16: v6.vec.len
        field_24: 125
    };
    v9 = alloc::boxed::Box<T>::new(&v0);
    if v8 && v10 {
        return struct16 {
            field_0: 0
            field_8: v10
        };
    }
    return struct16 {
        field_0: v9
        field_8: &g_548908
    };
}
