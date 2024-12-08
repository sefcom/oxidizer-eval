fn uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [sp-0x80], Other Possible Types: i192
    let v1: i256;  // [sp-0x68], Other Possible Types: struct32
    let v2: i320;  // [sp-0x48], Other Possible Types: struct40
    let v4: i64;  // rbx
    let v5: i64;  // rdx

    v4 = a0 + 72;
    v2 = alloc::vec::Vec<T,A>::drain(v4, a2);
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v2);
    alloc::vec::Vec<T,A>::append_elements(v4, core::slice::iter::Iter<T>::make_slice(a1, a2 + a1), v5);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(v4, &v1, v5);
}
