fn uu_ls::cached_uid2usr(a1: i32) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0x64]
    let v1: u8;  // [bp-0x60], Other Possible Types: struct32
    let v2: std::ffi::os_str::OsString;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u8;  // [bp-0x38]
    let v5: u64;  // [bp-0x28]

    v0 = a1;
    std::sync::mutex::Mutex<T>::lock(&v1, once_cell::sync::OnceCell<T>::get_or_try_init(&_ZN5uu_ls14cached_uid2usr9UID_CACHE17h8e092248b51c5bcaE, &_ZN5uu_ls14cached_uid2usr9UID_CACHE17h8e092248b51c5bcaE));
    v1 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(core::result::Result<T,E>::unwrap(&v1, "src/uu/ls/src/ls.rs") + 8, a1);
    memcpy(&v4, &v1 as u128, 16);
    v5 = v2;
    v3 = v1.field_0;
    <alloc::string::String as core::clone::Clone>::clone(a0, std::collections::hash::map::Entry<K,V>::or_insert_with(&v3, &v0));
    return;
}
