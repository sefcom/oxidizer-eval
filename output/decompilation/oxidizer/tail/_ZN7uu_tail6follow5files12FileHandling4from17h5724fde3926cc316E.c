fn uu_tail::follow::files::FileHandling::from(a1: i64) -> : struct10 {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: i64;  // rdi
    let v4: u32;  // rdx
    let v5: u8;  // al

    v0 = std::thread::local::LocalKey<T>::try_with(core::ops::function::FnOnce::call_once);
    v2 = core::result::Result<T,E>::expect(&v0);
    hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v3 + 24, *((a0 + 40) as &i64), v2, v4);
    v5 = *((a0 + 74) as &i8);
    *(v3 as &i64) = 0x8000000000000000;
    *((v3 + 72) as &u8) = v5;
    *((v3 + 73) as &i8) = 0;
    return;
}
