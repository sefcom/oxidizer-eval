fn uu_tail::follow::files::FileHandling::from(a0: &struct10, a1: void*, a2: u32) -> u64 {
    let v0: Option<struct16>;  // [sp-0x38], Other Possible Types: u128
    let v3: u64;  // rdx
    let v4: u8;  // al

    v0 = std::thread::local::LocalKey<T>::try_with(core::ops::function::FnOnce::call_once, a2);
    hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(&a0->padding_8[16], a1->field_28, core::result::Result<T,E>::expect(&v0), v3);
    v4 = a1->field_4a;
    return struct10 {
        field_0: 0x8000000000000000
        field_72: <UNKNOWN>
        field_73: <UNKNOWN>
    };
}
