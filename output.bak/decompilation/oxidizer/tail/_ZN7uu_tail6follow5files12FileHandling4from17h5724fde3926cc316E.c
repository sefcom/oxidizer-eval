fn uu_tail::follow::files::FileHandling::from(a0: &struct10, a1: void*) -> u64 {
    let v0: i136;  // [sp-0x38], Other Possible Types: Option<struct16>
    let v3: i64;  // rdx
    let v4: i8;  // al

    v0 = std::thread::local::LocalKey<T>::try_with(core::ops::function::FnOnce::call_once);
    hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a0 + 24, *((a1 + 40) as &i64), core::result::Result<T,E>::expect(&v0), v3);
    v4 = *((a1 + 74) as &i8);
    return struct10 {
        field_0: 0x8000000000000000
        field_72: <UNKNOWN>
        field_73: <UNKNOWN>
    };
}
