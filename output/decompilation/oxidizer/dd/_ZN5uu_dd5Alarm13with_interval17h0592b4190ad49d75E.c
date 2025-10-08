fn uu_dd::Alarm::with_interval(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: u64;  // [bp-0x88]
    let v1: void*;  // [bp-0x80], Other Possible Types: struct24
    let v2: u64;  // [bp-0x70]
    let v3: struct32;  // [bp-0x58]
    let v4: struct20;  // [bp-0x50]
    let v5: struct24;  // [bp-0x38]

    v1 = struct24 {
        field_0: 1
        field_8: 1
        field_16: 0
    };
    v0 = alloc::boxed::Box<T>::new(&v1) as u64;
    alloc::sync::Arc<T,A>::downgrade(v0);
    v4 = struct20 {
        field_0: v0
        field_8: a1
        field_16: a2
    };
    v2 = 0x8000000000000000;
    v1 = 0;
    v3 = 0;
    v5 = std::thread::Builder::spawn_unchecked(&v1, &v4);
    v1 = core::result::Result<T,E>::expect(&v5);
    return struct24 {
        field_0: v4.field_0
        field_8: a1
        field_16: a2
    };
}
