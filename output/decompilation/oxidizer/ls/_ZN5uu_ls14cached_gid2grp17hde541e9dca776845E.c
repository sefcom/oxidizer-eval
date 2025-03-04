fn uu_ls::cached_gid2grp(a0: &struct24, a1: u32) -> u64 {
    let v0: i32;  // [sp-0x64]
    let v1: struct17;  // [sp-0x60], Other Possible Types: Result<struct24, struct20>
    let v2: Result<struct24, struct20>;  // [sp-0x40]

    v0 = a1;
    v1 = std::sync::mutex::Mutex<T>::lock(once_cell::sync::OnceCell<T>::get_or_try_init(&_ZN5uu_ls14cached_gid2grp9GID_CACHE17hb1a9b67160661867E, &_ZN5uu_ls14cached_gid2grp9GID_CACHE17hb1a9b67160661867E));
    v1 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(core::result::Result<T,E>::unwrap(&v1, "src/uu/ls/src/ls.rs") + 8, a1 as u64);
    v2 = v1;
    <alloc::string::String as core::clone::Clone>::clone(a0, std::collections::hash::map::Entry<K,V>::or_insert_with(&v2, &v0));
    return;
}
