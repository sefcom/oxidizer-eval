fn uu_mv::parse_paths(a0: &struct24, a1: u64, a2: u32, a3: u8) -> u64 {
    if !(!a3) {
        goto LABEL_0x4f6700;
    }
    return <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1, a1 + a2 * 24);
}
