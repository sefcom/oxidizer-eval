fn uu_od::output_info::OutputInfo::create_spaced_formatter_info(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v2: struct32;  // [bp-0x20]

    v0 = a3;
    v1 = a4;
    v2 = struct32 {
        field_0: a1
        field_8: a1 + a2 * 40
        field_16: &v0
        field_24: &v1
    };
    return <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, &v2);
}
