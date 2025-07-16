fn uu_ls::cached_gid2grp(a1: i32) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0x64]
    let v1: u8;  // [bp-0x60]
    let v2: u8;  // [bp-0x58]
    let v3: std::ffi::os_str::OsString;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]
    let v5: u8;  // [bp-0x38]
    let v6: u64;  // [bp-0x28]
    let v10: u32;  // ecx

    v0 = a1;
    std::sync::mutex::Mutex<T>::lock(&v1, once_cell::sync::OnceCell<T>::get_or_try_init(&_ZN5uu_ls14cached_gid2grp9GID_CACHE17hb1a9b67160661867E, &_ZN5uu_ls14cached_gid2grp9GID_CACHE17hb1a9b67160661867E));
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(core::result::Result<T,E>::unwrap(&v1, "src/uu/ls/src/ls.rs") + 8, a1, v10);
    memcpy(&v5, &v2, 16);
    v6 = v3;
    v4 = v1;
    <alloc::string::String as core::clone::Clone>::clone(a0, std::collections::hash::map::Entry<K,V>::or_insert_with(&v4, &v0));
    return;
}
