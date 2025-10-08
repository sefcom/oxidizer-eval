fn uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(a0: u64, a1: u64, a2: u64) -> void {
    let v0: u64;  // [bp-0x60]
    let v1: struct32;  // [bp-0x48], Other Possible Types: struct40
    let v3: u64;  // rbx

    v3 = a0 + 112;
    v1 = alloc::vec::Vec<T,A>::drain(v3);
    core::iter::traits::iterator::Iterator::collect(&v0, &v1);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v3, a1, a2 + a1);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(v3, &v1);
    return;
}
