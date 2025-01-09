fn uu_tail::follow::watch::WatcherRx::watch(a0: u32, a1: void*) -> u64 {
    let v0: i8;  // [bp-0x70]
    let v1: i8;  // [bp-0x60]
    let v2: i8;  // [bp-0x50]
    let v3: i8;  // [bp-0x40]
    let v4: u128;  // [sp-0x38]
    let v5: u128;  // [sp-0x28]
    let v6: u128;  // [sp-0x18]
    let v7: u64;  // [sp-0x8]

    a1->field_18();
    if v0 != 6 {
        v7 = v3;
        v6 = v2;
        v5 = v1;
        v4 = v0;
        return uu_tail::follow::watch::WatcherRx::watch::{{closure}}(&v4);
    }
    return 0;
}
