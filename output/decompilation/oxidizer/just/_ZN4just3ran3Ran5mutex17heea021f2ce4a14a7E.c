fn just::ran::Ran::mutex(a0: u32, a1: &u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x78]
    let v1: struct17;  // [bp-0x60], Other Possible Types: struct24, struct56
    let v2: u192;  // [bp-0x60]
    let v4: core::option::Option<&str>;  // rbx
    let v6: struct65;  // rsi
    let v7: core::option::Option<&str>;  // rax
    let v8: i64;  // rax

    v1 = std::sync::poison::mutex::Mutex<T>::lock(a0);
    v4 = core::result::Result<T,E>::unwrap(&v1);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(just::recipe::Recipe::namepath(a1), a2);
    v6 = v4;
    v0 = v2;
    v1 = alloc::collections::btree::map::BTreeMap<K,V,A>::entry(v6 + 8, &v0);
    v7 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v1);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v0, a2, a3);
    v1 = alloc::collections::btree::map::BTreeMap<K,V,A>::entry(v7, &v0);
    v8 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v1);
    if _ccall(14, 24, atomic_fetch_add(*(v8 as &i64)) as u64 + 1, 0, (v6 + 8 <= v6 ? 1 : 0)) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 6828832()
    }
    return *(v8 as &i64);
}
