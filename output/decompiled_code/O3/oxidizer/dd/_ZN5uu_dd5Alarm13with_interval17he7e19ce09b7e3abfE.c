fn uu_dd::Alarm::with_interval(a0: i64) -> u64 {
    let v0: i64;  // [sp-0x68]
    let v1: i64;  // [sp-0x60], Other Possible Types: struct24, struct8
    let v2: i64;  // [sp-0x58]
    let v3: i8;  // [bp-0x50]
    let v4: i64;  // [sp-0x38]
    let v5: i64;  // [sp-0x30]
    let v6: i32;  // [sp-0x28]
    let v7: i192;  // [sp-0x20], Other Possible Types: struct24

    v1 = 1;
    v2 = 1;
    v3 = 0;
    v0 = alloc::boxed::Box<T>::new(&v1);
    v4 = alloc::sync::Arc<T,A>::downgrade(&v0);
    v5 = 1;
    v6 = 0;
    v3 = 0x8000000000000000;
    v1 = struct8 {
        field_0: 0
    };
    v7 = std::thread::Builder::spawn_unchecked(&v1, &v4);
    v1 = core::result::Result<T,E>::expect(&v7);
    return struct20 {
        field_0: v0
        field_8: 1
        field_16: 0
    };
}
