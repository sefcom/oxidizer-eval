fn uu_stat::check_bound(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: void*;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: u8;  // [bp-0x78]
    let v4: alloc::string::String;  // [bp-0x40]
    let v8: u64;  // rdx

    if a4 < a2 {
        return 0;
    }
    v0 = 0;
    v1 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(a3, a4, a0, a1) as u64;
    v2 = v8;
    v3 = 1;
    v4 = format!("{}: invalid directive", &v0);
    return alloc::boxed::Box<T>::new(&v4) as u64;
}
