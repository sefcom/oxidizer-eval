fn uu_ls::cached_uid2usr(a0: i64, a1: i32, a2: i64) -> u64 {
    let v0: i8;  // [bp-0x64]
    let v1: i136;  // [sp-0x60], Other Possible Types: struct17, Result<struct24, struct20>
    let v2: i8;  // [bp-0x48]
    let v3: i64;  // [sp-0x40]
    let v4: i128;  // [sp-0x38]
    let v5: i64;  // [sp-0x28]
    let v7: i64;  // rdx

    v1 = std::sync::mutex::Mutex<T>::lock(once_cell::sync::OnceCell<T>::get_or_try_init(&_ZN5uu_ls14cached_uid2usr9UID_CACHE17hd444170ce52cfeaeE, &_ZN5uu_ls14cached_uid2usr9UID_CACHE17hd444170ce52cfeaeE), v7);
    v1 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(core::result::Result<T,E>::unwrap(&v1, "src/uu/ls/src/ls.rs") + 8, a1);
    v4 = *((&v1 as &char + 8) as &i128);
    v5 = v2;
    v3 = v1;
    <alloc::string::String as core::clone::Clone>::clone(a0, std::collections::hash::map::Entry<K,V>::or_insert_with(&v3, &v0, v7));
    return;
}
