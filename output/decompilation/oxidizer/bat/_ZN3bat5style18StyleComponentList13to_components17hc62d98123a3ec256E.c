fn bat::style::StyleComponentList::to_components(a0: u32, a1: &u64, a2: u8) -> void {
    let v0: u8;  // [bp-0xa9]
    let v1: u128;  // [bp-0xa8]
    let v2: struct48;  // [bp-0xa8]
    let v3: iNone;  // [bp-0x98]
    let v4: iNone;  // [bp-0x88]
    let v5: struct48;  // [bp-0x78]
    let v6: iNone;  // [bp-0x68]
    let v7: iNone;  // [bp-0x58]
    let v8: struct32;  // [bp-0x40]
    let v10: u64;  // rax
    let v11: u64;  // rdx

    v0 = a2;
    v5 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v4 = v7;
    v3 = v6;
    v1 = v5.field_0;
    v10 = bat::style::StyleComponent::components(0) as u64;
    <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v1, v10, v11 + v10);
    v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v5 = v2;
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(a0, &v8, &v5, &v0);
    return;
}
