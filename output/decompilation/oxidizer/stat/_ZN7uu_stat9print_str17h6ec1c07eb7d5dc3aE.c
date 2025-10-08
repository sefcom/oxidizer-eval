fn uu_stat::print_str(a0: core::option::Option<&str>, a1: u64, a2: u32, a3: u64, a4: u64, a5: u64) -> long long {
    let v1: u64;  // 4096
    let v2: u64;  // rdx

    v1 = a1;
    if (a5 < v1 & a4 == 2) == 1 {
        a0 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(a5, a0, a1) as u64;
        v1 = v2;
    }
    return uu_stat::pad_and_print(a0, v1, a2, a3, 1);
}
