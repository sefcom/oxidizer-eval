fn fd::walk::WorkerState::new(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: std::time::Instant;  // [bp-0x48]
    let v1: struct24;  // [bp-0x40]
    let v3: struct17;  // rax
    let v4: struct40;  // rax

    v1 = struct24 {
        field_0: 1
        field_8: 1
        field_16: 0
    };
    v0 = alloc::boxed::Box<T>::new(&v1) as u64;
    v3 = alloc::boxed::Box<T>::new(&v1) as u64;
    memcpy(a0, a2, 504);
    *((a0 + 504) as &i128) = *(a1 as &i128);
    v4 = *((a1 + 16) as &i64);
    *((a0 + 520) as &struct40) = v4;
    *((a0 + 528) as &std::time::Instant) = v0;
    *((a0 + 536) as &struct17) = v3;
    return v4;
}
