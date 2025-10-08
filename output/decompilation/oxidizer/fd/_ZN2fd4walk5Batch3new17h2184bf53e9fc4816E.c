fn fd::walk::Batch::new() -> long long {
    let v0: struct21;  // [bp-0x30]
    let v1: void*;  // [bp-0x18]
    let v2: u64;  // [bp-0x10]
    let v3: void*;  // [bp-0x8]

    v0 = struct21 {
        field_0: 1
        field_8: 1
        field_16: 0
        field_20: 0
    };
    v1 = 0;
    v2 = 8;
    v3 = 0;
    return alloc::boxed::Box<T>::new(&v0) as u64;
}
