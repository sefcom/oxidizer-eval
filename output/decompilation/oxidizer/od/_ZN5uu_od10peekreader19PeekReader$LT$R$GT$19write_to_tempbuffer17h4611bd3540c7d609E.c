fn uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x80]
    let v1: struct32;  // [bp-0x68]
    let v2: struct40;  // [bp-0x48]
    let v4: u64;  // rbx
    let v6: &[u8];  // rax:rdx

    v4 = a0 + 72;
    v2 = alloc::vec::Vec<T,A>::drain(v4);
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v2);
    v6 = core::slice::iter::Iter<T>::make_slice(a1);
    alloc::vec::Vec<T,A>::append_elements(v4, v6.ptr, a2);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(v4, &v1);
}
