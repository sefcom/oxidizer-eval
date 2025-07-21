fn uu_dd::Alarm::with_interval() -> : struct20 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x68]
    let v1: void*;  // [bp-0x60], Other Possible Types: struct17, struct24
    let v2: u64;  // [bp-0x50]
    let v3: struct20;  // [bp-0x38]
    let v4: struct24;  // [bp-0x20]

    v1 = struct24 {
        field_0: 1
        field_8: 1
        field_16: 0
    };
    v1 = struct17 {
        field_0: 1
        field_8: 1
        field_16: 0
    };
    v0 = alloc::boxed::Box<T>::new(&v1);
    v3 = struct20 {
        field_0: alloc::sync::Arc<T,A>::downgrade(&v0)
        field_8: 1
        field_16: 0
    };
    v2 = 0x8000000000000000;
    v1 = 0;
    v4 = std::thread::Builder::spawn_unchecked(&v1, &v3);
    v1 = core::result::Result<T,E>::expect(&v4);
    return struct24 {
        field_0: v0
        field_8: 1
        field_16: 0
    };
}
