fn uu_od::output_info::OutputInfo::create_spaced_formatter_info(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x30]
    let v1: u64;  // [sp-0x28]
    let v2: u64;  // [sp-0x20]
    let v3: u64;  // [sp-0x18]
    let v4: u64;  // [sp-0x10]
    let v5: u64;  // [sp-0x8]

    v0 = a3;
    v1 = a4;
    v2 = a1;
    v3 = a1 + a2 * 40;
    v4 = &v0;
    v5 = &v1;
    return <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, &v2);
}
