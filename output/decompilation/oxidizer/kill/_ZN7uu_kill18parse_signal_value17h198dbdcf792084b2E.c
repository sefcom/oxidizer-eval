fn uu_kill::parse_signal_value(a1: i64, a2: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: u8;  // [bp-0x70]
    let v4: alloc::string::String;  // [bp-0x38]
    let v5: u32;  // [bp-0x20]
    let v7: void*;  // rax
    let v8: &mut [u8];  // rdx

    if !(uucore::features::signals::signal_by_name_or_value(a1, a2) & 1) {
        v0 = 0;
        v1 = a1;
        v2 = a2;
        v3 = 1;
        v4 = format!("{}: invalid signal", &v0);
        v5 = 1;
        v7 = alloc::boxed::Box<T>::new(&v4) as u64;
    }
    return struct16 {
        field_0: v7
        field_8: v8
    };
}
