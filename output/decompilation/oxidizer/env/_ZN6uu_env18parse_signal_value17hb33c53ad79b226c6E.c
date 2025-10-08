fn uu_env::parse_signal_value(a0: i64, a1: u64, a2: u64) -> void {
    let v0: u128;  // [bp-0xb8]
    let v1: u64;  // [bp-0xa8]
    let v2: u32;  // [bp-0xa0]
    let v3: alloc::string::String;  // [bp-0x88]
    let v4: void*;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: u8;  // [bp-0x48]
    let v8: alloc::string::String;  // [bp-0x40]
    let v10: core::option::Option<usize>;  // al
    let v11: u64;  // rax
    let v12: u64;  // rdx

    v3 = alloc::str::<impl str>::to_uppercase(a1, a2);
    v10 = uucore::features::signals::signal_by_name_or_value(v3);
    v4 = 0;
    v5 = a1;
    v6 = a2;
    v7 = 1;
    v8 = format!("{}: invalid signal", &v4);
    v2 = 125;
    v0 = *(&v8.vec.buf.inner.cap as &i128);
    v1 = v8.vec.len;
    v11 = alloc::boxed::Box<T>::new(&v0) as u64;
    if !(v12 & v10) {
        return struct16 {
            field_0: v11
            field_8: &g_5108a8
        };
    }
    return struct16 {
        field_0: 0
        field_8: v12
    };
}
